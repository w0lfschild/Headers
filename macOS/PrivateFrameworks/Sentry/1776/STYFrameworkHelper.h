//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_os_log>;

@interface STYFrameworkHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_sharedSerialQueueAtUtility;
    NSObject<OS_dispatch_queue> *_sharedConcurrentQueueAtUtility;
    NSObject<OS_dispatch_queue> *_sharedConcurrentQueueAtBackground;
    NSObject<OS_os_log> *_logHandle;
}

+ (id)sharedHelper;
- (void).cxx_destruct;
@property(retain) NSObject<OS_os_log> *logHandle; // @synthesize logHandle=_logHandle;
@property(retain) NSObject<OS_dispatch_queue> *sharedConcurrentQueueAtBackground; // @synthesize sharedConcurrentQueueAtBackground=_sharedConcurrentQueueAtBackground;
@property(retain) NSObject<OS_dispatch_queue> *sharedConcurrentQueueAtUtility; // @synthesize sharedConcurrentQueueAtUtility=_sharedConcurrentQueueAtUtility;
@property(retain) NSObject<OS_dispatch_queue> *sharedSerialQueueAtUtility; // @synthesize sharedSerialQueueAtUtility=_sharedSerialQueueAtUtility;
- (id)subsystemForSignposts;

@end

