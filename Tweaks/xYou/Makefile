export TARGET = iphone:clang:latest:14.0
export ARCHS = arm

PACKAGE_VERSION = 3.0.3
TWEAK_NAME = xYou
DISPLAY_NAME = xYou
BUNDLE_ID = com.enokseth.xyou

$(TWEAK_NAME)_FILES = $(wildcard Sources/*.xm) $(wildcard Sources/*.x)
$(TWEAK_NAME)_FRAMEWORKS = UIKit Security
$(TWEAK_NAME)_CFLAGS = -fobjc-arc -DTWEAK_VERSION=\"$(PACKAGE_VERSION)\"
$(TWEAK_NAME)_EMBED_FRAMEWORKS = $(_THEOS_LOCAL_DATA_DIR)/$(THEOS_OBJ_DIR_NAME)/install_Alderis.xcarchive/Products/var/jb/Library/Frameworks/Alderis.framework
$(TWEAK_NAME)_EMBED_BUNDLES = $(wildcard Bundles/*.bundle)
$(TWEAK_NAME)_EMBED_EXTENSIONS = $(wildcard Extensions/*.appex)

include $(THEOS)/makefiles/common.mk
include $(THEOS_MAKE_PATH)/tweak.mk

internal-stage::
    # Copy xYouBundle.bundle to the package directory
    $(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/Application\ Support$(ECHO_END)
    $(ECHO_NOTHING)cp -r Library/Application\ Support/xYouBundle.bundle $(THEOS_STAGING_DIR)/Library/Application\ Support$(ECHO_END)

after-install::
    # Respring the device after installing the tweak
    install.exec "sbreload"