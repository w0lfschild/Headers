//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITIdleTimerStateRequestHandling.h"

@class NSMutableSet, NSString;

@interface ITIdleTimerIOKitHandler : NSObject <ITIdleTimerStateRequestHandling>
{
    NSMutableSet *_assertionReasons;
    unsigned int _assertionID;
    struct os_unfair_lock_s _accessLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int assertionID; // @synthesize assertionID=_assertionID;
- (void)removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2;
- (void)addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2;
- (BOOL)isIdleTimerServiceAvailable;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

