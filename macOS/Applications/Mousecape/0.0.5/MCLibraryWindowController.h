//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class MCLibraryViewController, NSProgressIndicator, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface MCLibraryWindowController : NSWindowController <NSWindowDelegate>
{
    MCLibraryViewController *_libraryViewController;
    NSView *_appliedAccessory;
    NSProgressIndicator *_progressBar;
    NSTextField *_progressField;
}

@property __weak NSTextField *progressField; // @synthesize progressField=_progressField;
@property __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property __weak NSView *appliedAccessory; // @synthesize appliedAccessory=_appliedAccessory;
@property __weak MCLibraryViewController *libraryViewController; // @synthesize libraryViewController=_libraryViewController;
- (void).cxx_destruct;
- (void)dumpCapeAction:(id)arg1;
- (void)showCapeAction:(id)arg1;
- (void)checkCapeAction:(id)arg1;
- (void)duplicateCapeAction:(id)arg1;
- (void)removeCapeAction:(id)arg1;
- (void)editCapeAction:(id)arg1;
- (void)applyCapeAction:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)composeAccessory;
- (id)windowNibName;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;
- (void)awakeFromNib;

@end

