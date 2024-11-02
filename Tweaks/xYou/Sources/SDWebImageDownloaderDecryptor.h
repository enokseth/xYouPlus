// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDWEBIMAGEDOWNLOADERDECRYPTOR_H
#define SDWEBIMAGEDOWNLOADERDECRYPTOR_H


#import <Foundation/Foundation.h>

#import "SDWebImageDownloaderDecryptor-Protocol.h"

@interface SDWebImageDownloaderDecryptor : NSObject <SDWebImageDownloaderDecryptor>



@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithBlock:(id)arg0 ;
-(id)decryptedDataWithData:(id)arg0 response:(id)arg1 ;
+(id)base64Decryptor;
+(id)decryptorWithBlock:(id)arg0 ;


@end


#endif