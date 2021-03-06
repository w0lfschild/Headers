//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBProcessState, FBProcessWatchdogEventContext, FBSProcessTerminationRequest, NSString;

@interface FBApplicationProcessExitContext : NSObject <BSDescriptionProviding>
{
    FBProcessState *_stateBeforeExiting;
    unsigned long long _exitReason;
    long long _terminationReason;
    FBSProcessTerminationRequest *_terminationRequest;
    FBProcessWatchdogEventContext *_watchdogContext;
}

+ (id)descriptionForExitReason:(unsigned long long)arg1;
@property(retain, nonatomic) FBProcessWatchdogEventContext *watchdogContext; // @synthesize watchdogContext=_watchdogContext;
@property(retain, nonatomic) FBSProcessTerminationRequest *terminationRequest; // @synthesize terminationRequest=_terminationRequest;
@property(copy, nonatomic) FBProcessState *stateBeforeExiting; // @synthesize stateBeforeExiting=_stateBeforeExiting;
@property(readonly, nonatomic) long long terminationReason; // @synthesize terminationReason=_terminationReason;
@property(readonly, nonatomic) unsigned long long exitReason; // @synthesize exitReason=_exitReason;
- (void).cxx_destruct;
- (BOOL)fairPlayFailure;
- (BOOL)consideredJetsam;
@property(readonly, nonatomic) int terminationSignal;
@property(readonly, nonatomic) int exitCode;
@property(readonly, nonatomic) BOOL exitedNormally;
@property(readonly, nonatomic) long long exitStatus;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithExitReason:(unsigned long long)arg1 terminationReason:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

