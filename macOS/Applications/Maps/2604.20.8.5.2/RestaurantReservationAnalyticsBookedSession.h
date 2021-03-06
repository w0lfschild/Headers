//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RestaurantReservationAnalyticsBookedSession : NSObject
{
    BOOL _tappedChangeReservation;
    BOOL _bookedUsingMaps;
    BOOL _viewedInProactiveTray;
    BOOL _tappedProactiveTrayItem;
    BOOL _viewedInPlacecard;
    BOOL _viewedDetailsFromPlacecard;
    BOOL _hasAppsInstalled;
    BOOL _hasAppsEnabled;
    BOOL _sessionEnded;
    NSString *_sessionID;
    NSString *_appID;
    unsigned long long _muid;
}

+ (void)removeAnalyticsBookedSessionsFromProactiveTrayIfNotInListOfMuids:(id)arg1;
+ (void)removeAnalyticsBookedSession:(id)arg1;
+ (id)currentAnalyticsBookedSessionForMuid:(unsigned long long)arg1 createIfNotPresent:(BOOL)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL sessionEnded; // @synthesize sessionEnded=_sessionEnded;
@property(nonatomic) BOOL hasAppsEnabled; // @synthesize hasAppsEnabled=_hasAppsEnabled;
@property(nonatomic) BOOL hasAppsInstalled; // @synthesize hasAppsInstalled=_hasAppsInstalled;
@property(nonatomic) BOOL viewedDetailsFromPlacecard; // @synthesize viewedDetailsFromPlacecard=_viewedDetailsFromPlacecard;
@property(nonatomic) BOOL viewedInPlacecard; // @synthesize viewedInPlacecard=_viewedInPlacecard;
@property(nonatomic) BOOL tappedProactiveTrayItem; // @synthesize tappedProactiveTrayItem=_tappedProactiveTrayItem;
@property(nonatomic) BOOL viewedInProactiveTray; // @synthesize viewedInProactiveTray=_viewedInProactiveTray;
@property(nonatomic) BOOL bookedUsingMaps; // @synthesize bookedUsingMaps=_bookedUsingMaps;
@property(nonatomic) BOOL tappedChangeReservation; // @synthesize tappedChangeReservation=_tappedChangeReservation;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)endSession;
- (void)_captureSession;
- (void)_restartSession;
- (void)_mapsForegrounded;
- (void)_mapsBackgrounded;
- (id)description;
- (id)init;

@end

