# $FreeBSD: branches/plasma5/KDE/games/kgoldrunner/Makefile 13778 2017-03-18 08:55:35Z tcberner $

PORTNAME=	kgoldrunner
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		crash dbusaddons ecm i18n kio libkdegames service \
		widgetsaddons xmlgui
USE_QT5=	core dbus gui network qml quick widgets xml \
		buildtools_build qmake_build

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
