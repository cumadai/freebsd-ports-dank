# $FreeBSD: branches/plasma5/KDE/x11-themes/plasma5-oxygen/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	oxygen
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11-themes kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 Oxygen style

USES=		cmake:outsource compiler:c++11-lib cpe gettext \
		kde:5 pkgconfig tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons decoration ecm \
		frameworkintegration guiaddons i18n kcmutils service \
		widgetsaddons windowsystem
USE_QT5=	buildtools_build core dbus gui qmake_build widgets x11extras xml
USE_XORG=	xcb

.include <bsd.port.mk>
