// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef _LNPOPUPBARAPPEARANCECHAINPROXY_H
#define _LNPOPUPBARAPPEARANCECHAINPROXY_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface _LNPopupBarAppearanceChainProxy : NSObject {
    NSArray *_chain;
}




-(id)description;
-(id)initWithAppearanceChain:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(BOOL)boolForKey:(id)arg0 ;
-(NSUInteger)unsignedIntegerForKey:(id)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 ;
-(void)setChainDelegate:(id)arg0 ;


@end


#endif