//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSAlertDelegate.h"
#import "NSApplicationDelegate.h"

@class NSString, NSWindowController;

@interface AppDelegate : NSObject <NSApplicationDelegate, NSAlertDelegate>
{
    NSWindowController *_wc;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)themeFixup;
- (void)weekendHighlightFixup;
- (BOOL)alertShowHelp:(id)arg1;
- (void)checkIfRunFromApplicationsFolder;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

