//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"

@class MainWindowController, NSString;

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    MainWindowController *_mainWindowController;
}

@property(retain, nonatomic) MainWindowController *mainWindowController; // @synthesize mainWindowController=_mainWindowController;
- (void).cxx_destruct;
- (void)contactSupport:(id)arg1;
- (void)visitWebsite:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)open:(id)arg1;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)applicationWillFinishLaunching:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

