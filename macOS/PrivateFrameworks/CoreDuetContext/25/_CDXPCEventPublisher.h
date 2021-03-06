//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSObject<OS_xpc_event_publisher>, NSString;

@interface _CDXPCEventPublisher : NSObject
{
    NSObject<OS_xpc_event_publisher> *_publisher;
    NSString *_streamName;
    id <_CDXPCEventPublisherDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
    NSMutableArray *_pendingSendEvents;
}

+ (id)eventPublisherWithStreamName:(const char *)arg1 delegate:(id)arg2 queue:(id)arg3 log:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingSendEvents; // @synthesize pendingSendEvents=_pendingSendEvents;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <_CDXPCEventPublisherDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
@property(retain, nonatomic) NSObject<OS_xpc_event_publisher> *publisher; // @synthesize publisher=_publisher;
- (void)removeToken:(unsigned long long)arg1;
- (void)addToken:(unsigned long long)arg1 descriptor:(id)arg2 userID:(unsigned int)arg3;
- (void)sendEvent:(id)arg1 toSubscriber:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)sendEvent:(id)arg1 toSubscriber:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)handleEventWithAction:(unsigned int)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3;
- (void)activatePublisherWithStreamName:(const char *)arg1;
- (id)initWithStreamName:(id)arg1 delegate:(id)arg2 queue:(id)arg3 log:(id)arg4;

@end

