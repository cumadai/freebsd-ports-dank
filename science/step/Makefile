# $FreeBSD: branches/plasma5/KDE/science/step/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	step
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	science kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE interactive physics simulator

LIB_DEPENDS=	libqalculate.so:math/libqalculate \
		libgsl.so:math/gsl

USES=		cmake:outsource eigen:3 gettext kde:5 pkgconfig tar:xz
USE_KDE=	config doctools ecm emoticons init itemmodels kdelibs4support \
		khtml newstuff plotting
USE_QT5=	buildtools_build core gui network opengl printsupport \
		qmake_build qml quick svg widgets xml

pre-configure:
# Avoid building translations, should the user pass
# CURRENT_LANG to CMake.
	${REINPLACE_CMD} -e '/set(STEP_BUILD_TRANSLATIONS 1)/ d' \
		${WRKSRC}/${PORTNAME}/data/CMakeLists.txt

.include <bsd.port.mk>
