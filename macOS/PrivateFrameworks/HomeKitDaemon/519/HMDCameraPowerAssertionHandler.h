//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface HMDCameraPowerAssertionHandler : HMFObject <HMFLogging>
{
    unsigned int _powerAssertion;
    NSMutableSet *_currentRequestHandlerSessionIDs;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
+ (id)sharedHandler;
@property(nonatomic) unsigned int powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableSet *currentRequestHandlerSessionIDs; // @synthesize currentRequestHandlerSessionIDs=_currentRequestHandlerSessionIDs;
- (void).cxx_destruct;
- (void)deregisterRemoteRequestHandler:(id)arg1;
- (void)registerRemoteRequestHandler:(id)arg1 forSessionID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

