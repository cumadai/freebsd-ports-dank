# $FreeBSD: branches/plasma5/KDE/www/kf5-kjs/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kjs
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	www kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library providing an ECMAScript interpreter

LIB_DEPENDS=	libpcre.so:devel/pcre

USES=		cmake:outsource compiler:c++11-lib kde:5 pkgconfig tar:xz
USE_KDE=	ecm doctools
USE_QT5=	buildtools_build core qmake_build

.include <bsd.port.mk>
