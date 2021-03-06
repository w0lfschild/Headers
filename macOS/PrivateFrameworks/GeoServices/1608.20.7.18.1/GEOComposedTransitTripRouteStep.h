//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOComposedTransitTripRouteLeg, GEOTransitVehicleInfo, NSArray, NSDate, NSTimeZone;
@protocol GEOTransitLine, GEOTransitSystem;

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep
{
    NSArray *_arrivalTimesAtOrigin;
    NSArray *_departureTimes;
    NSArray *_arrivalTimes;
    double _departureTimeIntervalMin;
    double _departureTimeIntervalMax;
    GEOTransitVehicleInfo *_transitVehicle;
    id <GEOTransitLine> _transitLine;
    id <GEOTransitSystem> _transitSystem;
    NSArray *_routeLineArtwork;
    BOOL _isRail;
    BOOL _isBus;
    BOOL _canPreloadTiles;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isBus; // @synthesize isBus=_isBus;
@property(readonly, nonatomic) BOOL isRail; // @synthesize isRail=_isRail;
@property(readonly, nonatomic) NSArray *routeLineArtwork; // @synthesize routeLineArtwork=_routeLineArtwork;
@property(readonly, nonatomic) id <GEOTransitSystem> transitSystem; // @synthesize transitSystem=_transitSystem;
@property(readonly, nonatomic) id <GEOTransitLine> transitLine; // @synthesize transitLine=_transitLine;
@property(readonly, nonatomic) GEOTransitVehicleInfo *transitVehicle; // @synthesize transitVehicle=_transitVehicle;
@property(readonly, nonatomic) double departureTimeIntervalMax; // @synthesize departureTimeIntervalMax=_departureTimeIntervalMax;
@property(readonly, nonatomic) double departureTimeIntervalMin; // @synthesize departureTimeIntervalMin=_departureTimeIntervalMin;
@property(readonly, nonatomic) NSArray *arrivalTimes; // @synthesize arrivalTimes=_arrivalTimes;
@property(readonly, nonatomic) NSArray *departureTimes; // @synthesize departureTimes=_departureTimes;
@property(readonly, nonatomic) NSArray *arrivalTimesAtOrigin; // @synthesize arrivalTimesAtOrigin=_arrivalTimesAtOrigin;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) BOOL canPreloadTilesForThisStep;
- (unsigned int)duration;
- (BOOL)hasDuration;
@property(readonly, nonatomic) NSDate *arrivalTime;
@property(readonly, nonatomic) NSDate *departureTime;
@property(readonly, nonatomic) NSDate *arrivalTimeAtOrigin;
@property(readonly, nonatomic) NSTimeZone *arrivalTimeZone;
@property(readonly, nonatomic) NSTimeZone *departureTimeZone;
@property(readonly, nonatomic) GEOComposedTransitTripRouteLeg *tripLeg;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange)arg4 line:(id)arg5 maneuverType:(int)arg6 significance:(int)arg7;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange)arg6;

@end

