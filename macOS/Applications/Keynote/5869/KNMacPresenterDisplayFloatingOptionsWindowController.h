//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class KNMacPresenterDisplayFloatingOptionsTitleBarView, KNMacPresenterDisplaySingleScreenOptionsViewController, NSTextField, NSView, NSWindow;

@interface KNMacPresenterDisplayFloatingOptionsWindowController : NSWindowController
{
    BOOL _controlsEnabled;
    NSView *_optionsContainerView;
    NSTextField *_instructionsTextField;
    KNMacPresenterDisplaySingleScreenOptionsViewController *_optionsViewController;
    KNMacPresenterDisplayFloatingOptionsTitleBarView *_titleBarView;
    NSWindow *_constraintWindow;
}

@property(nonatomic, getter=isControlsEnabled) BOOL controlsEnabled; // @synthesize controlsEnabled=_controlsEnabled;
@property(nonatomic) NSWindow *constraintWindow; // @synthesize constraintWindow=_constraintWindow;
@property(retain, nonatomic) KNMacPresenterDisplayFloatingOptionsTitleBarView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(readonly, nonatomic) KNMacPresenterDisplaySingleScreenOptionsViewController *optionsViewController; // @synthesize optionsViewController=_optionsViewController;
@property(retain, nonatomic) NSTextField *instructionsTextField; // @synthesize instructionsTextField=_instructionsTextField;
@property(retain, nonatomic) NSView *optionsContainerView; // @synthesize optionsContainerView=_optionsContainerView;
- (void).cxx_destruct;
- (void)windowDidLoad;
- (id)init;

@end

