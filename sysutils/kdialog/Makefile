# $FreeBSD: branches/plasma5/KDE/sysutils/kdialog-kf5/Makefile 13487 2016-12-17 10:57:29Z tcberner $

PORTNAME=	kdialog
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Show nice dialog boxes from shell scripts

USES=		cmake:outsource gettext kde:5 pkgconfig tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash ecm guiaddons i18n iconthemes itemviews \
		jobwidgets kdelibs4support kio notifications parts service \
		solid sonnet textwidgets unitconversion widgetsaddons \
		windowsystem xmlgui
USE_QT5=	core dbus gui network printsupport widgets xml \
		buildtools_build qmake_build
USE_XORG=	x11

.include <bsd.port.mk>
