//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AXSSMotionTrackingInputManager, NSArray, NSButton, NSObject, NSSpeechSynthesizer, NSStackView, NSTimer, UAShortcutManager;
@protocol OS_dispatch_semaphore;

@interface UACPanelViewController : NSViewController
{
    NSObject<OS_dispatch_semaphore> *_synthesizeSemaphore;
    NSSpeechSynthesizer *_synthesizer;
    AXSSMotionTrackingInputManager *__motionTrackingInputManager;
    BOOL _isRunningOutsideLoginWindowSession;
    BOOL _isRunningAtLoginWindow;
    NSStackView *__stackView;
    UAShortcutManager *__shortcutManager;
    NSArray *__controllers;
    NSButton *__openKeyboardPreferencesButton;
    NSButton *__openAccessibilityPreferencesButton;
    NSButton *__doneButton;
    NSTimer *__hintTimer;
}

- (void).cxx_destruct;
@property(retain) NSTimer *_hintTimer; // @synthesize _hintTimer=__hintTimer;
@property __weak NSButton *_doneButton; // @synthesize _doneButton=__doneButton;
@property __weak NSButton *_openAccessibilityPreferencesButton; // @synthesize _openAccessibilityPreferencesButton=__openAccessibilityPreferencesButton;
@property __weak NSButton *_openKeyboardPreferencesButton; // @synthesize _openKeyboardPreferencesButton=__openKeyboardPreferencesButton;
@property(retain) NSArray *_controllers; // @synthesize _controllers=__controllers;
@property(retain) UAShortcutManager *_shortcutManager; // @synthesize _shortcutManager=__shortcutManager;
@property __weak NSStackView *_stackView; // @synthesize _stackView=__stackView;
@property(nonatomic) BOOL isRunningAtLoginWindow; // @synthesize isRunningAtLoginWindow=_isRunningAtLoginWindow;
@property(nonatomic) BOOL isRunningOutsideLoginWindowSession; // @synthesize isRunningOutsideLoginWindowSession=_isRunningOutsideLoginWindowSession;
- (void)_createSynthesizer;
- (id)_synthesizer;
- (id)_stringToSpeakForView:(id)arg1;
- (id)_spokenStateForControl:(id)arg1;
- (id)_spokenTitleForView:(id)arg1;
- (BOOL)_allowSpeaking;
- (void)_speakIfScreenReaderNotRunning:(id)arg1;
- (void)speakState:(id)arg1;
- (void)speakUpdatedStateForControl:(id)arg1;
- (void)speakSelectedItem;
- (void)openKeyboardPrefs:(id)arg1;
- (void)openUniversalAccess:(id)arg1;
- (void)_openPreferencePane:(id)arg1;
- (void)pressDoneButton:(id)arg1;
- (BOOL)_isInteractionEvent;
- (void)_hintTimerFired:(id)arg1;
- (void)loadView;
- (void)updateState;
- (void)_generateControllers;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

