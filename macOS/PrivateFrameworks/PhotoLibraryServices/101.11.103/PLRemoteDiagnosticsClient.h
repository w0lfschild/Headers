//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCConnection;

@interface PLRemoteDiagnosticsClient : NSObject <NSXPCListenerDelegate>
{
    NSXPCConnection *_connection;
}

+ (id)_connectionForListenerEndpoint:(id)arg1;
+ (id)diagnosticsAgentWithErrorHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

