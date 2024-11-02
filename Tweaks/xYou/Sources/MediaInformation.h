// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef MEDIAINFORMATION_H
#define MEDIAINFORMATION_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface MediaInformation : NSObject {
    NSDictionary *dictionary;
    NSArray *streamArray;
}




-(id)init:(id)arg0 withStreams:(id)arg1 ;
-(id)getFilename;
-(id)getFormat;
-(id)getLongFormat;
-(id)getStartTime;
-(id)getDuration;
-(id)getSize;
-(id)getBitrate;
-(id)getTags;
-(id)getStreams;
-(id)getStringProperty:(id)arg0 ;
-(id)getNumberProperty:(id)arg0 ;
-(id)getProperties:(id)arg0 ;
-(id)getMediaProperties;
-(id)getAllProperties;


@end


#endif