// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0


#ifndef SETTINGSREORDERTABLE_H
#define SETTINGSREORDERTABLE_H


#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#import <Foundation/Foundation.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@interface settingsReorderTable : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSArray *defaultValues; // ivar: _defaultValues
@property (retain, nonatomic) NSMutableArray *currentValues; // ivar: _currentValues
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *header; // ivar: _header
@property (retain, nonatomic) NSString *footer; // ivar: _footer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithTitle:(id)arg0 items:(id)arg1 defaultValues:(id)arg2 key:(id)arg3 header:(id)arg4 footer:(id)arg5 ;
-(void)save;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;


@end


#endif