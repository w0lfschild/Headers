//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSXPCConnection;

@interface DCDeviceMetadataDaemonConnection : NSObject
{
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxy:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy:(CDUnknownBlockType)arg1;
- (id)connection;
- (id)init;

@end

