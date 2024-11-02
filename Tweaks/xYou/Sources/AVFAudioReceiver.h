// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AVFAUDIORECEIVER_H
#define AVFAUDIORECEIVER_H


#import <Foundation/Foundation.h>


@interface AVFAudioReceiver : NSObject {
    ? _context;
}




-(id)initWithContext:(struct ? *)arg0 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;


@end


#endif