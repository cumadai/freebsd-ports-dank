# $FreeBSD: branches/plasma5/KDE/x11/kf5-frameworkintegration/Makefile 13591 2017-01-14 18:07:11Z tcberner $

PORTNAME=	frameworkintegration
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 workspace and cross-framework integration plugins

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 pkgconfig \
		tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons ecm i18n \
		iconthemes kio newstuff notifications package widgetsaddons
USE_QT5=	buildtools_build core dbus gui qmake_build widgets \
		x11extras xml
USE_XORG=	xcb xcursor

.include <bsd.port.mk>
