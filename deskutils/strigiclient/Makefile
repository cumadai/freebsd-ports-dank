# $FreeBSD$

PORTNAME=	strigiclient
DISTVERSION=	${STRIGI_VERSION}
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	${STRIGI_MASTER_SITES}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Strigi desktop search: Qt4 GUI

LIB_DEPENDS=	libstreams.so:deskutils/libstreams \
		libstreamanalyzer.so:deskutils/libstreamanalyzer \
		libsearchclient.so:deskutils/strigidaemon

USE_QT4=	corelib gui dbus moc_build uic_build qmake_build rcc_build
USE_LDCONFIG=	yes

.include <${.CURDIR}/../strigi/Makefile.common>
.include <bsd.port.mk>
