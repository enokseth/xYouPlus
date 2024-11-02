// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef DOWNLOADINGVC_H
#define DOWNLOADINGVC_H


#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "LottieHolder.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@interface DownloadingVC : UIViewController <UITableViewDataSource, UITableViewDelegate>

 {
    LottieHolder *emptyView;
}


@property (retain, nonatomic) NSArray *downloadItemsArray; // ivar: _downloadItemsArray
@property (retain, nonatomic) NSString *pauseChar; // ivar: _pauseChar
@property (retain, nonatomic) NSString *resumeChar; // ivar: _resumeChar
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)dealloc;
-(id)ytBackgroundColor;
-(id)ytTextColor;
-(void)updatePageStyles;
-(void)reloadVC;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(void)prepareDownloadCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)cancelDownload:(id)arg0 ;
-(id)findIndexPathForView:(id)arg0 ;
-(void)onStartIndividualDownload:(id)arg0 ;
-(void)onCancelIndividualDownload:(id)arg0 ;
-(void)onPauseResumeIndividualDownload:(id)arg0 ;
-(void)cancelDownloadWithIdentifier:(id)arg0 ;
-(void)pauseDownloadWithIdentifier:(id)arg0 ;
-(void)resumeDownloadWithIdentifier:(id)arg0 ;


@end


#endif