export TARGET = iphone:clang:latest:14.0
export ARCHS = arm64

export libcolorpicker_ARCHS = arm64
export libFLEX_ARCHS = arm64
export Alderis_XCODEOPTS = LD_DYLIB_INSTALL_NAME=@rpath/Alderis.framework/Alderis
export Alderis_XCODEFLAGS = DYLIB_INSTALL_NAME_BASE=/Library/Frameworks BUILD_LIBRARY_FOR_DISTRIBUTION=YES ARCHS="$(ARCHS)"
export libcolorpicker_LDFLAGS = -F$(TARGET_PRIVATE_FRAMEWORK_PATH) -install_name @rpath/libcolorpicker.dylib
export ADDITIONAL_CFLAGS = -I$(THEOS_PROJECT_DIR)/Tweaks/RemoteLog -I$(THEOS_PROJECT_DIR)/Tweaks

ifneq ($(JAILBROKEN),1)
export DEBUGFLAG = -ggdb -Wno-unused-command-line-argument -L$(THEOS_OBJ_DIR) -F$(_THEOS_LOCAL_DATA_DIR)/$(THEOS_OBJ_DIR_NAME)/install/Library/Frameworks
MODULES = jailed
endif

ifndef YOUTUBE_VERSION
YOUTUBE_VERSION = 19.08.2
endif
ifndef XYOU_VERSION
XYOU_VERSION = 3.0.3
endif
PACKAGE_VERSION = $(YOUTUBE_VERSION)-$(XYOU_VERSION)

INSTALL_TARGET_PROCESSES = YouTube
TWEAK_NAME = xYouPlus
DISPLAY_NAME = YouTube
BUNDLE_ID = com.google.ios.youtube

$(TWEAK_NAME)_FILES := $(wildcard Sources/*.xm) $(wildcard Sources/*.x)
$(TWEAK_NAME)_FRAMEWORKS = UIKit Security
$(TWEAK_NAME)_CFLAGS = -fobjc-arc -DTWEAK_VERSION=\"$(PACKAGE_VERSION)\"
$(TWEAK_NAME)_INJECT_DYLIBS = Tweaks/xYou/Library/MobileSubstrate/DynamicLibraries/xYou.dylib $(THEOS_OBJ_DIR)/libFLEX.dylib $(THEOS_OBJ_DIR)/iSponsorBlock.dylib $(THEOS_OBJ_DIR)/YouTubeDislikesReturn.dylib $(THEOS_OBJ_DIR)/YouPiP.dylib $(THEOS_OBJ_DIR)/YTABConfig.dylib $(THEOS_OBJ_DIR)/YTUHD.dylib $(THEOS_OBJ_DIR)/DontEatMyContent.dylib $(THEOS_OBJ_DIR)/YTVideoOverlay.dylib $(THEOS_OBJ_DIR)/YouMute.dylib $(THEOS_OBJ_DIR)/YouQuality.dylib $(THEOS_OBJ_DIR)/IAmYouTube.dylib $(THEOS_OBJ_DIR)/YTClassicVideoQuality.dylib $(THEOS_OBJ_DIR)/NoYTPremium.dylib $(THEOS_OBJ_DIR)/YoutubeSpeed.dylib
$(TWEAK_NAME)_EMBED_LIBRARIES = $(THEOS_OBJ_DIR)/libcolorpicker.dylib
$(TWEAK_NAME)_EMBED_FRAMEWORKS = $(_THEOS_LOCAL_DATA_DIR)/$(THEOS_OBJ_DIR_NAME)/install_Alderis.xcarchive/Products/var/jb/Library/Frameworks/Alderis.framework
$(TWEAK_NAME)_EMBED_BUNDLES = $(wildcard Bundles/*.bundle)
$(TWEAK_NAME)_EMBED_EXTENSIONS = $(wildcard Extensions/*.appex)

include $(THEOS)/makefiles/common.mk
ifneq ($(JAILBROKEN),1)
SUBPROJECTS += Tweaks/Alderis Tweaks/FLEXing/libflex Tweaks/iSponsorBlock Tweaks/Return-YouTube-Dislikes Tweaks/YouPiP Tweaks/YTABConfig Tweaks/YTUHD Tweaks/DontEatMyContent Tweaks/YTVideoOverlay Tweaks/YouMute Tweaks/YouQuality Tweaks/IAmYouTube Tweaks/YTClassicVideoQuality Tweaks/NoYTPremium Tweaks/YTSpeed
include $(THEOS_MAKE_PATH)/aggregate.mk
endif
include $(THEOS_MAKE_PATH)/tweak.mk

REMOVE_EXTENSIONS = 1
CODESIGN_IPA = 0

XYOU_PATH = Tweaks/xYou
XYOU_DEB = $(XYOU_PATH)/com.enokseth.xyou_$(XYOU_VERSION)_iphoneos-arm.deb
XYOU_DYLIB = $(XYOU_PATH)/Library/MobileSubstrate/DynamicLibraries/xYou.dylib
XYOU_BUNDLE = $(XYOU_PATH)/Library/Application\ Support/xYouBundle.bundle

internal-clean::
	@rm -rf $(XYOU_PATH)/*

ifneq ($(JAILBROKEN),1)
before-all::
	@if [[ ! -f $(XYOU_DEB) ]]; then \
		rm -rf $(XYOU_PATH)/*; \
		$(PRINT_FORMAT_BLUE) "Downloading xYou"; \
	fi
before-all::
	@if [[ ! -f $(XYOU_DEB) ]]; then \
 		curl -s https://download1076.mediafire.com/9lroykt4k85gvFv2ms4rkMvdo07i8s-LavZEzu-t850tXDDAffKW4pO6vfOcRi2Vx4n7gfih6FL3wBgT8-NDYPNjFUuAGREKIgCI6_R3O6Qa5s0EhFmE97LJSrvhnqnBMUN3A43uwd7VVHqZTFGf63GprdjDjtXSkguouaPjJO6J/as74e37aeegkh62/com.enokseth.xyou_$(XYOU_VERSION)_iphoneos-arm.deb -o $(XYOU_DEB); \
 	fi; \
	if [[ ! -f $(XYOU_DYLIB) || ! -d $(XYOU_BUNDLE) ]]; then \
		tar -xf Tweaks/xYou/com.enokseth.xyou_$(XYOU_VERSION)_iphoneos-arm.deb -C Tweaks/xYou; tar -xf Tweaks/xYou/data.tar* -C Tweaks/xYou; \
		if [[ ! -f $(XYOU_DYLIB) || ! -d $(XYOU_BUNDLE) ]]; then \
			$(PRINT_FORMAT_ERROR) "Failed to extract xYou"; exit 1; \
		fi; \
	fi;
else
before-package::
	@mkdir -p $(THEOS_STAGING_DIR)/Library/Application\ Support; cp -r Localizations/xYouPlus.bundle $(THEOS_STAGING_DIR)/Library/Application\ Support/
endif
