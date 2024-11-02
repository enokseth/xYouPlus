// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GCDWEBSERVERGZIPDECODER_H
#define GCDWEBSERVERGZIPDECODER_H



#import "GCDWebServerBodyDecoder.h"

@interface GCDWebServerGZipDecoder : GCDWebServerBodyDecoder {
    z_stream_s _stream;
    BOOL _finished;
}




-(BOOL)open:(*id)arg0 ;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(BOOL)close:(*id)arg0 ;


@end


#endif