# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD$

PORTNAME=	gnome-screenshot
PORTVERSION=	3.26.0
CATEGORIES=	deskutils gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME 3 utility for making picutures of your screen

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	appstream-builder:devel/appstream-glib
LIB_DEPENDS=	libcanberra.so:audio/libcanberra \
		libcanberra-gtk3.so:audio/libcanberra-gtk3

CONFLICTS=	gnome-utils-2.[0-9]*
PORTSCOUT=	limitw:1,even

USES=		gettext gnome localbase meson pkgconfig python:3.4+,build \
		shebangfix tar:xz
USE_GNOME=	cairo gdkpixbuf2 gtk30
USE_XORG=	x11 xext
SHEBANG_FILES=	build-aux/postinstall.py

GLIB_SCHEMAS=	org.gnome.gnome-screenshot.gschema.xml

.include <bsd.port.mk>
