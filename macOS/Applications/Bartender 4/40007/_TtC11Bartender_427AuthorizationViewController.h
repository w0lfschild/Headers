//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSBox, NSButton, NSTextField;

@interface _TtC11Bartender_427AuthorizationViewController : NSViewController
{
    // Error parsing type: , name: welcomeController
    // Error parsing type: , name: accessibilityPrefsButton
    // Error parsing type: , name: screenRecordingPrefsButton
    // Error parsing type: , name: accessibilityPrefsLabel
    // Error parsing type: , name: screenRecordingPrefsLabel
    // Error parsing type: , name: accessibilityBox
    // Error parsing type: , name: screenRecordingBox
    // Error parsing type: , name: accessibiltyInstructionsLabel
    // Error parsing type: , name: screenRecordingInstructionsLabel
    // Error parsing type: , name: AccessibilityEnabled
    // Error parsing type: , name: ScreenRecordingEnabled
    // Error parsing type: , name: authCheckTimer
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidDisappear;
- (void)clickedExample:(id)arg1;
- (void)viewWillAppear;
- (void)clickOpenAccessibilityPreferences:(id)arg1;
- (void)clickOpenScreenRecordingPreferences:(id)arg1;
- (void)clickOpenPreferences:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSTextField *screenRecordingInstructionsLabel; // @synthesize screenRecordingInstructionsLabel;
@property(nonatomic) __weak NSTextField *accessibiltyInstructionsLabel; // @synthesize accessibiltyInstructionsLabel;
@property(nonatomic) __weak NSBox *screenRecordingBox; // @synthesize screenRecordingBox;
@property(nonatomic) __weak NSBox *accessibilityBox; // @synthesize accessibilityBox;
@property(nonatomic) __weak NSTextField *screenRecordingPrefsLabel; // @synthesize screenRecordingPrefsLabel;
@property(nonatomic) __weak NSTextField *accessibilityPrefsLabel; // @synthesize accessibilityPrefsLabel;
@property(nonatomic) __weak NSButton *screenRecordingPrefsButton; // @synthesize screenRecordingPrefsButton;
@property(nonatomic) __weak NSButton *accessibilityPrefsButton; // @synthesize accessibilityPrefsButton;

@end

