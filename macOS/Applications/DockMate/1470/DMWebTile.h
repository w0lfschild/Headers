//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSButton, NSImage, NSImageView, NSString, NSTableView, NSWindow, SBObject;

@interface DMWebTile : NSView <NSTableViewDataSource, NSTableViewDelegate>
{
    unsigned int _windowID;
    int _processID;
    NSImage *_img;
    NSWindow *_bigWin;
    NSButton *_closeButton;
    NSButton *_minimizeButton;
    NSButton *_maximizeButton;
    NSImageView *_windowImage;
    NSButton *_focusButton;
    long long _windowIndex;
    unsigned long long _spaceID;
    SBObject *_browserWindowScriptingObject;
    NSTableView *_tabList;
    struct CGRect _windowFrame;
}

- (void).cxx_destruct;
@property(retain) NSTableView *tabList; // @synthesize tabList=_tabList;
@property(retain) SBObject *browserWindowScriptingObject; // @synthesize browserWindowScriptingObject=_browserWindowScriptingObject;
@property int processID; // @synthesize processID=_processID;
@property unsigned long long spaceID; // @synthesize spaceID=_spaceID;
@property unsigned int windowID; // @synthesize windowID=_windowID;
@property long long windowIndex; // @synthesize windowIndex=_windowIndex;
@property(retain) NSButton *focusButton; // @synthesize focusButton=_focusButton;
@property(retain) NSImageView *windowImage; // @synthesize windowImage=_windowImage;
@property(retain) NSButton *maximizeButton; // @synthesize maximizeButton=_maximizeButton;
@property(retain) NSButton *minimizeButton; // @synthesize minimizeButton=_minimizeButton;
@property(retain) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain) NSWindow *bigWin; // @synthesize bigWin=_bigWin;
@property(retain) NSImage *img; // @synthesize img=_img;
@property struct CGRect windowFrame; // @synthesize windowFrame=_windowFrame;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)viewWillMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

