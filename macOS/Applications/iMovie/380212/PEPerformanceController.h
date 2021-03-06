//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LKMenuItem, LKTextField, LKWindow, NSDate, NSString;

@interface PEPerformanceController : NSObject
{
    LKMenuItem *pmr_performanceMenuItem;
    LKWindow *perfMonitorWindow;
    LKTextField *vRAMUsage;
    LKTextField *rRAMUsage;
    LKTextField *totalRAMInstalled;
    LKTextField *processorInfo;
    BOOL pmr_dumpAllEventTimes;
    NSString *pmr_eventDescription;
    int pmr_watcherState;
    NSDate *pmr_watcherStartTime;
    BOOL prm_simulatingClick;
    BOOL pmr_clickHorizontal;
}

+ (id)sharedPerformanceController;
+ (BOOL)performanceMonitoringEnabled;
- (BOOL)dumpAllEventTimes;
- (void)_drawingWatcherFirstDrawing:(id)arg1;
- (void)_drawingWatcherNoMoreDrawing:(id)arg1;
- (void)_drawingWatcherBeginWatching;
- (void)_drawingWatcherBeginWatchingNow;
- (void)launchLoggerHead:(id)arg1;
- (void)showPerformanceHUD:(id)arg1;
- (void)gatherRAMStatistics:(id)arg1;
- (void)performance_timeAnActivity:(id)arg1;
- (void)performance_recordDropFrames:(id)arg1;
- (void)performance_recordRAMUsage:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)logItemKey:(id)arg1 value:(id)arg2;
- (void)logItemKey:(id)arg1 doubleValue:(double)arg2;
- (void)logItemKey:(id)arg1 SInt64Value:(long long)arg2;
- (void *)PMRinstrument;
- (void)_setCurrentEventDescription:(id)arg1;
- (void)timeEvent:(id)arg1;
- (void)disablePerformanceMenu;
- (void)installPerformanceMenu;
- (void)dealloc;
- (id)init;

@end

