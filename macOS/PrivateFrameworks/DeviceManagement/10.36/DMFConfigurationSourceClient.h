//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/DMFConfigurationSourceClientInterface-Protocol.h>
#import <DeviceManagement/NSXPCConnectionDelegate-Protocol.h>
#import <DeviceManagement/NSXPCListenerDelegate-Protocol.h>

@class CATOperationQueue, DMFConnection, DMFRegisterConfigurationSourceRequest, DMFStatusReportingRequirements, NSString, NSXPCConnection, NSXPCListener;
@protocol DMFConfigurationSourceClientDelegate, OS_dispatch_queue;

@interface DMFConfigurationSourceClient : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, DMFConfigurationSourceClientInterface>
{
    BOOL _invalid;
    id <DMFConfigurationSourceClientDelegate> _delegate;
    DMFStatusReportingRequirements *_statusReportingRequirements;
    DMFConnection *_connection;
    NSXPCListener *_listener;
    NSXPCConnection *_incomingConnection;
    DMFRegisterConfigurationSourceRequest *_registrationRequest;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CATOperationQueue *_operationQueue;
}

@property(retain, nonatomic) CATOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) DMFRegisterConfigurationSourceRequest *registrationRequest; // @synthesize registrationRequest=_registrationRequest;
@property(nonatomic, getter=isInvalid) BOOL invalid; // @synthesize invalid=_invalid;
@property(retain, nonatomic) NSXPCConnection *incomingConnection; // @synthesize incomingConnection=_incomingConnection;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) DMFConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) DMFStatusReportingRequirements *statusReportingRequirements; // @synthesize statusReportingRequirements=_statusReportingRequirements;
@property(nonatomic) __weak id <DMFConfigurationSourceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configurationEngineRequestedAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configurationStatusDidChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)probe:(CDUnknownBlockType)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)assetResolutionOperationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueueOperationToResolveAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)statusReportingOperationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueueOperationToReportStatusChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registrationOperationDidFinish:(id)arg1;
- (void)operationDidStart:(id)arg1;
- (void)registerConfigurationSource;
- (id)machService;
- (id)name;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)resume;
- (id)initWithConnection:(id)arg1 organizationIdentifier:(id)arg2 displayName:(id)arg3 localMachServiceName:(id)arg4;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

