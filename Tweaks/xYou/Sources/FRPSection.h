// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FRPSECTION_H
#define FRPSECTION_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface FRPSection : UITableViewCell

@property (retain, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (retain, nonatomic) NSString *footerTitle; // ivar: _footerTitle
@property (nonatomic) NSUInteger footerAlignment; // ivar: _footerAlignment
@property (retain, nonatomic) NSMutableArray *cells; // ivar: _cells
@property (retain, nonatomic) UIColor *tintUIColor; // ivar: _tintUIColor


-(id)initWithTitle:(id)arg0 footer:(id)arg1 footerAlignment:(NSUInteger)arg2 ;
-(void)addCell:(id)arg0 ;
-(void)addCells:(id)arg0 ;
+(id)sectionWithTitle:(id)arg0 ;
+(id)sectionWithTitle:(id)arg0 footer:(id)arg1 footerAlignment:(NSUInteger)arg2 ;


@end


#endif