//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"
#import "NSTouchBarProvider.h"

@class NSString, NSTouchBar, SPTClientMainWindow, SPTClientMenuHandler, SPTClientWindowDelegate;

@interface SPTClientAppDelegate : NSObject <NSApplicationDelegate, NSTouchBarProvider>
{
    BOOL _isShuttingDown;
    BOOL _appHasBeenCreated;
    BOOL _isFirstAppDidBecomeActive;
    BOOL _startupHelperWasRunningOnStartup;
    BOOL _autoStartHiddenSetting;
    SPTClientMenuHandler *_clientMenuHandler;
    SPTClientWindowDelegate *_mainWindowDelegate;
    struct PlayerDelegate *_playerDelegate;
    id <NSObject> _appNapActivity;
    shared_ptr_539df0a8 _systemLoadMeasurer;
    shared_ptr_5027cb57 _httpSystemConnectionFactory;
}

+ (id)instance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL autoStartHiddenSetting; // @synthesize autoStartHiddenSetting=_autoStartHiddenSetting;
@property(readonly, nonatomic) BOOL startupHelperWasRunningOnStartup; // @synthesize startupHelperWasRunningOnStartup=_startupHelperWasRunningOnStartup;
@property(nonatomic) BOOL isFirstAppDidBecomeActive; // @synthesize isFirstAppDidBecomeActive=_isFirstAppDidBecomeActive;
@property(nonatomic) BOOL appHasBeenCreated; // @synthesize appHasBeenCreated=_appHasBeenCreated;
@property(retain, nonatomic) id <NSObject> appNapActivity; // @synthesize appNapActivity=_appNapActivity;
@property struct PlayerDelegate *playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property shared_ptr_5027cb57 httpSystemConnectionFactory; // @synthesize httpSystemConnectionFactory=_httpSystemConnectionFactory;
@property(readonly) shared_ptr_539df0a8 systemLoadMeasurer; // @synthesize systemLoadMeasurer=_systemLoadMeasurer;
@property(nonatomic) BOOL isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;
@property(retain, nonatomic) SPTClientWindowDelegate *mainWindowDelegate; // @synthesize mainWindowDelegate=_mainWindowDelegate;
@property(retain, nonatomic) SPTClientMenuHandler *clientMenuHandler; // @synthesize clientMenuHandler=_clientMenuHandler;
@property(readonly) NSTouchBar *touchBar;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)handleURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)showMainWindow;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)handleOpenApplicationEvent:(id)arg1 replyEvent:(id)arg2;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)tryToTerminateApplication:(id)arg1;
- (void)updateMenu;
- (void)setIsHardwareAccelerationEnabled:(BOOL)arg1;
- (void)setLoggedIn:(BOOL)arg1;
- (id)applicationDockMenu:(id)arg1;
@property(readonly) SPTClientMainWindow *mainWindow;
- (void)preferredScrollerStyleChanged:(id)arg1;
- (void)onSessionActivationChange:(id)arg1;
- (void)invalidateApplicationTouchbar;
- (void)enableAccessibility:(_Bool)arg1;
@property(readonly) BOOL wasAutoStartedHidden;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

