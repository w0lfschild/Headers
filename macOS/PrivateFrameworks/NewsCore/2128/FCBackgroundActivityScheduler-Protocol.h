//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol FCBackgroundActivityScheduler <NSObject>
- (void)requestBackgroundAppRefreshStartingAfter:(NSDate *)arg1 before:(NSDate *)arg2;
- (void)cancelRepeatingTaskWithIdentifier:(NSString *)arg1;
- (void)scheduleBackgroundTaskRepeatingAtInterval:(double)arg1 identifier:(NSString *)arg2 task:(void (^)(void (^)(long long), BOOL (^)(void)))arg3;
@end

