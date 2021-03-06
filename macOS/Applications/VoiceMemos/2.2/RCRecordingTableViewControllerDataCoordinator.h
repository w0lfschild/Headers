//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSString, RCSavedRecordingsController;
@protocol RCRecordingTableViewDataCoordinatorDelegate;

@interface RCRecordingTableViewControllerDataCoordinator : NSObject <NSFetchedResultsControllerDelegate>
{
    NSString *_searchString;
    id <RCRecordingTableViewDataCoordinatorDelegate> _delegate;
    RCSavedRecordingsController *_savedRecordingsController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RCSavedRecordingsController *savedRecordingsController; // @synthesize savedRecordingsController=_savedRecordingsController;
@property(nonatomic) __weak id <RCRecordingTableViewDataCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)_changeLogForType:(unsigned long long)arg1 oldIndexPath:(id)arg2 newIndexPath:(id)arg3;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (id)_recordingAtIndexPath:(id)arg1;
- (id)uuidAtIndexPath:(id)arg1;
- (BOOL)isDownloadingAtIndexPath:(id)arg1;
- (unsigned long long)indexOfUUID:(id)arg1;
- (unsigned long long)countOfRecentlyDeleted;
- (id)_indexPathOfRecordingWithUUID:(id)arg1;
- (id)recordingDataArray;
- (void)_commonInitWithDelegate:(id)arg1;
- (id)initWithUserFolderNamed:(id)arg1 delegate:(id)arg2;
- (id)initWithFolderType:(long long)arg1 delegate:(id)arg2;
- (id)initWithFolder:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

