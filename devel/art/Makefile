# Created by: Vladimir Gorelov <virtual.lark@gmail.com>
# $FreeBSD$

PORTNAME=	art
PORTVERSION=	0.9.01
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://skylark.tsu.ru/art/0.9/download/src/ \
		SF/art-project/src/

MAINTAINER=	virtual.lark@gmail.com
COMMENT=	Resource tracing, debugging, and profiling tool

LICENSE=	GPLv3

LIB_DEPENDS=	libxml++-2.6.so:textproc/libxml++26

USES=		compiler:c++11-lang gmake pkgconfig
USE_CXXSTD=	c++11

OPTIONS_DEFINE=	DOCS

post-patch:
	@${FIND} ${WRKSRC} -type f -name Makefile | ${XARGS} \
		${REINPLACE_CMD} -e '/$$(CXX)/s,CFLAGS,CXXFLAGS,' \
		-e 's,^CFLAGS+=,CXXFLAGS+=,'

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/artlibgen/src/artlibgen \
		${WRKSRC}/artrepgen/artrepgen ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for docs in posix-gcc-mt-file-lint.xml posix-gcc-mt-netw-lint.xml \
 posix-gcc-mt-file-special.xml
	${INSTALL_DATA} ${WRKSRC}/artlibgen/templates/${docs} \
		${STAGEDIR}${DOCSDIR}
.endfor

.if defined(MAINTAINER_MODE)
full-regression-test: build
	cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} ${MAKE_CMD} test
.endif

.include <bsd.port.mk>
