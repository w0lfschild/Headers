//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

#import "CKDOperationInfoDelegate.h"

@class CKOperationResult, NSString;

__attribute__((visibility("hidden")))
@interface CKDProxyOperation : CKDOperation <CKDOperationInfoDelegate>
{
    BOOL _didHandleCancel;
    CDUnknownBlockType _operationProgressedBlock;
    CKOperationResult *_cachedResult;
}

@property(nonatomic) BOOL didHandleCancel; // @synthesize didHandleCancel=_didHandleCancel;
@property(retain, nonatomic) CKOperationResult *cachedResult; // @synthesize cachedResult=_cachedResult;
@property(copy, nonatomic) CDUnknownBlockType operationProgressedBlock; // @synthesize operationProgressedBlock=_operationProgressedBlock;
- (void).cxx_destruct;
- (id)operationResult;
- (void)_cancelOnCallbackQueueIfNecessary;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)operationWithID:(id)arg1 didComplete:(id)arg2;
- (void)operationWithID:(id)arg1 didProgress:(id)arg2;
- (void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;
- (void)main;
- (BOOL)isProxyOperation;
- (BOOL)shouldCheckAppVersion;
@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

