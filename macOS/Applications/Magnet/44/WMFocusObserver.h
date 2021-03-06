//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WMAppWatcherDelegate-Protocol.h"

@class AXSystemElement, AXWindow, NSNotificationCenter, NSRunningApplication, NSString, WMAppWatcher, WMFactoryBlacklist, WMUserBlackList;
@protocol OS_dispatch_queue;

@interface WMFocusObserver : NSObject <WMAppWatcherDelegate>
{
    BOOL _magnetEnabled;
    BOOL _currentAppSupported;
    BOOL _sixthsSupported;
    NSNotificationCenter *_notificationCenter;
    AXSystemElement *_systemUIInspector;
    WMFactoryBlacklist *_factoryBlacklist;
    WMUserBlackList *_userBlacklist;
    NSRunningApplication *_activeApplication;
    AXWindow *_focusedWindow;
    WMAppWatcher *_watcher;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain) WMAppWatcher *watcher; // @synthesize watcher=_watcher;
@property BOOL sixthsSupported; // @synthesize sixthsSupported=_sixthsSupported;
@property BOOL currentAppSupported; // @synthesize currentAppSupported=_currentAppSupported;
@property BOOL magnetEnabled; // @synthesize magnetEnabled=_magnetEnabled;
@property(retain) AXWindow *focusedWindow; // @synthesize focusedWindow=_focusedWindow;
@property(retain) NSRunningApplication *activeApplication; // @synthesize activeApplication=_activeApplication;
@property(retain) WMUserBlackList *userBlacklist; // @synthesize userBlacklist=_userBlacklist;
@property(retain) WMFactoryBlacklist *factoryBlacklist; // @synthesize factoryBlacklist=_factoryBlacklist;
@property(retain) AXSystemElement *systemUIInspector; // @synthesize systemUIInspector=_systemUIInspector;
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void).cxx_destruct;
- (void)userBlacklistDidChange;
- (void)focusedWindowUpdateRequested;
- (void)applicationDidActivate:(id)arg1;
- (void)updateSixthsSupportedStatus;
- (void)updateFocusedWindow;
- (void)updateEnabledStatus;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

