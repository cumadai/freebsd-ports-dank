# $FreeBSD: branches/plasma5/KDE/devel/kf5-ki18n/Makefile 13785 2017-03-18 23:04:11Z tcberner $

PORTNAME=	ki18n
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 advanced internationalization framework

USES=		cmake:outsource compiler:c++11-lib gettext-runtime \
		gettext-tools:build,run kde:5 tar:xz
USE_KDE=	ecm
USE_QT5=	buildtools_build concurrent core qmake_build qml script testlib

.include <bsd.port.mk>
