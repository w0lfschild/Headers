//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSXPCConnection;

@interface ASDStoreKitServiceBroker : NSObject
{
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)_storeKitServiceInterface;
+ (id)_storeKitClientInterface;
+ (id)defaultBroker;
- (void).cxx_destruct;
- (void)_serviceConnectionInvalidated;
- (id)_serviceConnection;
- (id)storeKitSynchronousService;
- (id)storeKitSynchronousServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)storeKitService;
- (id)storeKitServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

