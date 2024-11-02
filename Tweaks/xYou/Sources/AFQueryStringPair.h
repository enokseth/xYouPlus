// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef AFQUERYSTRINGPAIR_H
#define AFQUERYSTRINGPAIR_H


#import <Foundation/Foundation.h>


@interface AFQueryStringPair : NSObject

@property (retain, nonatomic) id *field; // ivar: _field
@property (retain, nonatomic) id *value; // ivar: _value


-(id)initWithField:(id)arg0 value:(id)arg1 ;
-(id)URLEncodedStringValue;


@end


#endif