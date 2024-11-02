// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef STREAMINFORMATION_H
#define STREAMINFORMATION_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface StreamInformation : NSObject {
    NSDictionary *dictionary;
}




-(id)init:(id)arg0 ;
-(id)getIndex;
-(id)getType;
-(id)getCodec;
-(id)getFullCodec;
-(id)getFormat;
-(id)getWidth;
-(id)getHeight;
-(id)getBitrate;
-(id)getSampleRate;
-(id)getSampleFormat;
-(id)getChannelLayout;
-(id)getSampleAspectRatio;
-(id)getDisplayAspectRatio;
-(id)getAverageFrameRate;
-(id)getRealFrameRate;
-(id)getTimeBase;
-(id)getCodecTimeBase;
-(id)getTags;
-(id)getStringProperty:(id)arg0 ;
-(id)getNumberProperty:(id)arg0 ;
-(id)getProperties:(id)arg0 ;
-(id)getAllProperties;


@end


#endif