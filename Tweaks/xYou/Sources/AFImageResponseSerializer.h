// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AFIMAGERESPONSESERIALIZER_H
#define AFIMAGERESPONSESERIALIZER_H



#import "AFHTTPResponseSerializer.h"

@interface AFImageResponseSerializer : AFHTTPResponseSerializer

@property (nonatomic) CGFloat imageScale; // ivar: _imageScale
@property (nonatomic) BOOL automaticallyInflatesResponseImage; // ivar: _automaticallyInflatesResponseImage


-(id)init;
-(id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(BOOL)supportsSecureCoding;


@end


#endif