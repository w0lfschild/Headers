//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRunLoop, NSThread, NSTimer;

@interface SPTInternalSystemLoadMeasurerMacImpl : NSObject
{
    duration_673274cf _currentMainThreadLatency;
    duration_673274cf _currentCoreThreadLatency;
    shared_ptr_8f5bfb0f _previousProcessInfosSample;
    shared_ptr_8f5bfb0f _currentProcessInfosSample;
    shared_ptr_25c5fef7 _previousRuntimeUsageInfo;
    shared_ptr_25c5fef7 _currentRuntimeUsageInfo;
    double _currentCPULoadForAllSpotifyProcesses;
    double _currentCPULoadEntireSystem;
    duration_673274cf _lastProcessInfoCollectionDeltaTime;
    CDUnknownBlockType _callback;
    BOOL _loadMeasurementEnabled;
    shared_ptr_37b9480f _manager;
    NSRunLoop *_cpuLoadMonitorRunLoop;
    BOOL _shouldStopCPULoadMonitorThread;
    NSThread *_cpuLoadMonitorThread;
    NSTimer *_check_cpu_load_timer;
    struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> _lastProcessInfoCollectionTime;
    unsigned long long _mainThreadLatencyMeasurerSequenceNumber;
    unsigned long long _coreThreadLatencyMeasurerSequenceNumber;
    unsigned long long _lastReportedMainThreadLatencyMeasurerSequenceNumber;
    unsigned long long _lastReportedCoreThreadLatencyMeasurerSequenceNumber;
    BOOL _isCurrentlyLoggingHighCPUUsage;
    BOOL _deviceInfoLoggingEnabled;
    BOOL _videoDeviceInfoLoggingEnabled;
}

@property duration_673274cf lastProcessInfoCollectionDeltaTime; // @synthesize lastProcessInfoCollectionDeltaTime=_lastProcessInfoCollectionDeltaTime;
@property double currentCPULoadEntireSystem; // @synthesize currentCPULoadEntireSystem=_currentCPULoadEntireSystem;
@property double currentCPULoadForAllSpotifyProcesses; // @synthesize currentCPULoadForAllSpotifyProcesses=_currentCPULoadForAllSpotifyProcesses;
@property shared_ptr_25c5fef7 currentRuntimeUsageInfo; // @synthesize currentRuntimeUsageInfo=_currentRuntimeUsageInfo;
@property shared_ptr_25c5fef7 previousRuntimeUsageInfo; // @synthesize previousRuntimeUsageInfo=_previousRuntimeUsageInfo;
@property shared_ptr_8f5bfb0f currentProcessInfosSample; // @synthesize currentProcessInfosSample=_currentProcessInfosSample;
@property shared_ptr_8f5bfb0f previousProcessInfosSample; // @synthesize previousProcessInfosSample=_previousProcessInfosSample;
@property duration_673274cf currentCoreThreadLatency; // @synthesize currentCoreThreadLatency=_currentCoreThreadLatency;
@property duration_673274cf currentMainThreadLatency; // @synthesize currentMainThreadLatency=_currentMainThreadLatency;
@property shared_ptr_37b9480f manager; // @synthesize manager=_manager;
@property BOOL videoDeviceInfoLoggingEnabled; // @synthesize videoDeviceInfoLoggingEnabled=_videoDeviceInfoLoggingEnabled;
@property BOOL deviceInfoLoggingEnabled; // @synthesize deviceInfoLoggingEnabled=_deviceInfoLoggingEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getCurrentCPULoadForMainProcess:(double *)arg1 andRendererProcess:(double *)arg2;
- (void)updateCPULoad;
- (void)checkCoreThreadHealthOnBackgroundThread;
- (void)checkMainThreadHealthOnBackgroundThread;
- (void)checkCPULoadOnBackgroundThread;
- (void)doBackgroundChecks;
- (void)cpuLoadMonitorThread:(id)arg1;
- (void)reinstallCPULoadTimer;
@property(readonly) int rendererProcessPID;
@property(readonly) int mainProcessPID;
@property BOOL loadMeasurementEnabled;
- (void)dealloc;
- (id)initWithWrapper:(struct InternalSystemLoadMeasurerMac *)arg1 andCallback:(CDUnknownBlockType)arg2;

@end

