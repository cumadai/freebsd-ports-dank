# $FreeBSD$

PORTNAME=	kpovmodeler
DISTVERSION=	${APP_VER}.${EXTRA_VER}
PORTREVISION=	14
CATEGORIES=	graphics kde
MASTER_SITES=	KDE/Attic/${EXTRA_VER}/src/extragear
DISTNAME=	${PORTNAME}-${APP_VER}-kde${EXTRA_VER}
DIST_SUBDIR=	KDE/extragear

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE editor/frontend for Povray

RUN_DEPENDS=	povray:graphics/povray-meta

USES=		cmake gettext kde:4 tar:bzip2
USE_GL=		glu
USE_KDE=	kdelibs automoc4
USE_QT4=	corelib opengl qmake_build moc_build rcc_build uic_build

APP_VER=	1.1.3
EXTRA_VER=	4.3.1

post-patch:
#Fix build with kdelibs>=4.5.0
	${REINPLACE_CMD} -e 's,V4.1.2-Based,V4.2-Based,g' \
		${WRKSRC}/doc-translations/hu_kpovmodeler/kpovmodeler/index.docbook

.include <bsd.port.mk>
