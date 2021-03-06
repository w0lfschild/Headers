//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPContext, CDPStateController, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, SFSession;

@interface SFDeviceOperationCDPSetup : NSObject
{
    int _cdpApprovalServerState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    int _cdpSetupRequestState;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _metricSeconds;
    id _presentingViewController;
    SFSession *_sfSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SFSession *sfSession; // @synthesize sfSession=_sfSession;
@property(retain, nonatomic) id presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) double metricSeconds; // @synthesize metricSeconds=_metricSeconds;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (int)_runCDPSetupRequest;
- (int)_runCDPApprovalServerStart;
- (void)_run;
- (void)_complete:(id)arg1;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)init;

@end

