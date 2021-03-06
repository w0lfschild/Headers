//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRURLRoutable-Protocol.h"

@class NSString, TSBridgedNewsActivityNavigator;
@protocol FRActivityErrorHandler, FRFeldsparContext, NFResolver;

@interface FRDeeplinkRouter : NSObject <FRURLRoutable>
{
    TSBridgedNewsActivityNavigator *_navigator;
    id <FRActivityErrorHandler> _activityErrorHandler;
    id <FRFeldsparContext> _feldsparContext;
    id <NFResolver> _resolver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NFResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(readonly, nonatomic) id <FRActivityErrorHandler> activityErrorHandler; // @synthesize activityErrorHandler=_activityErrorHandler;
@property(readonly, nonatomic) TSBridgedNewsActivityNavigator *navigator; // @synthesize navigator=_navigator;
- (void)handleSubscriptionURL:(id)arg1 fromReferral:(id)arg2;
- (BOOL)handleURL:(id)arg1 fromReferral:(id)arg2;
- (BOOL)handleOpenURL:(id)arg1 options:(id)arg2 analyticsReferral:(id)arg3;
- (BOOL)continueUserActivity:(id)arg1 withAnalyticsReferral:(id)arg2;
- (BOOL)canContinueUserActivityWithType:(id)arg1;
- (id)initWithFeldsparContext:(id)arg1 resolver:(id)arg2 navigator:(id)arg3 activityErrorHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

