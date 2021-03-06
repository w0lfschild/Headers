//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSPopoverDelegate.h"

@class NSButton, NSPopover, NSScrollView, NSSearchField, NSSegmentedControl, NSString, NSTableView, NSTextField, NSUndoManager, NSView, classManagerItemSheet;

@interface classManagerWindow : NSWindowController <NSPopoverDelegate>
{
    NSTableView *classTable;
    NSTableView *classOrderTable;
    NSScrollView *classTableContainer;
    NSScrollView *classOrderContainer;
    NSView *shaderView;
    NSButton *addClassBtn;
    NSButton *removeClassBtn;
    NSSearchField *searchField;
    NSSegmentedControl *breakpointSeg;
    NSButton *editOrderBtn;
    NSPopover *classDescriptionPopover;
    NSView *classDescriptionPopoverView;
    NSTextField *descField;
    NSUndoManager *classManagerUndoManager;
    classManagerItemSheet *classManagerItemController;
}

- (void).cxx_destruct;
- (id)windowWillReturnUndoManager:(id)arg1;
- (id)filterArray:(id)arg1 withTargetKey:(id)arg2 withSearchTerm:(id)arg3 withScanType:(long long)arg4;
- (void)windowWillClose:(id)arg1;
- (void)showWindow;
- (void)hideWindow;
- (_Bool)classManagerAlert:(id)arg1 withWindowTitle:(id)arg2 withButtonTitle:(id)arg3 withButtonTwoTitle:(id)arg4 withCancelData:(_Bool)arg5;
- (void)setOrderArrayToBreakpoint;
- (void)setActiveBreakPoint:(id)arg1;
- (void)setEditButton:(BOOL)arg1;
- (void)setClassManagerMode:(id)arg1;
- (long long)selectedIndex;
- (void)programicallyRemoveClass;
- (void)duplicateClass:(id)arg1;
- (void)removeCustomClass:(id)arg1;
- (BOOL)includeDot:(id)arg1;
- (void)addCustomClass:(id)arg1;
- (void)openAddClassSheet:(id)arg1;
- (void)processEditClass:(long long)arg1;
- (void)editSelectedClass:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)setClassDescription;
- (void)setClassDescField;
- (void)openClassDescriptionPopover:(id)arg1;
- (void)moveRowToNewPosition:(long long)arg1 withData:(id)arg2 withDragRow:(long long)arg3 undoState:(_Bool)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)syncClassNameTableArray;
- (void)refreshTableAfterEdit;
- (void)refreshTable;
- (void)addTableContextMenu;
- (void)selectTableColumn:(id)arg1;
- (void)doubleClickTableRow:(id)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)selectTableRow:(long long)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)setWindowThemeColor;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

