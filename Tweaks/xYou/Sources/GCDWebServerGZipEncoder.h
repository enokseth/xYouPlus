// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERGZIPENCODER_H
#define GCDWEBSERVERGZIPENCODER_H



#import "GCDWebServerBodyEncoder.h"

@interface GCDWebServerGZipEncoder : GCDWebServerBodyEncoder {
    z_stream_s _stream;
    BOOL _finished;
}




-(id)initWithResponse:(id)arg0 reader:(id)arg1 ;
-(BOOL)open:(*id)arg0 ;
-(id)readData:(*id)arg0 ;
-(void)close;


@end


#endif