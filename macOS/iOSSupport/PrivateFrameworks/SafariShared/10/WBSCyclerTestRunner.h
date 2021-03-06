//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol WBSCyclerTestSuite, WBSCyclerTestTarget;

@interface WBSCyclerTestRunner : NSObject
{
    BOOL _stopRequested;
    NSMutableArray *_pendingRequestQueue;
    NSMutableArray *_pendingRequestCompletionHandlerQueue;
    BOOL _running;
    id <WBSCyclerTestSuite> _testSuite;
    id <WBSCyclerTestTarget> _target;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property(readonly, nonatomic) id <WBSCyclerTestTarget> target; // @synthesize target=_target;
@property(readonly, nonatomic) id <WBSCyclerTestSuite> testSuite; // @synthesize testSuite=_testSuite;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_handleNextPendingRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performNextIterationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_stop;
- (void)handleRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestStop;
- (void)runWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithTestSuite:(id)arg1 target:(id)arg2;
- (id)init;

@end

