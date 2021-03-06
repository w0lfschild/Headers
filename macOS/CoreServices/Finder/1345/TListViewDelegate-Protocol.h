//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSOutlineViewDelegate-Protocol.h"
#import "TDraggingDestinationDelegate-Protocol.h"
#import "TFloatingInputWindowDelegateProtocol-Protocol.h"
#import "TMarkTornDown-Protocol.h"
#import "TQLPreviewWindowControllerProtocol-Protocol.h"
#import "TableView_Common_Delegate-Protocol.h"

@class NSEvent, NSMenu, NSString, TBrowserViewDataSource, TListHeaderRowView, TListNameCellView, TListTableColumn, TRenameOperation;

@protocol TListViewDelegate <NSOutlineViewDelegate, TFloatingInputWindowDelegateProtocol, TDraggingDestinationDelegate, TableView_Common_Delegate, TQLPreviewWindowControllerProtocol, TMarkTornDown>
@property(retain, nonatomic) NSEvent *mouseDownEventForDrag;
@property(retain, nonatomic) TBrowserViewDataSource *dataSource;
@property(nonatomic, getter=isEditing) _Bool editing;
@property(retain, nonatomic) TListNameCellView *originalEditedNameCellView;
@property(nonatomic) struct TFENode nodeBeingReloaded;
@property(nonatomic, getter=isGrouping) _Bool grouping;
- (_Bool)isFakeHeaderNode:(const struct TFENode *)arg1;
- (void)commonPostMouseDown:(NSEvent *)arg1;
- (void)titleOfNode:(const struct TFENode *)arg1 didChangeTo:(NSString *)arg2 renameOp:(TRenameOperation *)arg3;
- (void)setNodeBeingEdited:(const struct TFENode *)arg1;
- (const struct TFENode *)nodeBeingEdited;
- (void)setSelectedNodes:(const struct TFENodeVector *)arg1 byExtendingSelection:(_Bool)arg2;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1;
- (unsigned long long)selectedNodesCount;
- (_Bool)nodeIsSelected:(const struct TFENode *)arg1;
- (void)selectAll:(id)arg1;
- (void)adjustNameColumnWidth;
- (void)willCollapseNode:(const struct TFENode *)arg1 recursively:(_Bool)arg2;
- (void)willExpandNode:(const struct TFENode *)arg1 recursively:(_Bool)arg2;
- (_Bool)handleKeyDown:(NSEvent *)arg1 currentKey:(unsigned short)arg2;
- (void)buildBrowserParentToChildrenMap:(unordered_map_f8b1458f *)arg1 forContainerNode:(const struct TFENode *)arg2;
- (void)didChangeColumnWidthForColumn:(TListTableColumn *)arg1;
- (const struct TFENode *)target;
- (NSMenu *)menuForColumnHeaders;
- (_Bool)handleQuickLookWithEvent:(NSEvent *)arg1;
- (void)setUserHasInteractedWithView:(_Bool)arg1;
- (_Bool)nodeIsGroupNode:(const struct TFENode *)arg1;
- (_Bool)groupingByTag;
- (_Bool)handleUnicodeTextInput:(NSString *)arg1 atTime:(double)arg2;
- (TListHeaderRowView *)headerRowView;
@end

