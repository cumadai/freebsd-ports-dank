# $FreeBSD: branches/plasma5/KDE/devel/plasma5-khotkeys/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	khotkeys
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	devel kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 library for hotkeys

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons ecm emoticons globalaccel \
		guiaddons i18n iconthemes init itemmodels itemviews jobwidgets \
		kcmutils kdelibs4support kio notifications parts \
		plasma-framework plasma-workspace service solid sonnet \
		textwidgets unitconversion widgetsaddons windowsystem xmlgui
USE_QT5=	buildtools_build core dbus gui network printsupport \
		qmake_build widgets x11extras xml
USE_XORG=	x11

.include <bsd.port.mk>
