//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSButton, NSImage, NSImageView, NSLayoutConstraint, NSMutableArray, NSMutableIndexSet, NSProgressIndicator, NSScrollView, NSString, NSTableView, NSTextField, NSWindow;

@interface SUBaseProgressSheet : NSWindowController <NSTableViewDataSource, NSTableViewDelegate>
{
    BOOL _hasSetStatusString;
    BOOL _hasReportedStart;
    BOOL _hasReportedProgress;
    BOOL _hasCompleted;
    unsigned int _noSystemIdleAssertion;
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _completionHandler;
    NSImageView *_diskIconView;
    NSTextField *_sheetTitleField;
    NSTextField *_sheetStatusField;
    NSTextField *_detailsLabel;
    NSTableView *_logTable;
    NSButton *_disclosureButton;
    NSButton *_doneButton;
    NSLayoutConstraint *_tableSizeConstraint;
    NSLayoutConstraint *_doneButtonTopConstraint;
    NSScrollView *_scrollView;
    NSProgressIndicator *_progressBar;
    NSWindow *_parentWindow;
    NSString *__sheetTitle;
    NSImage *__sheetIcon;
    NSString *_subheading;
    NSMutableArray *_logMessages;
    NSMutableIndexSet *_logHighlightIndexes;
}

@property(retain) NSMutableIndexSet *logHighlightIndexes; // @synthesize logHighlightIndexes=_logHighlightIndexes;
@property(retain) NSMutableArray *logMessages; // @synthesize logMessages=_logMessages;
@property unsigned int noSystemIdleAssertion; // @synthesize noSystemIdleAssertion=_noSystemIdleAssertion;
@property BOOL hasCompleted; // @synthesize hasCompleted=_hasCompleted;
@property BOOL hasReportedProgress; // @synthesize hasReportedProgress=_hasReportedProgress;
@property BOOL hasReportedStart; // @synthesize hasReportedStart=_hasReportedStart;
@property BOOL hasSetStatusString; // @synthesize hasSetStatusString=_hasSetStatusString;
@property(copy) NSString *subheading; // @synthesize subheading=_subheading;
@property(retain) NSImage *_sheetIcon; // @synthesize _sheetIcon=__sheetIcon;
@property(retain) NSString *_sheetTitle; // @synthesize _sheetTitle=__sheetTitle;
@property(retain) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property __weak NSLayoutConstraint *doneButtonTopConstraint; // @synthesize doneButtonTopConstraint=_doneButtonTopConstraint;
@property __weak NSLayoutConstraint *tableSizeConstraint; // @synthesize tableSizeConstraint=_tableSizeConstraint;
@property __weak NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property __weak NSButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property __weak NSTableView *logTable; // @synthesize logTable=_logTable;
@property __weak NSTextField *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property __weak NSTextField *sheetStatusField; // @synthesize sheetStatusField=_sheetStatusField;
@property __weak NSTextField *sheetTitleField; // @synthesize sheetTitleField=_sheetTitleField;
@property __weak NSImageView *diskIconView; // @synthesize diskIconView=_diskIconView;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)setSheetStatusString:(id)arg1;
- (void)dismissWithReturnCode:(long long)arg1;
@property(retain, nonatomic) NSString *sheetTitle;
@property(retain, nonatomic) NSImage *sheetIcon;
- (void)reportResult:(int)arg1;
- (void)reportProgressMessage:(id)arg1 logMessage:(id)arg2 subheading:(BOOL)arg3;
- (void)reportProgressSubheading:(id)arg1 logMessage:(id)arg2;
- (void)reportProgressMessage:(id)arg1;
- (void)_updateStatusFieldMessage:(id)arg1;
- (void)reportProgress:(double)arg1;
- (void)reportStartMessage:(id)arg1;
- (void)_updateDisplay;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)closeClicked:(id)arg1;
- (void)doAction;
- (BOOL)detailsVisible;
- (void)disclosureButtonClicked:(id)arg1;
- (void)disclosureLabelClicked:(id)arg1;
- (void)showDetails;
- (void)showWindowWithParentWindow:(id)arg1;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

