# $FreeBSD: branches/plasma5/KDE/x11-themes/plasma5-plasma-workspace-wallpapers/Makefile 13409 2016-11-22 11:08:09Z tcberner $

PORTNAME=	plasma-workspace-wallpapers
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11-themes kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 wallpapers

USES=		cmake:outsource cpe kde:5 tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build qmake_build

# The qmake dependency is only needed so that kf5-e-c-m can query qmake for
# some installation directories.
# We explicitly prevent it from looking for qt5-core and specify qmake's path
# to avoid needlessly depending on qt5-core.
CMAKE_ARGS=	-DCMAKE_DISABLE_FIND_PACKAGE_Qt5Core=TRUE \
		-DQMAKE_EXECUTABLE:PATH=${QMAKE}

.include <bsd.port.mk>
