//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorageImplementation-Protocol.h>

@class CPLResource, NSArray, NSString;
@protocol NSFastEnumeration;

@protocol CPLEngineResourceDownloadQueueImplementation <CPLEngineStorageImplementation>
- (BOOL)hasActiveOrQueuedBackgroundDownloadOperations;
- (unsigned long long)countOfQueuedDownloadTasks;
- (id <NSFastEnumeration>)enumeratorForDownloadedResources;
- (BOOL)removeAllBackgroundDownloadTasksForItemWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (BOOL)resetWithError:(id *)arg1;
- (BOOL)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;
- (NSArray *)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)removeBackgroundDownloadTaskForResource:(CPLResource *)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)markBackgroundDownloadTaskForResourceAsSuceeded:(CPLResource *)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)reenqueueBackgroundDownloadTaskForResource:(CPLResource *)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(BOOL)arg3 didDiscard:(char *)arg4 error:(id *)arg5;
- (BOOL)enqueueBackgroundDownloadTaskForResource:(CPLResource *)arg1 downloading:(BOOL)arg2 error:(id *)arg3;
- (unsigned long long)newTaskIdentifier;
@end

