//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLgViewController.h"

#import "LGKeyboardViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class LGKeyboardView, MAKitScroller, NSButton, NSPopUpButton, NSString, NSTextField, NSView;

@interface StepInputKeyboardController : CLgViewController <NSWindowDelegate, LGKeyboardViewDelegate>
{
    NSButton *chordMode;
    NSButton *noteLength1;
    NSButton *noteLength2;
    NSButton *noteLength4;
    NSButton *noteLength8;
    NSButton *noteLength16;
    NSButton *noteLength32;
    NSButton *noteLength64;
    NSButton *noteLength128;
    NSButton *noteLengthDotted;
    NSButton *noteLengthTriplet;
    NSButton *sustainNotes;
    NSButton *velocityPPP;
    NSButton *velocityPP;
    NSButton *velocityP;
    NSButton *velocityMP;
    NSButton *velocityMF;
    NSButton *velocityF;
    NSButton *velocityFF;
    NSButton *velocityFFF;
    NSPopUpButton *channel;
    NSButton *quantize;
    NSView *scrollerView;
    NSView *keybView;
    NSTextField *labelC0;
    NSTextField *labelC1;
    NSTextField *labelC2;
    NSTextField *labelC3;
    NSTextField *labelC4;
    NSTextField *labelC5;
    NSTextField *labelC6;
    NSTextField *labelC7;
    MAKitScroller *scroller;
    LGKeyboardView *kv;
    NSButton *noteLengths[7];
    NSButton *velocities[8];
}

- (BOOL)keyDown1:(id)arg1;
- (void)change_scroller:(id)arg1;
- (void)key:(long long)arg1 of:(id)arg2 didChangeStateTo:(BOOL)arg3;
- (void)click_quantize:(id)arg1;
- (void)change_channel:(id)arg1;
- (void)change_velocity:(id)arg1;
- (void)change_sustainNotes:(id)arg1;
- (void)change_noteLengthTripletOrDotted:(id)arg1;
- (void)change_noteLength:(id)arg1;
- (void)change_chordMode:(id)arg1;
- (void)viewVisibilityChange:(BOOL)arg1;
- (void)middleCChanged;
- (void)handleUM_KEYB_PARAM:(id)arg1;
- (void)updateUI;
- (void)updateScroller;
- (void)awakeFromNib;
- (void)updateKeyboardLabels;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

