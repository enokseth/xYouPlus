// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 13.0.0 | SDK: 14.4.0



@protocol UITableViewDelegate



@optional
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndDisplayingHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 didEndDisplayingFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 accessoryTypeForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didHighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUnhighlightRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 editActionsForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(NSInteger)tableView:(id)arg0 indentationLevelForRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldUpdateFocusInContext:(id)arg1 ;
-(void)tableView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldSpringLoadRowAtIndexPath:(id)arg1 withContext:(id)arg2 ;
-(BOOL)tableView:(id)arg0 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(void)tableViewDidEndMultipleSelectionInteraction:(id)arg0 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)tableView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(void)tableView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayContextMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)tableView:(id)arg0 willEndContextMenuInteractionWithConfiguration:(id)arg1 animator:(id)arg2 ;
@end

