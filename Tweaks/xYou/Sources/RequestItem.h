// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef REQUESTITEM_H
#define REQUESTITEM_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>


@interface RequestItem : NSObject

@property (retain, nonatomic) NSString *videoID; // ivar: _videoID
@property (retain, nonatomic) NSString *playerID; // ivar: _playerID
@property (retain, nonatomic) NSString *downloadQuality; // ivar: _downloadQuality
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (retain, nonatomic) NSDictionary *videoInfo; // ivar: _videoInfo
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *channel; // ivar: _channel
@property (retain, nonatomic) NSString *channelURL; // ivar: _channelURL
@property (retain, nonatomic) NSString *audioFormat; // ivar: _audioFormat
@property (retain, nonatomic) NSString *audioURL; // ivar: _audioURL
@property (nonatomic) int type; // ivar: _type




@end


#endif