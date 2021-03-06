//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PHProjectTypeDescriptionSourceXPCClient-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSOperationQueue, NSString, NSXPCConnection;
@protocol PHProjectTypeDescriptionSourceXPCService;

@interface PHProjectTypeDescriptionSourceClient : NSObject <PHProjectTypeDescriptionSourceXPCClient>
{
    NSXPCConnection *_connection;
    id <PHProjectTypeDescriptionSourceXPCService> _service;
    NSHashTable *_invalidationObservers;
    NSOperationQueue *_observerQueue;
    NSMutableDictionary *_projectTypeDescriptionInvalidationDates;
}

@property(readonly, nonatomic) NSMutableDictionary *projectTypeDescriptionInvalidationDates; // @synthesize projectTypeDescriptionInvalidationDates=_projectTypeDescriptionInvalidationDates;
@property(readonly, nonatomic) NSOperationQueue *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(readonly, nonatomic) NSHashTable *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(retain, nonatomic) id <PHProjectTypeDescriptionSourceXPCService> service; // @synthesize service=_service;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)invalidateFooterTextForSubtypesOfProjectType:(id)arg1;
- (void)invalidateTypeDescriptionForProjectType:(id)arg1;
@property(copy) CDUnknownBlockType interruptionHandler;
- (void)invalidateConnection;
- (BOOL)isProjectTypeDescriptionOutdated:(id)arg1;
- (void)removeInvalidationObserver:(id)arg1;
- (void)addInvalidationObserver:(id)arg1;
- (void)requestFooterTextForProjectTypeLevel:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestTypeDescriptionForProjectType:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSubtypesForProjectType:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)serviceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithListenerEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

