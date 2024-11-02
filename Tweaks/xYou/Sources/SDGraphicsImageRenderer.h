// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SDGRAPHICSIMAGERENDERER_H
#define SDGRAPHICSIMAGERENDERER_H


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "SDGraphicsImageRendererFormat.h"

@interface SDGraphicsImageRenderer : NSObject

@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) SDGraphicsImageRendererFormat *format; // ivar: _format
@property (retain, nonatomic) UIGraphicsImageRenderer *uirenderer; // ivar: _uirenderer


-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 format:(id)arg1 ;
-(id)imageWithActions:(id)arg0 ;


@end


#endif