# $FreeBSD: branches/plasma5/KDE/deskutils/akonadiconsole/Makefile 13937 2017-04-23 15:49:32Z tcberner $

PORTNAME=	akonadiconsole
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Akonadi management and debugging console

LICENSE=	LGPL21

LIB_DEPENDS=	libassuan.so:security/libassuan  \
		libgpg-error.so:security/libgpg-error \
		libgpgme.so:security/gpgme \
		libgpgmepp.so:security/gpgme-cpp \
		libical.so:devel/libical

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons ecm guiaddons i18n iconthemes \
		itemmodels itemviews jobwidgets kdelibs4support kio \
		notifications parts service solid sonnet textwidgets \
		unitconversion widgetsaddons windowsystem xmlgui
# pim components
USE_KDE+=	akonadi akonadicalendar akonadicontacts akonadimime calendarcore calendarsupport contacts identitymanagement libkleo messagelib mime pimcommon pimtextedit
USE_QT5=	core dbus gui network printsupport sql widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
