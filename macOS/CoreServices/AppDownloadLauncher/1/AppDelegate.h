//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"

@class NSMutableSet, NSString, NSWindow;

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    NSMutableSet *_restoreDownloadsRequests;
    NSWindow *_window;
}

@property NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (id)_fileTypeForFile:(id)arg1 queryKey:(id *)arg2;
- (void)_restoreDownloadRequestStartedOnMainThread:(id)arg1;
- (void)restoreDownloadRequestStarted:(id)arg1;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

