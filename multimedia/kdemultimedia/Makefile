# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD$

PORTNAME=	kdemultimedia
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	multimedia kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Multimedia applications (meta port)

USES=		kde:5 metaport
USE_QT5=	#

OPTIONS_DEFINE=		DRAGON FFMPEG AUDIOCD_KIO KMIX
OPTIONS_DEFAULT=	${OPTIONS_DEFINE}

DRAGON_DESC=		Simple video player
DRAGON_RUN_DEPENDS=	dragon>=${KDE_APPLICATIONS_VERSION}:multimedia/dragon

FFMPEG_DESC=		FFMPEG-based video thumbnailer
FFMPEG_RUN_DEPENDS=	kdemultimedia-ffmpegthumbs>=${KDE_APPLICATIONS_VERSION}:multimedia/kdemultimedia-ffmpegthumbs

AUDIOCD_KIO_DESC=	Audio CD IOSlave
AUDIOCD_KIO_RUN_DEPENDS=	audiocd-kio>=${KDE_APPLICATIONS_VERSION}:audio/audiocd-kio

KMIX_DESC=		Audio mixer
KMIX_RUN_DEPENDS=	kmix>=${KDE_APPLICATIONS_VERSION}:audio/kmix

.include <bsd.port.mk>
