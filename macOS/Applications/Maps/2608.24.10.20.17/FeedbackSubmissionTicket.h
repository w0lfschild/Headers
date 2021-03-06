//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKMapServiceFeedbackReportTicket-Protocol.h"

@class GEOMapServiceTraits, NSProgress, NSString;
@protocol MKMapServiceFeedbackReportTicket;

__attribute__((visibility("hidden")))
@interface FeedbackSubmissionTicket : NSObject <MKMapServiceFeedbackReportTicket>
{
    id <MKMapServiceFeedbackReportTicket> _ticket;
    NSProgress *_fakeProgress;
}

+ (id)ticketForFeedbackRequestParameters:(id)arg1 mapItem:(id)arg2 traits:(id)arg3;
+ (id)ticketForFeedbackRequest:(id)arg1 traits:(id)arg2;
+ (id)ticketForFeedbackRequest:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSProgress *fakeProgress; // @synthesize fakeProgress=_fakeProgress;
- (void)_performLogDiscardWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitWithCallbackQueue:(id)arg1 handler:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)cancel;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (id)initWithMapServiceTicket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

