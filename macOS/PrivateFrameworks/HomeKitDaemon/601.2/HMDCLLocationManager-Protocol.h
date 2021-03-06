//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class CLRegion, NSBundle, NSSet;
@protocol HMDCLLocationManagerDelegate;

@protocol HMDCLLocationManager <NSObject>
+ (BOOL)locationServicesEnabled;
+ (int)authorizationStatusForBundle:(NSBundle *)arg1;
@property(readonly, copy, nonatomic) NSSet *monitoredRegions;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) __weak id <HMDCLLocationManagerDelegate> delegate;
- (void)requestStateForRegion:(CLRegion *)arg1;
- (void)stopMonitoringForRegion:(CLRegion *)arg1;
- (void)startMonitoringForRegion:(CLRegion *)arg1;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)requestLocation;
- (void)requestWhenInUseAuthorization;
@end

