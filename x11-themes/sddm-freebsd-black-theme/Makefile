# $FreeBSD$

PORTNAME=	sddm-freebsd-black-theme
PORTVERSION=	1.0
CATEGORIES=	x11-themes

MAINTAINER=	lebarondemerde@privacychain.ch
COMMENT=	Simple SDDM theme inspired on the FBSD SLiM theme

LICENSE=	CC-BY-SA-3.0
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	lebarondemerde

NO_BUILD=	yes

THEMEDIR_REL=	share/sddm/themes/sddm-freebsd-black-theme
THEMEDIR=	${PREFIX}/${THEMEDIR_REL}
PLIST_SUB=	THEMEDIR=${THEMEDIR_REL}

SUB_FILES=	pkg-message
PORTDOCS=	README.md AUTHORS COPYING TRADEMARKS

do-install:
	${MKDIR} ${STAGEDIR}${THEMEDIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${THEMEDIR} \
		"! ( -name README.md -o -name AUTHORS -o -name COPYING -o -name TRADEMARKS )")
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKDIR}/${PORTNAME}-${PORTVERSION} && \
		${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
