//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MKAllRouteETAsManager, NSError, _MKRouteETA;

@protocol MKAllRouteETAsManagerDelegate
- (void)allRouteETAsManager:(MKAllRouteETAsManager *)arg1 didFailETAForDirectionsType:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)allRouteETAsManager:(MKAllRouteETAsManager *)arg1 didUpdateETA:(_MKRouteETA *)arg2;
@end

