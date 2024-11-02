// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef DOWNLOADSPAGERVC_H
#define DOWNLOADSPAGERVC_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "GLViewPagerViewController.h"
#import "DownloadingVC.h"
#import "DownloadedVC.h"
#import "GLViewPagerViewControllerDataSource-Protocol.h"
#import "GLViewPagerViewControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@interface DownloadsPagerVC : GLViewPagerViewController <GLViewPagerViewControllerDataSource, GLViewPagerViewControllerDelegate, UISearchResultsUpdating>

 {
    UISearchController *_searchController;
    NSString *_searchKey;
    DownloadingVC *downloadingVC;
    DownloadedVC *allDownloadedVC;
    DownloadedVC *audiosVC;
    DownloadedVC *videosVC;
    DownloadedVC *shortsVC;
}


@property (retain, nonatomic) NSArray *viewControllers; // ivar: _viewControllers
@property (retain, nonatomic) NSArray *tagTitles; // ivar: _tagTitles
@property (nonatomic) BOOL fullfillTabs; // ivar: _fullfillTabs
@property (retain, nonatomic) UIView *defaultTabButtons; // ivar: _defaultTabButtons
@property (retain, nonatomic) UIView *editingTabButtons; // ivar: _editingTabButtons
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)dealloc;
-(void)viewDidLoad;
-(void)model;
-(id)ytBackgroundColor;
-(id)ytTextColor;
-(void)updatePageStyles;
-(NSUInteger)numberOfTabsForViewPager:(id)arg0 ;
-(id)viewPager:(id)arg0 viewForTabIndex:(NSUInteger)arg1 ;
-(id)viewPager:(id)arg0 contentViewControllerForTabAtIndex:(NSUInteger)arg1 ;
-(void)viewPager:(id)arg0 didChangeTabToIndex:(NSUInteger)arg1 fromTabIndex:(NSUInteger)arg2 ;
-(void)viewPager:(id)arg0 willChangeTabToIndex:(NSUInteger)arg1 fromTabIndex:(NSUInteger)arg2 withTransitionProgress:(CGFloat)arg3 ;
-(CGFloat)viewPager:(id)arg0 widthForTabIndex:(NSUInteger)arg1 ;
-(CGFloat)tabsFulFillToScreenWidthInset;
-(CGFloat)estimateTabsWidthInView;
-(CGFloat)screenleftWidthForTabs;
-(BOOL)isTabsWidthGreaterThanScreenWidth;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)settingsVC;
-(void)tweet;
-(void)showSearch;
-(void)sorting:(id)arg0 ;
-(void)didTapDonation;
-(void)cancelEditingVC;
-(void)cancelEditingVCForIndex:(NSUInteger)arg0 ;
-(void)selectedCellsOptions;


@end


#endif