//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProactiveML/PMLAWDBaseTracker.h>

@class AWDServerConnection;
@protocol PMLAWDMetricQueryDelegate;

@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker
{
    id <PMLAWDMetricQueryDelegate> _delegate;
    AWDServerConnection *_awdServerConnection;
}

- (void).cxx_destruct;
- (void)reportStatsToAWD;
- (void)setAWDMetricQueryDelegate:(id)arg1;
- (id)initWithAWDConnection:(id)arg1;
- (id)init;

@end

