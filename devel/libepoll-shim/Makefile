# Created by: Johannes Lundberg <johalun0@gmail.com>
# $FreeBSD$

PORTNAME=	libepoll-shim
PORTVERSION=	0.0.20171213
CATEGORIES=	devel

MAINTAINER=	x11@FreeBSD.org
COMMENT=	epoll shim implemented using kevent

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	jiixyj
GH_PROJECT=	epoll-shim
GH_TAGNAME=	d7abd75

USE_LDCONFIG=	yes

USES=		compiler uidfix
MAKE_ARGS=	INCSDIR=${PREFIX}/include/libepoll-shim/sys \
		LIBDIR=${PREFIX}/lib WITHOUT_PROFILE=yes

.include <bsd.port.pre.mk>

post-patch:
.if "${CHOSEN_COMPILER_TYPE}" == "gcc"
	@${REINPLACE_CMD} -e 's|Wno-missing-variable-declarations|Wno-missing-declarations|' \
		-e 's|-Wno-thread-safety-analysis||' -e 's|Weverything|Wall|' ${WRKSRC}/Makefile
.endif

pre-install:
	@${MKDIR} ${STAGEDIR}/${PREFIX}/include/libepoll-shim/sys

.include <bsd.port.post.mk>
