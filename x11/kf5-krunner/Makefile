# $FreeBSD: branches/plasma5/KDE/x11/kf5-krunner/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	krunner
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 parallelized query system

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	config coreaddons ecm i18n kio package plasma-framework \
		service solid threadweaver
USE_QT5=	buildtools_build core gui network qmake_build qml \
		quick widgets

.include <bsd.port.mk>
