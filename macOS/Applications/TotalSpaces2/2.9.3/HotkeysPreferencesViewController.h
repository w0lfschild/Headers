//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MASPreferencesViewController.h"

@class AppDelegate, MASShortcutView, NSButton, NSDictionary, NSImage, NSPopUpButton, NSPopover, NSSegmentedControl, NSString, NSTextField;

@interface HotkeysPreferencesViewController : NSViewController <MASPreferencesViewController>
{
    MASShortcutView *overviewGridKeys;
    MASShortcutView *instantExposeKeys;
    MASShortcutView *singleDesktopExposeKeys;
    MASShortcutView *lastSpaceKeys;
    NSSegmentedControl *moveSpaceControl;
    NSSegmentedControl *moveWindowControl;
    NSButton *changeSpaceCustomButton;
    NSButton *moveWindowCustomButton;
    NSPopUpButton *overviewGridMouseButton;
    NSPopUpButton *instantExposeMouseButton;
    NSPopUpButton *singleDesktopExposeButton;
    NSPopUpButton *lastSpaceMouseButton;
    NSPopover *popover;
    NSSegmentedControl *customKeysControl;
    MASShortcutView *leftKeys;
    MASShortcutView *rightKeys;
    MASShortcutView *upKeys;
    MASShortcutView *downKeys;
    NSTextField *leftKeysLabel;
    NSTextField *rightKeysLabel;
    NSTextField *upKeysLabel;
    NSTextField *downKeysLabel;
    NSTextField *changePlusLabel;
    NSTextField *moveWindowPlusLabel;
    AppDelegate *appDelegate;
    NSDictionary *mouseButtonsByPrefsKey;
}

- (void).cxx_destruct;
- (void)setupMenuForPopUpButton:(id)arg1 andBindToUserDefaultsKeyPath:(id)arg2;
- (void)viewWillAppear;
- (void)updatePopoverKeyRecordersFor:(long long)arg1;
- (void)updateCustomButtons;
- (void)customKeysControlChanged:(id)arg1;
- (void)popoverDone:(id)arg1;
- (void)showPopover:(id)arg1;
- (void)moveWindowAction;
- (void)moveSpaceAction;
- (void)updateArrowHotkeys:(unsigned long long)arg1 oldFlags:(unsigned long long)arg2 actions:(id)arg3 successBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)flagsForSegmentControl:(id)arg1;
- (void)moveWindowControlAction:(id)arg1;
- (void)moveSpaceControlAction:(id)arg1;
- (void)checkMouseButtonConflicts:(id)arg1;
- (void)alertMouseButtonConflict;
- (void)updateModifierKeySelectors;
- (void)setupKeyRecorders;
@property(readonly, nonatomic) NSString *toolbarItemLabel;
@property(readonly, nonatomic) NSImage *toolbarItemImage;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

