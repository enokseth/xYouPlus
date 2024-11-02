// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEAKPROXY_H
#define SDWEAKPROXY_H


#import <Foundation/Foundation.h>


@interface SDWeakProxy : NSProxy

@property (readonly, weak, nonatomic) id *target; // ivar: _target


-(id)initWithTarget:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(Class)superclass;
-(Class)class;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)isMemberOfClass:(Class)arg0 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isProxy;
-(id)description;
-(id)debugDescription;
+(id)proxyWithTarget:(id)arg0 ;


@end


#endif