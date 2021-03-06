# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD$

PORTNAME=	gnome-settings-daemon
PORTVERSION=	3.26.2
CATEGORIES=	sysutils gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME 3 settings daemon

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcanberra.so:audio/libcanberra \
		libcanberra-gtk3.so:audio/libcanberra-gtk3 \
		libpolkit-gobject-1.so:sysutils/polkit \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libcolord.so:graphics/colord \
		liblcms2.so:graphics/lcms2 \
		libpulse.so:audio/pulseaudio \
		libnotify.so:devel/libnotify \
		libgeoclue-2.so:net/geoclue \
		libupower-glib.so:sysutils/upower \
		libgeocode-glib.so:net/geocode-glib \
		libgweather-3.so:net/libgweather

PORTSCOUT=	limitw:1,even

USE_XORG=	x11 xext xi xtst
USE_GNOME=	cairo gnomedesktop3 intltool
USES=		gettext gmake gnome libtool localbase:ldflags pathfix \
		pkgconfig tar:xz
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
CONFIGURE_ARGS=	--disable-gudev \
		--with-nssdb=${LOCALBASE}/share/certs/ca-root-nss.crt \
		--disable-wayland \
		--disable-alsa \
		--disable-rfkill \
		--disable-network-manager
INSTALL_TARGET=	install-strip

OPTIONS_SUB=	yes
OPTIONS_DEFINE=	CUPS SMARTCARD
OPTIONS_DEFAULT=CUPS SMARTCARD

CUPS_CONFIGURE_ENABLE=	cups
CUPS_LIB_DEPENDS=	libcups.so:print/cups

SMARTCARD_DESC=	Smartcard support
SMARTCARD_CONFIGURE_ENABLE=	smartcard-support
SMARTCARD_LIB_DEPENDS=	libnss3.so:security/nss \
			libnspr4.so:devel/nspr

GLIB_SCHEMAS=	org.gnome.settings-daemon.enums.xml \
		org.gnome.settings-daemon.peripherals.gschema.xml \
		org.gnome.settings-daemon.peripherals.wacom.gschema.xml \
		org.gnome.settings-daemon.plugins.color.gschema.xml \
		org.gnome.settings-daemon.plugins.gschema.xml \
		org.gnome.settings-daemon.plugins.housekeeping.gschema.xml \
		org.gnome.settings-daemon.plugins.media-keys.gschema.xml \
		org.gnome.settings-daemon.plugins.power.gschema.xml \
		org.gnome.settings-daemon.plugins.power.gschema.xml.override \
		org.gnome.settings-daemon.plugins.sharing.gschema.xml \
		org.gnome.settings-daemon.plugins.xsettings.gschema.xml

post-install:
	${INSTALL_DATA} ${FILESDIR}/org.gnome.settings-daemon.plugins.power.gschema.xml.override \
		${STAGEDIR}${PREFIX}/share/glib-2.0/schemas/

.include <bsd.port.mk>
