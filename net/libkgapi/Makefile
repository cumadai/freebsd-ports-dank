# $FreeBSD: branches/plasma5/KDE/net/libkgapi/Makefile 13961 2017-04-26 15:29:37Z tcberner $

PORTNAME=	libkgapi
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE based library to access google services

LICENSE=	LGPL21

LIB_DEPENDS=	libical.so:devel/libical

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash ecm emoticons guiaddons i18n iconthemes init \
		itemmodels itemviews jobwidgets kdelibs4support kio \
		notifications parts service textwidgets unitconversion \
		widgetsaddons windowsystem xmlgui solid sonnet
# pim components
USE_KDE+=	calendarcore contacts
USE_QT5=	core dbus network printsupport webengine widgets xml \
		buildtools_build gui qmake_build

USE_LDCONFIG=	yes


.include <bsd.port.mk>
