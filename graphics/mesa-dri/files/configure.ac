--- configure.ac.orig	2017-04-01 15:33:36 UTC
+++ configure.ac
@@ -942,7 +942,10 @@ if test "x$pthread_stubs_possible" = xyes; then
 fi
 
 dnl Check for futex for fast inline simple_mtx_t.
-AC_CHECK_HEADER([linux/futex.h], [DEFINES="$DEFINES -DHAVE_LINUX_FUTEX_H"])
+AC_CHECK_HEADERS([linux/futex.h sys/umtx.h],
+    [DEFINES="$DEFINES -DHAVE_LINUX_FUTEX_H"],,
+    [#include <errno.h>
+     #include <sys/types.h>])
 
 dnl SELinux awareness.
 AC_ARG_ENABLE([selinux],
@@ -1121,7 +1121,7 @@ fi
 AC_SUBST(LIBSENSORS_LIBS)
 
 case "$host_os" in
-linux*)
+linux* | freebsd*)
     dri3_default=yes
     ;;
 *)
@@ -2061,8 +2070,6 @@ if test "x$enable_opencl" = xyes; then
         CLANG_LIBDIR=${LLVM_LIBDIR}
     fi
     CLANG_RESOURCE_DIR=$CLANG_LIBDIR/clang/${LLVM_VERSION}
-    AS_IF([test ! -f "$CLANG_RESOURCE_DIR/include/stddef.h"],
-        [AC_MSG_ERROR([Could not find clang internal header stddef.h in $CLANG_RESOURCE_DIR Use --with-clang-libdir to specify the correct path to the clang libraries.])])
 fi
 AM_CONDITIONAL(HAVE_CLOVER, test "x$enable_opencl" = xyes)
 AM_CONDITIONAL(HAVE_CLOVER_ICD, test "x$enable_opencl_icd" = xyes)
