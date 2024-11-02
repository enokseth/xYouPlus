// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef METADATAITEM_H
#define METADATAITEM_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "NSCoding-Protocol.h"

@interface MetadataItem : NSObject <NSCoding>



@property (retain, nonatomic) NSString *videoID; // ivar: _videoID
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *channel; // ivar: _channel
@property (retain, nonatomic) NSString *channelURL; // ivar: _channelURL
@property (retain, nonatomic) NSString *qualityLabel; // ivar: _qualityLabel
@property (retain, nonatomic) NSString *typeAndQuality; // ivar: _typeAndQuality
@property (retain, nonatomic) NSString *audioFormat; // ivar: _audioFormat
@property (retain, nonatomic) NSString *videoFormat; // ivar: _videoFormat
@property (retain, nonatomic) NSString *lyrics; // ivar: _lyrics
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL isVideo; // ivar: _isVideo
@property (nonatomic) BOOL isShorts; // ivar: _isShorts


-(id)initWithXYouItem:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)allMetadata;
-(void)encodeWithCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)description;


@end


#endif