# $FreeBSD: head/misc/kde4-xdg-env/Makefile 415977 2016-05-28 07:53:25Z pi $

PORTNAME=	xdg
DISTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	misc kde
PKGNAMEPREFIX=	kde4-
PKGNAMESUFFIX=	-env
DISTFILES=	# none

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Script which hooks into startkde and helps KDE pick up XDG apps/menus

NO_BUILD=	yes

SUB_FILES=	xdg-env.sh

PLIST_FILES=	env/xdg-env.sh

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/env
	${INSTALL_SCRIPT} ${WRKDIR}/xdg-env.sh ${STAGEDIR}${PREFIX}/env

.include <bsd.port.mk>
