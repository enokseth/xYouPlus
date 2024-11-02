// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef ARTWORKIMAGEVIEW_H
#define ARTWORKIMAGEVIEW_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


@interface ArtworkImageView : UIView {
    NSLayoutConstraint *widthConstraint;
}


@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView


-(id)initWithImage:(id)arg0 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 ;


@end


#endif