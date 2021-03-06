//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionComponentInteractionHandlerFactory-Protocol.h>

@class NSString;
@protocol SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;

@interface SXActionComponentInteractionHandlerFactory : NSObject <SXActionComponentInteractionHandlerFactory>
{
    id <SXActionManager> _actionManager;
    id <SXActionSerializer> _actionSerializer;
    id <SXAnalyticsReportingProvider> _analyticsReportingProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXAnalyticsReportingProvider> analyticsReportingProvider; // @synthesize analyticsReportingProvider=_analyticsReportingProvider;
@property(readonly, nonatomic) id <SXActionSerializer> actionSerializer; // @synthesize actionSerializer=_actionSerializer;
@property(readonly, nonatomic) id <SXActionManager> actionManager; // @synthesize actionManager=_actionManager;
- (id)interactionHandlerForAction:(id)arg1;
- (id)initWithActionManager:(id)arg1 actionSerializer:(id)arg2 analyticsReportingProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

