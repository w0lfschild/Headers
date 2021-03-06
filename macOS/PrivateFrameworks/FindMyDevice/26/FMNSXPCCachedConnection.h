//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMNSXPCConnecting.h"

@class FMNSXPCConnection, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface FMNSXPCCachedConnection : NSObject <FMNSXPCConnecting>
{
    FMNSXPCConnection *_connection;
    CDUnknownBlockType _didInvalidate;
    CDUnknownBlockType _failureBlock;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType didInvalidate; // @synthesize didInvalidate=_didInvalidate;
@property(retain, nonatomic) FMNSXPCConnection *connection; // @synthesize connection=_connection;
- (void)_invalidate;
- (void)invalidate;
- (id)remoteObjectProxy;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (id)initWithFMNSXPCConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

