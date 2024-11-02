// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef DOWNLOADINGCONVERSIONINFO_H
#define DOWNLOADINGCONVERSIONINFO_H


#import <UIKit/UIKit.h>

#import "__MarqueeLabel.h"

@interface DownloadingConversionInfo : UIView {
    UIImageView *icon;
    UIImageView *progressImage;
    UIImageView *infoImage;
}


@property (retain, nonatomic) UILabel *progressLabel; // ivar: _progressLabel
@property (retain, nonatomic) __MarqueeLabel *statusLabel; // ivar: _statusLabel
@property (retain, nonatomic) UIProgressView *progressBar; // ivar: _progressBar


-(id)init;
-(void)dealloc;
-(id)ytBackgroundColor;
-(id)ytTextColor;
-(void)updatePageStyles;


@end


#endif