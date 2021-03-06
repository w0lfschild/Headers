//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class GEORequestCounter, GeoRequestCounterDurations, NSArray, NSDateIntervalFormatter, NSDictionary, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface GeoRequestCounterTableViewController : UITableViewController
{
    NSDictionary *_appRequestDict;
    NSArray *_requestLogs;
    NSArray *_analyticsHandlingInfos;
    NSArray *_routePreloadSessions;
    NSDateIntervalFormatter *_dateIntervalFormatter;
    GeoRequestCounterDurations *_durations;
    long long _currentDuration;
    BOOL _isLoggingEnabled;
    GEORequestCounter *_reqCounter;
    NSOrderedSet *_appRequestOrderedKeys;
    NSOrderedSet *_trafficProbeOrderedKeys;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOrderedSet *trafficProbeOrderedKeys; // @synthesize trafficProbeOrderedKeys=_trafficProbeOrderedKeys;
@property(retain, nonatomic) NSOrderedSet *appRequestOrderedKeys; // @synthesize appRequestOrderedKeys=_appRequestOrderedKeys;
@property(retain, nonatomic) GEORequestCounter *reqCounter; // @synthesize reqCounter=_reqCounter;
@property(nonatomic) BOOL isLoggingEnabled; // @synthesize isLoggingEnabled=_isLoggingEnabled;
@property(copy, nonatomic) NSArray *routePreloadSessions; // @synthesize routePreloadSessions=_routePreloadSessions;
- (id)fileNameForFormat:(unsigned long long)arg1;
- (id)getRecvBytesForAllApps;
- (id)getXmitBytesForAllApps;
- (long long)getTotalRequestCountForAllApps;
- (long long)getTotalRequestCountFor:(id)arg1;
- (void)_reloadData;
- (void)_resetLogs;
- (void)_toggleLogging;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestLogs:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSArray *analyticsHandlingInfos;
@property(retain, nonatomic) NSDictionary *appRequestDict;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

