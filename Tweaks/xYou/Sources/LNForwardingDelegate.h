// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef LNFORWARDINGDELEGATE_H
#define LNFORWARDINGDELEGATE_H


#import <Foundation/Foundation.h>


@interface LNForwardingDelegate : NSObject

@property (weak, nonatomic) id *forwardedDelegate; // ivar: _forwardedDelegate


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;


@end


#endif