# $FreeBSD: branches/plasma5/KDE/devel/kf5-kpeople/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kpeople
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library providing access to contacts

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	config coreaddons ecm i18n itemviews service widgetsaddons
USE_QT5=	buildtools_build core dbus gui network qmake_build qml \
		sql widgets

.include <bsd.port.mk>
