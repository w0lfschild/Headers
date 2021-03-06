//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>;

@interface AOSAgentConnection : NSObject
{
    BOOL _isDisconnected;
    NSObject<OS_xpc_object> *_connection;
}

+ (id)errorStringFromMessage:(id)arg1;
+ (id)resultFromMessage:(id)arg1;
+ (id)errorFromMessage:(id)arg1;
+ (void)initialize;
@property(nonatomic) BOOL isDisconnected; // @synthesize isDisconnected=_isDisconnected;
@property(nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void)sendMessageWithPayload:(id)arg1 replyHandler:(CDUnknownBlockType)arg2 isAsync:(BOOL)arg3;
- (BOOL)isConnected;
- (void)disconnect;
- (BOOL)connect;
- (void)dealloc;
- (id)init;

@end

