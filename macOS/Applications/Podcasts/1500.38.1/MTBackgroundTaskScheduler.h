//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MTBackgroundTaskScheduler : NSObject
{
    unsigned long long _backgroundTaskId;
    NSObject<OS_dispatch_queue> *_bgSchedulerQueue;
}

+ (void)registerBackgroundTaskClass:(Class)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bgSchedulerQueue; // @synthesize bgSchedulerQueue=_bgSchedulerQueue;
@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
- (void)rescheduleTasksWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rescheduleTasksIfNotScheduledWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_takeAssertionAndSchedule;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)registerLaunchHandlers;
- (id)init;

@end

