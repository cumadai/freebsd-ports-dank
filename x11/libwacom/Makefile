# Created by: johalun0@gmail.com
# $FreeBSD$

PORTNAME=	libwacom
PORTVERSION=	0.23
CATEGORIES=	x11
MASTER_SITES=	SF/linuxwacom/${PORTNAME}

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Adds tablet support to libinput

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:devel/evdev-proto
LIB_DEPENDS=	libgudev-1.0.so:devel/libgudev

USES=		gettext-runtime gmake libtool localbase pkgconfig \
		pathfix tar:bzip2
USE_GNOME=	glib20
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ENV=	ac_cv_prog_HAVE_DOXYGEN=""

post-patch:
	@${REINPLACE_CMD} -e 's/-printf "%P\\n"/-print0 | xargs -0 basename/' \
		${WRKSRC}/data/Makefile.in

.include <bsd.port.mk>
