//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RunningBoard/RBPowerAssertion.h>

@class RBProcess, RBProcessState;

__attribute__((visibility("hidden")))
@interface RBProcessPowerAssertion : RBPowerAssertion
{
    RBProcessState *_state;
    RBProcess *_process;
}

@property(copy, nonatomic) RBProcessState *state; // @synthesize state=_state;
@property(readonly, nonatomic) RBProcess *process; // @synthesize process=_process;
- (void).cxx_destruct;
- (int)_targetPid;
- (id)_preventIdleSleepIdentifiers;
- (id)initWithProcess:(id)arg1;

@end

