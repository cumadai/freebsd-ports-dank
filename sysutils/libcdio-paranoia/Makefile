# $FreeBSD$

PORTNAME=	libcdio-paranoia
PORTVERSION=	10.2+0.94+1
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	GNU/libcdio

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Read audio from the CDROM directly as data

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcdio.so:sysutils/libcdio

USES=	pathfix tar:bzip2 gmake pkgconfig libtool perl5
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--without-versioned-libs
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
INSTALL_TARGET=install-strip

post-patch:
	${REINPLACE_CMD} -e 's|/jp/man1|/ja/man1|' \
		${WRKSRC}/doc/ja/Makefile.in

.include <bsd.port.mk>
