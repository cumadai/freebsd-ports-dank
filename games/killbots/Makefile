# $FreeBSD: branches/plasma5/KDE/games/killbots/Makefile 13724 2017-03-10 19:28:23Z tcberner $

PORTNAME=	killbots
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	completion config configwidgets coreaddons ecm guiaddons \
		i18n iconthemes itemviews kio libkdegames notifyconfig \
		widgetsaddons xmlgui
USE_QT5=	buildtools_build core gui qmake_build qml quick widgets

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
