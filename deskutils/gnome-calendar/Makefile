# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD$

PORTNAME=	gnome-calendar
PORTVERSION=	3.26.3
CATEGORIES=	deskutils gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Simple and beatiful calendar application for GNOME

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limitw:1,even

BUILD_DEPENDS=	gsettings-desktop-schemas>=0:devel/gsettings-desktop-schemas
LIB_DEPENDS=	libicui18n.so:devel/icu \
		libical.so:devel/libical \
		libsecret-1.so:security/libsecret \
		libsoup-2.4.so:devel/libsoup \
		libgoa-1.0.so:net/gnome-online-accounts
RUN_DEPENDS=	gsettings-desktop-schemas>=0:devel/gsettings-desktop-schemas

USES=		desktop-file-utils gettext gnome localbase:ldflags meson \
		pkgconfig python:3.4+,build shebangfix tar:xz
USE_LDCONFIG=	yes
INSTALLS_ICONS=	yes
USE_GNOME=	cairo evolutiondataserver3
SHEBANG_FILES=	meson_post_install.py

GLIB_SCHEMAS=	org.gnome.calendar.enums.xml \
		org.gnome.calendar.gschema.xml

.include <bsd.port.mk>
