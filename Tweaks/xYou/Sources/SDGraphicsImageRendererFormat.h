// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDGRAPHICSIMAGERENDERERFORMAT_H
#define SDGRAPHICSIMAGERENDERERFORMAT_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface SDGraphicsImageRendererFormat : NSObject

@property (retain, nonatomic) UIGraphicsImageRendererFormat *uiformat; // ivar: _uiformat
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) BOOL opaque; // ivar: _opaque
@property (nonatomic) NSInteger preferredRange; // ivar: _preferredRange


-(id)init;
-(id)initForMainScreen;
+(id)preferredFormat;


@end


#endif