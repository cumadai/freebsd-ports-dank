# Created by: Olivier Duchateau
# $FreeBSD$

PORTNAME=	lollypop
DISTVERSION=	0.9.402
CATEGORIES=	audio

MAINTAINER=	greg@unrelenting.technology
COMMENT=	Play and organize your music collection

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlite3>=2.7.8:databases/py-sqlite3@${PY_FLAVOR} \
		itstool:textproc/itstool \
		${PYTHON_PKGNAMEPREFIX}dbus>=1.1.1:devel/py-dbus@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}gstreamer1>=1.4.0:multimedia/py-gstreamer1@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pylast>=1.4.0:audio/py-pylast@${PY_FLAVOR}
LIB_DEPENDS=	libnotify.so:devel/libnotify \
		libappstream-glib.so:devel/appstream-glib \
		libtotem-plparser.so:multimedia/totem-pl-parser

USES=		python:3.4+ pkgconfig gettext meson shebangfix sqlite desktop-file-utils
USE_GITLAB=	yes
GL_SITE=	https://gitlab.gnome.org
GL_ACCOUNT=	gnumdk
GL_COMMIT=	82b0560f08c7994876012d4477aec16b17c2e74d
GL_TUPLE=	gnumdk:lollypop-po:19370f539c81c971b8bad8b2827152a69cf7305e:po/subprojects/po
USE_GNOME=	glib20 gtk30 pygobject3 introspection:build intltool intlhack
USE_GSTREAMER1=	yes mpg123 ogg flac opus libav faad good speex
USE_PYTHON=	py3kplist
INSTALLS_ICONS=	yes

SHEBANG_FILES=	lollypop/*.py

GLIB_SCHEMAS=	org.gnome.Lollypop.gschema.xml

OPTIONS_DEFINE=	PULSEAUDIO
PULSEAUDIO_USE=	gstreamer1=pulse

SUB_FILES=	pkg-message

.include <bsd.port.mk>
