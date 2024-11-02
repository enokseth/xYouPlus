// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef GLVIEWPAGERVIEWCONTROLLER_H
#define GLVIEWPAGERVIEWCONTROLLER_H


#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "UIPageViewControllerDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "GLViewPagerViewControllerDataSource-Protocol.h"
#import "GLViewPagerViewControllerDelegate-Protocol.h"

@interface GLViewPagerViewController : UIViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource, UIScrollViewDelegate>

 {
    BOOL _needsReload;
    ? _datasourceHas;
    ? _delegateHas;
    CGFloat leftTabOffsetWidth;
    CGFloat rightTabOffsetWidth;
    CGFloat leftMinusCurrentWidth;
    CGFloat rightMinusCurrentWidth;
    BOOL _enableTabAnimationWhileScrolling;
}


@property (retain, nonatomic) NSMutableArray *contentViewControllers; // ivar: _contentViewControllers
@property (retain, nonatomic) NSMutableArray *contentViews; // ivar: _contentViews
@property (retain, nonatomic) UIScrollView *tabContentView; // ivar: _tabContentView
@property (retain, nonatomic) NSMutableArray *tabViews; // ivar: _tabViews
@property (retain, nonatomic) UIView *indicatorView; // ivar: _indicatorView
@property (retain, nonatomic) UIPageViewController *pageViewController; // ivar: _pageViewController
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (weak, nonatomic) NSObject<GLViewPagerViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<GLViewPagerViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIColor *indicatorColor; // ivar: _indicatorColor
@property (retain, nonatomic) UIFont *tabFontDefault; // ivar: _tabFontDefault
@property (retain, nonatomic) UIFont *tabFontSelected; // ivar: _tabFontSelected
@property (retain, nonatomic) UIColor *tabTextColorDefault; // ivar: _tabTextColorDefault
@property (retain, nonatomic) UIColor *tabTextColorSelected; // ivar: _tabTextColorSelected
@property (nonatomic) BOOL fixTabWidth; // ivar: _fixTabWidth
@property (nonatomic) CGFloat tabWidth; // ivar: _tabWidth
@property (nonatomic) CGFloat tabHeight; // ivar: _tabHeight
@property (nonatomic) CGFloat indicatorHeight; // ivar: _indicatorHeight
@property (nonatomic) CGFloat indicatorWidth; // ivar: _indicatorWidth
@property (nonatomic) BOOL fixIndicatorWidth; // ivar: _fixIndicatorWidth
@property (nonatomic) CGFloat padding; // ivar: _padding
@property (nonatomic) CGFloat leadingPadding; // ivar: _leadingPadding
@property (nonatomic) CGFloat trailingPadding; // ivar: _trailingPadding
@property (nonatomic) NSUInteger defaultDisplayPageIndex; // ivar: _defaultDisplayPageIndex
@property (nonatomic) CGFloat animationTabDuration; // ivar: _animationTabDuration
@property (nonatomic) NSUInteger tabAnimationType; // ivar: _tabAnimationType
@property (nonatomic) BOOL supportArabic; // ivar: _supportArabic
@property (nonatomic) NSUInteger currentPageIndex; // ivar: _currentPageIndex
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)awakeFromNib;
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tapInTabView:(id)arg0 ;
-(void)defaultSetup;
-(void)reloadData;
-(id)tabViewAtIndex:(NSUInteger)arg0 ;
-(void)_selectTab:(NSUInteger)arg0 animate:(BOOL)arg1 ;
-(void)_setNeedsReload;
-(void)_reloadDataIfNeed;
-(void)_layoutSubviews;
-(void)_setActiveTabIndex:(NSUInteger)arg0 ;
-(void)_setActivePageIndex:(NSUInteger)arg0 ;
-(CGFloat)_getTabWidthAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )_caculateIndicatorViewFrame:(NSUInteger)arg0 ;
-(void)_caculateTabOffsetWidth:(NSUInteger)arg0 ;
-(void)_disableViewPagerScroll;
-(void)_enableViewPagerScroll;


@end


#endif