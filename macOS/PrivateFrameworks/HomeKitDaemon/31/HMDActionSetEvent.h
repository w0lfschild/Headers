//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import "HMDAWDLogEvent.h"

@class NSString, NSUUID;

@interface HMDActionSetEvent : HMDLogEvent <HMDAWDLogEvent>
{
    unsigned int _numAccessories;
    unsigned long long _triggerSource;
    NSUUID *_actionSetUUID;
    NSString *_bundleId;
    NSUUID *_transactionId;
}

+ (id)actionSetTriggered:(id)arg1 source:(unsigned long long)arg2 numAccessories:(unsigned int)arg3 bundleId:(id)arg4 transactionId:(id)arg5;
+ (id)uuid;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int numAccessories; // @synthesize numAccessories=_numAccessories;
@property(readonly, nonatomic) NSUUID *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) NSUUID *actionSetUUID; // @synthesize actionSetUUID=_actionSetUUID;
@property(readonly, nonatomic) unsigned long long triggerSource; // @synthesize triggerSource=_triggerSource;
- (id)initWithActionSet:(id)arg1 source:(unsigned long long)arg2 numAccessories:(unsigned int)arg3 bundleId:(id)arg4 transactionId:(id)arg5;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

