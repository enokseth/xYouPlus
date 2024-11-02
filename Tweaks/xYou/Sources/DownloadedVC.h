// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef DOWNLOADEDVC_H
#define DOWNLOADEDVC_H


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>

#import "LottieHolder.h"
#import "DownloadedCell.h"
#import "DownloadsPagerVC.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"

@interface DownloadedVC : UIViewController <UITableViewDataSource, UITableViewDelegate, UIImagePickerControllerDelegate>

 {
    LottieHolder *emptyView;
    NSString *_searchKey;
    NSString *_searchedQuery;
    DownloadedCell *selectedCell;
    NSString *_sqlQuery;
}


@property (retain, nonatomic) DownloadsPagerVC *parentVC; // ivar: _parentVC
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) NSMutableArray *allDownloaded; // ivar: _allDownloaded
@property (retain, nonatomic) NSMutableArray *searchedDownloaded; // ivar: _searchedDownloaded
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithParentVC:(id)arg0 ;
-(void)dealloc;
-(id)ytBackgroundColor;
-(id)ytTextColor;
-(void)updatePageStyles;
-(id)initAllWithParentVC:(id)arg0 ;
-(id)initAudiosWithParentVC:(id)arg0 ;
-(id)initVideosWithParentVC:(id)arg0 ;
-(id)initShortsWithParentVC:(id)arg0 ;
-(void)reloadDownloadedVC;
-(void)reloadTable;
-(void)loadDownloaded;
-(id)metadataKey:(id)arg0 atIndex:(int)arg1 ;
-(void)updateSearchResultsForKey:(id)arg0 ;
-(BOOL)shouldHideCell;
-(BOOL)shouldHideApplicationSpecifiers;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)prepareMusicCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)enableEditing:(id)arg0 ;
-(void)selectedCellsOptions;
-(void)close;
-(void)play:(id)arg0 ;
-(void)pause:(id)arg0 ;
-(void)playVideo:(id)arg0 ;
-(id)createTmpLinkURLToFileAtPath:(id)arg0 withName:(id)arg1 ;
-(void)cellOptionsButton:(id)arg0 ;
-(void)video:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(*void)arg2 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(id)convertDateFormate:(id)arg0 ;


@end


#endif