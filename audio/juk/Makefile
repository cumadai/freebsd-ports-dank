# Created by: Raphael Kubo da Costa <rakuco@FreeBSD.org>
# $FreeBSD$

PORTNAME=	juk
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	audio kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Jukebox, tagger and music collection manager

LICENSE=	GPLv2

LIB_DEPENDS=	libtag.so:audio/taglib

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	moc_build qmake_build rcc_build uic_build

CMAKE_ARGS=	-DWITH_TunePimp:BOOL=OFF

.include <bsd.port.mk>
