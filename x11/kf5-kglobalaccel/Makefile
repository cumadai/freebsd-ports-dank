# $FreeBSD: branches/plasma5/KDE/x11/kf5-kglobalaccel/Makefile 13452 2016-12-12 16:23:57Z tcberner $

PORTNAME=	kglobalaccel
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library to add support for global workspace shortcuts

LIB_DEPENDS=	libxcb-keysyms.so:x11/xcb-util-keysyms

USES=		cmake:outsource compiler:c++11-lib kde:5 tar:xz
USE_KDE=	ecm config coreaddons crash dbusaddons i18n service \
		windowsystem
USE_QT5=	buildtools_build core dbus gui linguisttools qmake_build \
		testlib widgets x11extras
USE_XORG=	xcb

.include <bsd.port.mk>
