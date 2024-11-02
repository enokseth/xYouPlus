// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LNPOPUPBARAPPEARANCE_H
#define LNPOPUPBARAPPEARANCE_H

@class UIBarButtonItemAppearance;

#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>

#import "_LNPopupBarAppearanceDelegate-Protocol.h"

@interface LNPopupBarAppearance : UIBarAppearance

@property (weak, nonatomic) NSObject<_LNPopupBarAppearanceDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDictionary *titleTextAttributes; // ivar: _titleTextAttributes
@property (copy, nonatomic) NSDictionary *subtitleTextAttributes; // ivar: _subtitleTextAttributes
@property (copy, nonatomic) UIBarButtonItemAppearance *buttonAppearance; // ivar: _buttonAppearance
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (copy, nonatomic) UIBarButtonItemAppearance *doneButtonAppearance; // ivar: _doneButtonAppearance
@property (nonatomic) BOOL marqueeScrollEnabled; // ivar: _marqueeScrollEnabled
@property (nonatomic) CGFloat marqueeScrollRate; // ivar: _marqueeScrollRate
@property (nonatomic) CGFloat marqueeScrollDelay; // ivar: _marqueeScrollDelay
@property (nonatomic) BOOL coordinateMarqueeScroll; // ivar: _coordinateMarqueeScroll


-(void)_notify;
-(void)a:(id)arg0 cC:(NSUInteger)arg1 ;
-(void)_commonInit;
-(id)initWithIdiom:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithBarAppearance:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)configureWithDefaultHighlightColor;
-(void)configureWithDefaultMarqueeScroll;
-(void)configureWithDisabledMarqueeScroll;
+(void)load;


@end


#endif