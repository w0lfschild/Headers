//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBADetailWindowDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface FBADetailWindowManager : NSObject <FBADetailWindowDelegate>
{
    NSMutableDictionary *_detailWindows;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *detailWindows; // @synthesize detailWindows=_detailWindows;
- (void)detailWindowControllerDidSubmit:(id)arg1;
- (void)detailWindowControllerDidClose:(id)arg1;
- (void)promptForPendingContentWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL hasPendingContent;
- (void)closeAllWindowsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeAllWindows;
- (void)addDetailWindowController:(id)arg1;
- (id)detailWindowControllerForMailboxItem:(id)arg1 creatingIfNeeded:(BOOL)arg2;
- (id)detailWindowControllerForMailboxItem:(id)arg1;
- (id)_keyForItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

