//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOMapServiceTraits, GEORoutePreloader;

__attribute__((visibility("hidden")))
@interface RouteTileLoadingSession : NSObject
{
    GEORoutePreloader *_preloader;
    GEOComposedRoute *_route;
    GEOMapServiceTraits *_traits;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (void)_tilesFlushed;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 traits:(id)arg2;

@end

