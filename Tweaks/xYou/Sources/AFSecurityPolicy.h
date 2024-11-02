// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AFSECURITYPOLICY_H
#define AFSECURITYPOLICY_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "NSSecureCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface AFSecurityPolicy : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger SSLPinningMode; // ivar: _SSLPinningMode
@property (retain, nonatomic) NSSet *pinnedPublicKeys; // ivar: _pinnedPublicKeys
@property (retain, nonatomic) NSSet *pinnedCertificates; // ivar: _pinnedCertificates
@property (nonatomic) BOOL allowInvalidCertificates; // ivar: _allowInvalidCertificates
@property (nonatomic) BOOL validatesDomainName; // ivar: _validatesDomainName


-(id)init;
-(BOOL)evaluateServerTrust:(struct __SecTrust *)arg0 forDomain:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)certificatesInBundle:(id)arg0 ;
+(id)defaultPolicy;
+(id)policyWithPinningMode:(NSUInteger)arg0 ;
+(id)policyWithPinningMode:(NSUInteger)arg0 withPinnedCertificates:(id)arg1 ;
+(id)keyPathsForValuesAffectingPinnedPublicKeys;
+(BOOL)supportsSecureCoding;


@end


#endif