# $FreeBSD: branches/plasma5/KDE/devel/kf5-kdoctools/Makefile 13250 2016-11-06 16:34:10Z tcberner $

PORTNAME=	kdoctools
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 documentation generation from docbook

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml \
		p5-URI>=0:net/p5-URI
RUN_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_GNOME=	libxml2 libxslt
USE_KDE=	archive ecm i18n
USE_QT5=	buildtools_build core qmake_build

.include <bsd.port.mk>
