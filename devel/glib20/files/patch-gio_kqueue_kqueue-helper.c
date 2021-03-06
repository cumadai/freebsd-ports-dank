This bug combines serveral patches:
https://bugzilla.gnome.org/show_bug.cgi?id=778515
and
https://bugzilla.gnome.org/show_bug.cgi?id=739424
https://bug739424.bugzilla-attachments.gnome.org/attachment.cgi?id=351191

--- gio/kqueue/kqueue-helper.c.orig	2018-01-08 21:00:49.000000000 +0100
+++ gio/kqueue/kqueue-helper.c	2018-01-15 21:56:13.255353000 +0100
@@ -43,7 +43,7 @@ static gboolean kh_debug_enabled = FALSE;
 #define KH_W if (kh_debug_enabled) g_warning
 
 static GHashTable *subs_hash_table = NULL;
-G_LOCK_DEFINE_STATIC (hash_lock);
+G_LOCK_DEFINE (hash_lock);
 
 static int kqueue_descriptor = -1;
 static int kqueue_socket_pair[] = {-1, -1};
@@ -293,10 +293,10 @@ process_kqueue_notifications (GIOChannel   *gioc,
 
   G_LOCK (hash_lock);
   sub = (kqueue_sub *) g_hash_table_lookup (subs_hash_table, GINT_TO_POINTER (n.fd));
-  G_UNLOCK (hash_lock);
 
   if (sub == NULL)
     {
+      G_UNLOCK (hash_lock);
       KH_W ("Got a notification for a deleted or non-existing subscription %d",
              n.fd);
       return TRUE;
@@ -338,6 +338,7 @@ process_kqueue_notifications (GIOChannel   *gioc,
         g_file_monitor_source_handle_event (source, mask, NULL, NULL, NULL, g_get_monotonic_time ());
     }
 
+  G_UNLOCK (hash_lock);
   return TRUE;
 }
 
@@ -453,13 +454,14 @@ _kh_start_watching (kqueue_sub *sub)
 
   G_LOCK (hash_lock);
   g_hash_table_insert (subs_hash_table, GINT_TO_POINTER (sub->fd), sub);
-  G_UNLOCK (hash_lock);
 
   _kqueue_thread_push_fd (sub->fd);
   
   /* Bump the kqueue thread. It will pick up a new sub entry to monitor */
   if (!_ku_write (kqueue_socket_pair[0], "A", 1))
     KH_W ("Failed to bump the kqueue thread (add fd, error %d)", errno);
+  G_UNLOCK (hash_lock);
+
   return TRUE;
 }
 
@@ -506,9 +508,7 @@ _kh_cancel_sub (kqueue_sub *sub)
 
   _km_remove (sub);
 
-  G_LOCK (hash_lock);
   removed = g_hash_table_remove (subs_hash_table, GINT_TO_POINTER (sub->fd));
-  G_UNLOCK (hash_lock);
 
   if (removed)
     {
