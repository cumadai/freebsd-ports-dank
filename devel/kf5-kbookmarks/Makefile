# $FreeBSD: branches/plasma5/KDE/devel/kf5-kbookmarks/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kbookmarks
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library for bookmarks and the XBEL format

USES=		cmake:outsource compiler:c++11-lib kde:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons ecm \
		iconthemes widgetsaddons xmlgui
USE_QT5=	buildtools_build core dbus gui linguisttools \
		qmake_build widgets xml

.include <bsd.port.mk>
