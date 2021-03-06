# $FreeBSD$

PORTNAME=	libevdev
PORTVERSION=	1.5.7
CATEGORIES=	devel
MASTER_SITES=	http://freedesktop.org/software/${PORTNAME}/

MAINTAINER=	hselasky@FreeBSD.org
COMMENT=	Linux Event Device library

LICENSE=	MIT # without linux/*.h
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:devel/evdev-proto
LIB_DEPENDS=	libepoll-shim.so:devel/libepoll-shim

USES=		gmake libtool pathfix python:build tar:xz compiler localbase
EXTRACT_AFTER_ARGS=	--exclude include # v4l_compat
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_DOXYGEN="" ac_cv_path_VALGRIND=""
CPPFLAGS+=	-I${LOCALBASE}/include/libepoll-shim
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

# Test requires /dev/uinput and should be run as root
.if exists(/dev/uinput)
TEST_USES+=		pkgconfig
TEST_LIB_DEPENDS=	libcheck.so:devel/check
TEST_TARGET=	check
TEST_WRKSRC=	${WRKSRC}/test
.endif

.include <bsd.port.pre.mk>

# Do not allow clang optimize out calloc return value.
# Otherwise queue (over)allocation test fails
.if ${COMPILER_TYPE} == clang
CPPFLAGS+=	-fno-builtin
.endif

post-patch:
	@${REINPLACE_CMD} -e '/input\.h/s,top_srcdir,LOCALBASE,g' \
		${WRKSRC}/libevdev/Makefile.in
	@${REINPLACE_CMD} -e '/^LIBS = /s/$$/ -pthread -lrt -lepoll-shim/' \
		${WRKSRC}/tools/Makefile.in
	@${REINPLACE_CMD} -e 's|program_invocation_short_name|getprogname()|' \
		${WRKSRC}/tools/mouse-dpi-tool.c \
		${WRKSRC}/tools/touchpad-edge-detector.c \
		${WRKSRC}/tools/libevdev-tweak-device.c

.include <bsd.port.post.mk>
