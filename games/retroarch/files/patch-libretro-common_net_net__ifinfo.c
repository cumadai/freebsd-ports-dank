--- libretro-common/net/net_ifinfo.c.orig	2018-02-19 12:43:32 UTC
+++ libretro-common/net/net_ifinfo.c
@@ -48,6 +48,8 @@
 #include <netinet/in.h>
 #endif
 
+#include <netinet/in.h>
+
 void net_ifinfo_free(net_ifinfo_t *list)
 {
    unsigned k;
