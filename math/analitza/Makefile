# $FreeBSD: branches/plasma5/KDE/math/analitza/Makefile 13829 2017-04-09 08:51:06Z tcberner $

PORTNAME=	analitza
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	math kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library from KDE Education project

LICENSE=		GFDL GPLv2
LICENSE_COMB=		multi
LICENSE_FILE_GFDL=	${WRKSRC}/COPYING.DOC
LICENSE_FILE_GPLv2=	 ${WRKSRC}/COPYING

USES=		cmake:outsource kde:5 tar:xz
USE_GL=		glu
USE_KDE=	ecm
USE_QT5=	core opengl printsupport qml quick svg widgets xml \
		buildtools_build linguisttools_build qmake_build 

USE_LDCONFIG=	yes

SHLIB_VER=	8.0.0
PLIST_SUB+=	SHLIB_VER="${SHLIB_VER}" \
		SHLIB_SHVER="${SHLIB_VER:R:R}"

.include <bsd.port.mk>
