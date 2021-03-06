//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMXPCServiceDescription, FMXPCSession, NSObject<OS_dispatch_queue>;

@interface SPPairingManager : NSObject
{
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    FMXPCServiceDescription *_userAgentServiceDescription;
    FMXPCSession *_userAgentSession;
    id <SPPairingManagerXPCProtocol> _proxy;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SPPairingManagerXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *userAgentSession; // @synthesize userAgentSession=_userAgentSession;
@property(retain, nonatomic) FMXPCServiceDescription *userAgentServiceDescription; // @synthesize userAgentServiceDescription=_userAgentServiceDescription;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
- (void)alwaysBeaconStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAlwaysBeaconState:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)currentBeaconingKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)getLocalPairingDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)remoteInterface;
- (id)userAgentProxy;
- (void)dealloc;
- (id)init;

@end

