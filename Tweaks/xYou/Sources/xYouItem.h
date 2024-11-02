// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef XYOUITEM_H
#define XYOUITEM_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "DownloadItem.h"
#import "NSCoding-Protocol.h"

@interface xYouItem : NSObject <NSCoding>



@property (retain, nonatomic) NSString *downloadIdentifier; // ivar: _downloadIdentifier
@property (retain, nonatomic) NSString *videoID; // ivar: _videoID
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *channel; // ivar: _channel
@property (retain, nonatomic) NSString *channelURL; // ivar: _channelURL
@property (retain, nonatomic) NSString *quality; // ivar: _quality
@property (retain, nonatomic) NSString *qualityLabel; // ivar: _qualityLabel
@property (retain, nonatomic) NSString *typeAndQuality; // ivar: _typeAndQuality
@property (retain, nonatomic) NSString *audioFormat; // ivar: _audioFormat
@property (retain, nonatomic) NSString *videoFormat; // ivar: _videoFormat
@property (retain, nonatomic) NSString *audioURL; // ivar: _audioURL
@property (retain, nonatomic) NSString *videoURL; // ivar: _videoURL
@property (retain, nonatomic) DownloadItem *audioItem; // ivar: _audioItem
@property (retain, nonatomic) DownloadItem *videoItem; // ivar: _videoItem
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) BOOL isConverting; // ivar: _isConverting
@property (nonatomic) BOOL isFinished; // ivar: _isFinished
@property (nonatomic) int conversionPercentage; // ivar: _conversionPercentage
@property (retain, nonatomic) NSString *conversionInfoText; // ivar: _conversionInfoText


-(id)initWithWithRequestItem:(id)arg0 info:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)description;
-(id)cachedAudioPath;
-(id)cachedVideoPath;
-(id)tmpAudioPath;
-(id)tmpVideoPath;
-(id)tmpMKVPath;
-(id)tmpMP4Path;
-(id)filePath;
-(id)path;
-(id)thumbnailPath;
-(BOOL)isMP4;
-(BOOL)isDownloadFinished;


@end


#endif