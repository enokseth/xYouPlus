// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FRPSETTINGS_H
#define FRPSETTINGS_H


#import <Foundation/Foundation.h>


@interface FRPSettings : NSObject

@property (copy, nonatomic) id *valueDidChangeBlock; // ivar: _valueDidChangeBlock
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) id *value;
@property (retain, nonatomic) NSString *fileSave; // ivar: _fileSave


-(id)initWithKey:(id)arg0 defaultValue:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)saveValue:(id)arg0 ;
+(id)settingsWithKey:(id)arg0 defaultValue:(id)arg1 ;


@end


#endif