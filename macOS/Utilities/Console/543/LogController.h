//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSLayoutManagerDelegate-Protocol.h"
#import "NSScrollViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "NSWindowRestoration-Protocol.h"
#import "QLPreviewPanelDataSource-Protocol.h"

@class ASLMessage, ASLQuery, CSTableView, EncodingPopUpButton, MessageItemCellView, NSArray, NSButton, NSColor, NSDate, NSFileHandle, NSFont, NSMenu, NSMutableArray, NSOutlineView, NSSearchField, NSSegmentedControl, NSString, NSTabView, NSTextField, NSTextView, NSURL, NSView, SidebarItem, SidebarSplitView, SplitView, TagsController;

@interface LogController : NSWindowController <NSToolbarDelegate, NSLayoutManagerDelegate, NSWindowDelegate, NSWindowRestoration, NSScrollViewDelegate, QLPreviewPanelDataSource, NSTableViewDataSource, NSTableViewDelegate>
{
    NSFileHandle *_fileHandle;
    unsigned long long _startLoadOffset;
    unsigned long long _offsetFromEnd;
    unsigned long long _eofOffset;
    BOOL _logFileWasReadable;
    BOOL _errorOpeningLogFile;
    ASLQuery *_aslQuery;
    NSDate *_logFileCreationDate;
    NSFont *_font;
    SidebarItem *_sidebarItem;
    NSString *_filterString;
    BOOL _wasHidden;
    BOOL _isScrollLocked;
    long long _earlierLaterDirection;
    BOOL _performFullASLReload;
    BOOL _wrapLinesToWindow;
    unsigned long long _selectedFileOffset;
    ASLMessage *_firstVisibleMessage;
    struct CGPoint _firstVisibleMessageOrigin;
    NSArray *_selectedMessages;
    long long _findPboardChangeCount;
    unsigned long long _firstSelectedIndexBeforeDeletion;
    struct _NSRange _foundRange;
    struct CGRect _lastWindowRect;
    unsigned long long _messageDisplayStyle;
    long long _showTagsMode;
    BOOL _isFilteringByTags;
    NSArray *_mutationStack;
    BOOL _isInialized;
    BOOL _isFullScreen;
    ASLMessage *_highlightedMessage;
    SplitView *_leftRightSplitView;
    SidebarSplitView *_sidebarSplitView;
    NSTabView *_tabView;
    CSTableView *_tableView;
    NSTextView *_textView;
    NSOutlineView *_outlineView;
    NSMenu *_outlineViewContextMenu;
    EncodingPopUpButton *_encodingPopUpButton;
    NSSearchField *_filterField;
    NSTextField *_statusTextField;
    NSSegmentedControl *_nextPreviousSectionSegmentedControl;
    NSView *_findBannerView;
    NSSearchField *_findSearchField;
    NSButton *_ignoreCaseButton;
    NSTextField *_findStatusField;
    TagsController *_tagsController;
    NSButton *_tagsShowHideButton;
    MessageItemCellView *_cachedCellView;
    BOOL _insideFilesystemUpdate;
    NSURL *_quicklookURL;
    NSMutableArray *_autoExpansionIdentifiers;
    NSColor *_foregroundColour;
    NSColor *_backgroundColour;
    NSURL *_previousSidebarURL;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property BOOL insideFilesystemUpdate; // @synthesize insideFilesystemUpdate=_insideFilesystemUpdate;
@property(copy) NSURL *previousSidebarURL; // @synthesize previousSidebarURL=_previousSidebarURL;
@property(retain) NSColor *backgroundColour; // @synthesize backgroundColour=_backgroundColour;
@property(retain) NSColor *foregroundColour; // @synthesize foregroundColour=_foregroundColour;
@property(retain) NSMutableArray *autoExpansionIdentifiers; // @synthesize autoExpansionIdentifiers=_autoExpansionIdentifiers;
@property(retain) NSURL *quicklookURL; // @synthesize quicklookURL=_quicklookURL;
- (void).cxx_destruct;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)_cleanUp;
- (void)selfTest;
- (void)reload:(id)arg1;
- (void)switchSegmentedControlToAnyTimeMode;
- (void)switchSegmentedControlToNowMode;
- (void)didScrollInScrollView:(id)arg1;
- (void)trashFile:(id)arg1;
- (id)selectedSideBarItemsWithOnlyDeletable:(BOOL)arg1;
- (void)_trashAlertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (id)_filenamesForItemsMessageString:(id)arg1;
- (id)_quotedFilenameForItem:(id)arg1;
- (BOOL)_deleteSidebarItem:(id)arg1 error:(id *)arg2;
- (void)saveSelectionTo:(id)arg1;
- (void)saveDocumentTo:(id)arg1;
- (void)_saveSheetCompletedWithResult:(long long)arg1 forSavePanel:(id)arg2 contextInfo:(id)arg3;
- (void)_errorSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)revealInFinder:(id)arg1;
- (void)mail:(id)arg1;
- (void)mailFile:(id)arg1;
- (void)printDocument:(id)arg1;
- (void)printDocumentWithSettings:(id)arg1 showPrintPanel:(BOOL)arg2 delegate:(id)arg3 didPrintSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)_contextSidebarItem;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)outlineView:(id)arg1 itemForPersistentObject:(id)arg2;
- (id)outlineView:(id)arg1 persistentObjectForItem:(id)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (void)outlineViewDoubleClicked:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)_sidebarItemDidChangeNotification:(id)arg1;
- (void)_updateOutlineViewSelection;
- (id)sidebarItem;
- (void)setSidebarItem:(id)arg1;
- (void)_cleanUpSidebarItem;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)copy:(id)arg1;
- (id)stringForRowIndexes:(id)arg1 separateColumnsWithTabs:(BOOL)arg2;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableViewSingleClicked:(id)arg1;
- (void)tableViewDoubleClicked:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (double)heightOfMessage:(id)arg1 row:(long long)arg2;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowWillStartLiveResize:(id)arg1;
- (void)splitViewCompletedResize:(id)arg1;
- (void)_updateRowHeights;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)messageAUXLinkButtonClicked:(id)arg1;
- (void)disclosureButtonClicked:(id)arg1;
- (void)handleDisclosureForRowIndexes:(id)arg1 expand:(BOOL)arg2;
- (BOOL)disclosureStateForRow:(long long)arg1;
- (double)widthForMessage;
- (void)_aslQueryDidUpdateNotification:(id)arg1;
- (void)_aslQueryWillUpdateNotification:(id)arg1;
- (BOOL)tableViewIsVisible;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)showOrHideLogList:(id)arg1;
- (BOOL)_logListVisible;
- (void)_resizeHiddenSidebarSplitView;
- (void)_logFileChanged;
- (void)_reload;
- (void)_notifyUser;
- (void)_getOutOfMyFace:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)_windowDidOrderOnScreen:(id)arg1;
- (void)showHideTags:(id)arg1;
- (void)_updateShowHideTagsButton;
- (void)changeSection:(id)arg1;
- (void)_updateStatusBar;
- (void)tagsModeChanged:(long long)arg1;
- (void)_resetSelectedTags;
- (void)tagSelectionChanged:(id)arg1;
- (void)_updateTags;
- (void)_clearTags;
- (id)_sendersInBatch;
- (id)_tagsInBatch;
- (void)useSelectionForFind:(id)arg1;
- (void)findNextPreviousSegmentedControlClicked:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)findFieldUpdated:(id)arg1;
- (void)hideFindBanner:(id)arg1;
- (void)showFindBanner:(id)arg1;
- (struct _NSRange)_findWithOptions:(unsigned long long)arg1 updated:(BOOL)arg2;
- (void)_placeStringOnFindPasteboard:(id)arg1 ignoreCase:(BOOL)arg2;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_loadFindStringFromPasteboard;
- (void)ignoreMessage:(id)arg1;
- (void)editASLQuery:(id)arg1;
- (void)applyFilter:(id)arg1;
- (void)selectFilterField:(id)arg1;
- (void)_setFilterString:(id)arg1;
- (id)_filterAttributedString:(id)arg1;
- (id)_filterKeys;
- (void)_setStringEncoding:(unsigned long long)arg1;
- (void)changeEncodingMenu:(id)arg1;
- (void)changeEncodingPopUp:(id)arg1;
- (void)clear:(id)arg1;
- (void)insertMarker:(id)arg1;
- (void)updateMessageInspector:(id)arg1;
- (void)showMessageInspector:(id)arg1;
- (void)mailSelection:(id)arg1;
- (void)changeLineWrappingMode:(id)arg1;
- (void)_consoleColoursChangedNotification:(id)arg1;
- (void)_consoleFontChangedNotification:(id)arg1;
- (long long)_lastVisibleRow;
- (void)_setWrapLinesToWindow:(BOOL)arg1;
- (id)_selection;
- (void)_appendTextStorageWithData:(id)arg1 fromFileOffset:(unsigned long long)arg2;
- (void)_appendTextStorageWithAttributedString:(id)arg1;
- (void)_trimTextStorageLoadToFileOffset:(unsigned long long)arg1;
- (struct _NSRange)_rangeForFileOffset:(unsigned long long)arg1;
- (unsigned long long)_fileOffsetForRange:(struct _NSRange)arg1;
- (BOOL)textViewIsVisible;
- (void)messageViewPreferencesDidChange;
- (void)preferencesDidChange;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)windowDidLoad;
- (id)init;
- (id)initWithSidebarItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

