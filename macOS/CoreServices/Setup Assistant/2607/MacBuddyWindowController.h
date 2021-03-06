//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class BUIViewController, MBShieldWindow, MacBuddyController, NSButton, NSImageView, NSLayoutConstraint, NSMenu, NSMutableArray, NSObject, NSPopUpButton, NSProgressIndicator, NSString, NSTextField, NSTimer, NSView, NSViewController;
@protocol OS_dispatch_queue, OS_dispatch_source, ViewNavigating;

@interface MacBuddyWindowController : NSWindowController <NSWindowDelegate>
{
    NSView *_mainView;
    NSProgressIndicator *_spinner;
    NSTextField *_statusText;
    NSTextField *_titleText;
    NSTextField *_headerText;
    NSMutableArray *_shieldWindows;
    MBShieldWindow *_mainShieldWindow;
    NSView *mbExtraTextView;
    NSTextField *mbExtraTextField;
    NSObject<OS_dispatch_queue> *applySettingsQueue;
    BOOL _isMiniBuddy;
    unsigned long long _spid;
    BOOL _usesDesktopImage;
    BOOL _windowLevelApplicationUIVisible;
    BOOL _loadedTIMenu;
    BOOL _windowsHiddenMode;
    NSTextField *_titleField;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_headerTextWidthContraint;
    NSLayoutConstraint *_mainViewToHeaderConstraint;
    NSLayoutConstraint *_mainViewToAttributedHeaderConstraint;
    NSLayoutConstraint *_mainViewToTitleConstraint;
    NSLayoutConstraint *_mainViewStandardLeadingConstraint;
    NSLayoutConstraint *_mainViewStandardTrailingConstraint;
    NSLayoutConstraint *_mainViewExpandedLeadingConstraint;
    NSLayoutConstraint *_mainViewExpandedTrailingConstraint;
    NSLayoutConstraint *_batteryViewToInputConstraint;
    NSLayoutConstraint *_batteryViewToWindowConstraint;
    NSPopUpButton *_inputMenuButton;
    NSLayoutConstraint *_nextCenteredConstraint;
    NSLayoutConstraint *_prevCenteredConstraint;
    NSLayoutConstraint *_noneCenteredConstraint;
    NSViewController<ViewNavigating> *_originatingViewController;
    NSString *_sidetripDestination;
    NSButton *_nextButton;
    NSButton *_prevButton;
    NSButton *_alternateButton;
    NSButton *_secondAlternateButton;
    NSImageView *_batteryImageView;
    BUIViewController *_buiViewController;
    NSViewController<ViewNavigating> *_currentViewController;
    MacBuddyController *_MacBuddyController;
    NSString *_windowLevelApplicationUIString;
    NSMenu *_switchMenu;
    NSTimer *_windowLevelApplicationUITimer;
    NSTimer *_shutdownTimer;
    CDUnknownBlockType _restoreNavigationButtonsStateBlock;
    NSObject<OS_dispatch_source> *_batteryUpdateTimer;
    NSObject<OS_dispatch_queue> *_paneSequencingQueue;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *paneSequencingQueue; // @synthesize paneSequencingQueue=_paneSequencingQueue;
@property(retain) NSObject<OS_dispatch_source> *batteryUpdateTimer; // @synthesize batteryUpdateTimer=_batteryUpdateTimer;
@property(copy) CDUnknownBlockType restoreNavigationButtonsStateBlock; // @synthesize restoreNavigationButtonsStateBlock=_restoreNavigationButtonsStateBlock;
@property(retain) NSTimer *shutdownTimer; // @synthesize shutdownTimer=_shutdownTimer;
@property(retain) NSTimer *windowLevelApplicationUITimer; // @synthesize windowLevelApplicationUITimer=_windowLevelApplicationUITimer;
@property BOOL windowsHiddenMode; // @synthesize windowsHiddenMode=_windowsHiddenMode;
@property BOOL loadedTIMenu; // @synthesize loadedTIMenu=_loadedTIMenu;
@property(retain) NSMenu *switchMenu; // @synthesize switchMenu=_switchMenu;
@property(retain) NSString *windowLevelApplicationUIString; // @synthesize windowLevelApplicationUIString=_windowLevelApplicationUIString;
@property BOOL windowLevelApplicationUIVisible; // @synthesize windowLevelApplicationUIVisible=_windowLevelApplicationUIVisible;
@property BOOL usesDesktopImage; // @synthesize usesDesktopImage=_usesDesktopImage;
@property(retain) MacBuddyController *MacBuddyController; // @synthesize MacBuddyController=_MacBuddyController;
@property(retain) NSViewController<ViewNavigating> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain) BUIViewController *buiViewController; // @synthesize buiViewController=_buiViewController;
@property __weak NSImageView *batteryImageView; // @synthesize batteryImageView=_batteryImageView;
@property __weak NSButton *secondAlternateButton; // @synthesize secondAlternateButton=_secondAlternateButton;
@property __weak NSButton *alternateButton; // @synthesize alternateButton=_alternateButton;
@property __weak NSButton *prevButton; // @synthesize prevButton=_prevButton;
@property __weak NSButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain) NSString *sidetripDestination; // @synthesize sidetripDestination=_sidetripDestination;
@property(retain) NSViewController<ViewNavigating> *originatingViewController; // @synthesize originatingViewController=_originatingViewController;
@property(retain) NSLayoutConstraint *noneCenteredConstraint; // @synthesize noneCenteredConstraint=_noneCenteredConstraint;
@property(retain) NSLayoutConstraint *prevCenteredConstraint; // @synthesize prevCenteredConstraint=_prevCenteredConstraint;
@property(retain) NSLayoutConstraint *nextCenteredConstraint; // @synthesize nextCenteredConstraint=_nextCenteredConstraint;
@property __weak NSPopUpButton *inputMenuButton; // @synthesize inputMenuButton=_inputMenuButton;
@property(retain) NSLayoutConstraint *batteryViewToWindowConstraint; // @synthesize batteryViewToWindowConstraint=_batteryViewToWindowConstraint;
@property(retain) NSLayoutConstraint *batteryViewToInputConstraint; // @synthesize batteryViewToInputConstraint=_batteryViewToInputConstraint;
@property(retain) NSLayoutConstraint *mainViewExpandedTrailingConstraint; // @synthesize mainViewExpandedTrailingConstraint=_mainViewExpandedTrailingConstraint;
@property(retain) NSLayoutConstraint *mainViewExpandedLeadingConstraint; // @synthesize mainViewExpandedLeadingConstraint=_mainViewExpandedLeadingConstraint;
@property(retain) NSLayoutConstraint *mainViewStandardTrailingConstraint; // @synthesize mainViewStandardTrailingConstraint=_mainViewStandardTrailingConstraint;
@property(retain) NSLayoutConstraint *mainViewStandardLeadingConstraint; // @synthesize mainViewStandardLeadingConstraint=_mainViewStandardLeadingConstraint;
@property(retain) NSLayoutConstraint *mainViewToTitleConstraint; // @synthesize mainViewToTitleConstraint=_mainViewToTitleConstraint;
@property(retain) NSLayoutConstraint *mainViewToAttributedHeaderConstraint; // @synthesize mainViewToAttributedHeaderConstraint=_mainViewToAttributedHeaderConstraint;
@property(retain) NSLayoutConstraint *mainViewToHeaderConstraint; // @synthesize mainViewToHeaderConstraint=_mainViewToHeaderConstraint;
@property(retain) NSLayoutConstraint *headerTextWidthContraint; // @synthesize headerTextWidthContraint=_headerTextWidthContraint;
@property __weak NSLayoutConstraint *titleTopConstraint; // @synthesize titleTopConstraint=_titleTopConstraint;
@property __weak NSTextField *titleField; // @synthesize titleField=_titleField;
- (BOOL)_appearanceIsDark;
- (void)buddyIsExiting;
- (void)_showWindowLevelApplicationUI:(id)arg1;
- (void)_hideWindowLevelApplicationUI;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)toggledExpandedContainerView:(BOOL)arg1;
- (BOOL)headerHeightExceedsHIRecommendations;
- (void)checkHeaderFieldMetrics;
- (BOOL)_swallowEvent:(id)arg1;
- (void)_handleTIMChange:(struct __TISInputSource *)arg1;
- (void)appleTextInputMenuDidChange:(id)arg1;
- (void)_handleTISSelection:(id)arg1;
- (void)_startInputMenuForcedForTargetUser;
- (void)_startInputMenuForcedForNonAscii:(id)arg1;
- (void)_startInputMenu;
- (void)hideMainWindow;
- (void)switchToDesktopImage;
- (void)returnToStandardSpace;
- (void)addWindowsToUnmanagedSpace;
- (void)moveToUnmanagedSpace;
- (void)refreshShieldWindows;
- (void)_handleDisplaysChanged;
- (id)_desktopImageForScreen:(id)arg1;
- (void)centerInMainWindow;
- (void)_makeShieldWindows;
- (void)_reenableButtonNavigation;
- (void)_disableButtonNavigation;
- (void)didClickThirdAlternate:(id)arg1;
- (void)didClickSecondAlternate:(id)arg1;
- (void)didClickAlternate:(id)arg1;
- (void)didClickBack:(id)arg1;
- (void)didClickContinue:(id)arg1;
- (void)centerNextButton;
- (void)centerPreviousButton;
- (void)unCenterButtons;
- (void)_processUserInputOnThirdAlternate;
- (void)_processUserInputOnSecondAlternate;
- (void)_processUserInputOnAlternate;
- (void)_processUserInputOnBack;
- (void)_processUserInputOnNext;
- (void)_showThirdAlternatePane;
- (void)_showSecondAlternatePane;
- (void)_showAlternatePane;
- (void)_showPreviousPane;
- (void)_showNextPane;
- (void)_showFirstPane;
- (void)_returnFromSidetripForward:(BOOL)arg1;
- (void)sidetripToSpecificPane:(id)arg1;
- (void)goToThirdAlternatePane;
- (void)goToSecondAlternatePane;
- (void)goToAlternatePane;
- (void)goToPreviousPane;
- (void)goToNextPaneFromPane:(id)arg1;
- (void)goToNextPane;
- (id)_chooseAFirstResponderFromView:(id)arg1;
- (void)_setShieldTextPrevious:(id)arg1 next:(id)arg2;
- (void)setWindowsHidden:(BOOL)arg1;
- (void)_activateViewController:(id)arg1;
- (void)showErrorWithDictionary:(id)arg1;
- (void)stopSettingsApplicationUI:(id)arg1;
- (void)startSettingsApplicationUI:(id)arg1;
- (void)stopPerpetualStatusUI:(id)arg1;
- (void)startPerpetualStatusUI:(id)arg1;
- (void)dealloc;
- (void)alignWindowsToLevel:(int)arg1;
- (void)setupHISpec;
- (void)setThemeOnButton:(id)arg1;
- (id)setupConstraint:(id)arg1 forNavigationButton:(id)arg2 andLabel:(id)arg3;
- (void)awakeFromNib;
- (id)init;
- (void)updateBatteryState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

