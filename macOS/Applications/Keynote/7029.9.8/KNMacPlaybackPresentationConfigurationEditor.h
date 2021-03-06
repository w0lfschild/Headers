//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNMacPlaybackScreenConfigurationCustomizationViewControllerDelegate-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"

@class KNMacPlaybackPresentationController, KNMacPlaybackScreenConfigurationController, KNMacPlaybackScreenConfigurationCustomizationViewController, KNMacPlaybackWindow, KNMacPresenterDisplayConfiguration, KNMacPresenterDisplayFloatingOptionsWindowController, KNMacPresenterDisplaySinglePlaybackScreenOptionsViewController, KNMacPresenterDisplayViewController, NSPopover, NSString, NSValue, NSWindow;

@interface KNMacPlaybackPresentationConfigurationEditor : NSObject <NSPopoverDelegate, KNMacPlaybackScreenConfigurationCustomizationViewControllerDelegate>
{
    NSPopover *_singlePresenterDisplayOptionsPopover;
    KNMacPresenterDisplaySinglePlaybackScreenOptionsViewController *_singlePresenterDisplayOptionsViewController;
    KNMacPlaybackScreenConfigurationCustomizationViewController *_screenConfigurationCustomizationViewController;
    KNMacPresenterDisplayFloatingOptionsWindowController *_floatingOptionsWindowController;
    KNMacPresenterDisplayViewController *_viewControllerInMetricsCustomization;
    KNMacPresenterDisplayConfiguration *_savedConfigurationForMetricsCustomization;
    KNMacPlaybackWindow *_activeCustomizingWindow;
    NSValue *_savedMousePosition;
    unsigned long long _screenConfigurationCustomizationViewAnimationCount;
    BOOL _restoreScreenConfigurationCustomizationControllerAfterMetricsCustomization;
    BOOL _customizingScreenConfiguration;
    KNMacPlaybackPresentationController *_presentationController;
    KNMacPlaybackScreenConfigurationController *_screenConfigurationController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) KNMacPlaybackWindow *activeMetricsCustomizationWindow; // @synthesize activeMetricsCustomizationWindow=_activeCustomizingWindow;
@property(nonatomic, getter=isCustomizingScreenConfiguration) BOOL customizingScreenConfiguration; // @synthesize customizingScreenConfiguration=_customizingScreenConfiguration;
@property(readonly, nonatomic) KNMacPlaybackScreenConfigurationController *screenConfigurationController; // @synthesize screenConfigurationController=_screenConfigurationController;
@property(readonly, nonatomic) __weak KNMacPlaybackPresentationController *presentationController; // @synthesize presentationController=_presentationController;
- (void)screenConfigurationCustomizationViewController:(id)arg1 closeWithReturnCode:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_restoreMousePositionIfNeeded;
- (void)p_saveAndMoveMousePositionToScreen:(id)arg1;
- (void)endMetricsConfiguration;
- (void)cancelMetricsConfiguration;
- (id)p_addShroudViewControllerForWindow:(id)arg1;
- (void)beginMetricsCustomizationForPresenterDisplayConfigurationController:(id)arg1;
@property(readonly, nonatomic, getter=isConfiguringMetrics) BOOL configuringMetrics;
- (void)updateScreenConfigurationWindowsForConfigurationChangePerformingBlockAfterTearDown:(CDUnknownBlockType)arg1;
- (id)p_presenterDisplayOptionsTimerConfigurationAllowingTimeRemainingTimerMode:(char *)arg1;
- (void)p_changePresenterDisplayTimerConfigurationToConfiguration:(id)arg1;
- (void)p_teardownScreenConfigurationCustomizationViewController;
- (id)p_findPlaybackWindowOnScreen:(id)arg1;
- (void)p_setUpScreenConfigurationCustomizationViewController:(id)arg1 onScreen:(id)arg2;
- (void)p_teardownSinglePresenterDisplayOptionsPopover;
- (void)popoverDidClose:(id)arg1;
- (void)p_configureOptionsViewController:(id)arg1 forPresenterDisplayViewController:(id)arg2;
- (void)p_setUpSinglePresenterDisplayOptionsPopover;
@property(readonly, nonatomic) NSWindow *screenConfigurationCustomizationWindow;
- (void)endCustomizingScreenConfigurationAnimated:(BOOL)arg1;
- (void)beginCustomizingScreenConfigurationUsingFullScreenUIAnimated:(BOOL)arg1;
- (void)p_prepareAndShowSinglePresenterDisplayOptionsPopoverForView:(id)arg1;
- (void)beginCustomizingScreenConfiguration:(id)arg1;
@property(readonly, nonatomic) BOOL screenConfigurationRequiresFullScreenUI;
- (id)initWithPresentationController:(id)arg1 screenConfigurationController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

