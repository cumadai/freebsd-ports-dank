# Created by: Gustau Perez <gustau.perez@gmail.com>
# $FreeBSD$

PORTNAME=	gnome-sound-recorder
PORTVERSION=	3.24.0.1
CATEGORIES=	deskutils gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME sound recorder application

LIB_DEPENDS=	libgjs.so:lang/gjs

PORTSCOUT=	limitw:1,even

USES=		gettext gmake gnome libtool localbase pathfix \
		pkgconfig python:3.4+ tar:xz
USE_GNOME=	gnomedesktop3 gtk30 intlhack introspection:build
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
GLIB_SCHEMAS=	org.gnome.gnome-sound-recorder.gschema.xml

.include <bsd.port.mk>
