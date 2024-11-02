// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef FRPSELECTLISTTABLE_H
#define FRPSELECTLISTTABLE_H


#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@interface FRPSelectListTable : UITableViewController <UITableViewDataSource, UITableViewDelegate>

 {
    NSArray *listItems;
    NSArray *listValues;
    NSString *currentValue;
    NSString *pageTitle;
    BOOL popView;
}


@property (copy, nonatomic) id *itemChanged; // ivar: _itemChanged
@property (copy, nonatomic) UIColor *tintUIColor; // ivar: _tintUIColor
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithStyle:(NSInteger)arg0 title:(id)arg1 items:(id)arg2 values:(id)arg3 currentValue:(id)arg4 popViewOnSelect:(BOOL)arg5 changeBlock:(id)arg6 ;
-(void)viewDidLoad;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)didReceiveMemoryWarning;


@end


#endif