// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef DOWNLOADEDCELL_H
#define DOWNLOADEDCELL_H


#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>

#import "SSBouncyButton.h"
#import "__MarqueeLabel.h"

@interface DownloadedCell : UITableViewCell {
    UIVisualEffectView *effectView;
}


@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) SSBouncyButton *mainView; // ivar: _mainView
@property (retain, nonatomic) SSBouncyButton *optionsButton; // ivar: _optionsButton
@property (retain, nonatomic) SSBouncyButton *playButton; // ivar: _playButton
@property (retain, nonatomic) SSBouncyButton *videoPlayButton; // ivar: _videoPlayButton
@property (retain, nonatomic) UIImageView *albumImage; // ivar: _albumImage
@property (retain, nonatomic) UIImage *albumImagePlaceholder; // ivar: _albumImagePlaceholder
@property (retain, nonatomic) __MarqueeLabel *name; // ivar: _name
@property (retain, nonatomic) __MarqueeLabel *channel; // ivar: _channel
@property (retain, nonatomic) UILabel *type; // ivar: _type
@property (retain, nonatomic) UILabel *durationAndSize; // ivar: _durationAndSize
@property (retain, nonatomic) UILabel *date; // ivar: _date
@property (retain, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) BOOL isVideo; // ivar: _isVideo


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)isColorLight:(id)arg0 ;
-(id)ytBackgroundColor;
-(id)ytTextColor;


@end


#endif