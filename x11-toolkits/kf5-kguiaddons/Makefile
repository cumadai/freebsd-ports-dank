# $FreeBSD: branches/plasma5/KDE/x11-toolkits/kf5-kguiaddons/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kguiaddons
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 addons to QtGui

USES=		cmake:outsource compiler:c++11-lib kde:5 pkgconfig tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build core gui qmake_build testlib widgets x11extras
USE_XORG=	ice sm x11 xcb xext

.include <bsd.port.mk>
