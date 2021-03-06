# Created by: FreeBSD GNOME Team <gnome@freebsd.org>
# $FreeBSD$

PORTNAME=	appstream-glib
PORTVERSION=	0.7.5
CATEGORIES=	devel
MASTER_SITES=	http://people.freedesktop.org/~hughsient/appstream-glib/releases/
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Library to help with AppStream metadata

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

CONFLICTS_BUILD=	appstream-glib-0.5.*

BUILD_DEPENDS=	gtkdoc-check:textproc/gtk-doc \
		gcab:archivers/gcab
LIB_DEPENDS=	libsoup-2.4.so:devel/libsoup \
		libjson-glib-1.0.so:devel/json-glib \
		libyaml.so:textproc/libyaml \
		libuuid.so:misc/e2fsprogs-libuuid \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2
RUN_DEPENDS=	gcab:archivers/gcab

USES=		gettext gperf gnome libarchive meson \
		pkgconfig sqlite tar:xz
USE_GNOME=	cairo gdkpixbuf2 glib20 gtk30 introspection:build \
		libxml2:build pango
USE_LDCONFIG=	yes
MESON_ARGS=	-Drpm=false \
		-Dalpm=false \
		-Dstemmer=false

OPTIONS_DEFINE=	MANPAGES
OPTIONS_DEFAULT=MANPAGES
OPTIONS_SUB=	yes

MANPAGES_MESON_TRUE=	man
MANPAGE_BUILD_DEPENDS=	docbook-xml>=0:textproc/docbook-xml \
		docbook-xsl>=0:textproc/docbook-xsl
MANPAGES_USE=	GNOME=libxslt:build

.include <bsd.port.mk>
