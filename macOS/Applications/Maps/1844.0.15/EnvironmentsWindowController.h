//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "EnvironmentsControllerDelegate-Protocol.h"

@class EnvironmentsController, NSString, NSTableView;

__attribute__((visibility("hidden")))
@interface EnvironmentsWindowController : NSWindowController <EnvironmentsControllerDelegate>
{
    EnvironmentsController *_environmentsController;
    NSTableView *_tableView;
}

@property(retain) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)environmentsController:(id)arg1 didUpdateEnvironmentInfo:(id)arg2 inSection:(long long)arg3;
- (void)environmentsController:(id)arg1 didUpdateEnvironmentsSection:(long long)arg2;
- (void)_toggleUseProductionURLs:(id)arg1;
- (unsigned long long)_numberOfRowsInDefaultSection;
- (void)_activeEnvironmentChanged:(id)arg1;
- (id)_environmentForRow:(long long)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

