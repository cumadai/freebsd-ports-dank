# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD$

PORTNAME=	kdeaccessibility
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	accessibility kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Accessibility applications for KDE 4

USES=		kde:4 metaport

OPTIONS_DEFINE=	JOVIE KACCESSIBLE KMAG KMOUSETOOL KMOUTH
OPTIONS_DEFAULT:=	${OPTIONS_DEFINE}

JOVIE_DESC=		Install Jovie text-to-speech system
JOVIE_RUN_DEPENDS=	${KDE_PREFIX}/bin/jovie:accessibility/jovie

KACCESSIBLE_DESC=	Install Accessibility services for KDE
KACCESSIBLE_RUN_DEPENDS=	${KDE_PREFIX}/lib/kde4/libexec/kaccessibleapp:accessibility/kaccessible

KMAG_DESC=		Install Screen magnifier
KMAG_RUN_DEPENDS=	${KDE_PREFIX}/bin/kmag:accessibility/kmag

KMOUSETOOL_DESC=	Install Automatic mouse click tool
KMOUSETOOL_RUN_DEPENDS=	${KDE_PREFIX}/bin/kmousetool:accessibility/kmousetool

KMOUTH_DESC=		Install Speech synthesizer frontend
KMOUTH_RUN_DEPENDS=	${KDE_PREFIX}/bin/kmouth:accessibility/kmouth

.include <bsd.port.mk>
