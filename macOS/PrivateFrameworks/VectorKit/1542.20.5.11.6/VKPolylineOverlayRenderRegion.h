//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKPolylineOverlayRenderRegion : NSObject
{
    set_8caf8a88 _routeLineDatas;
    Box_3d7e3c2c _visibleRect;
    struct vector<geo::MercatorTile, std::__1::allocator<geo::MercatorTile>> _snappedTileKeys;
    struct MultiRectRegion _snappingRegion;
}

@property(readonly, nonatomic) Box_3d7e3c2c visibleRect; // @synthesize visibleRect=_visibleRect;
@property(readonly, nonatomic) const set_8caf8a88 *routeLineDatas; // @synthesize routeLineDatas=_routeLineDatas;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEquivalentToNewRegion:(id)arg1;
- (const struct MultiRectRegion *)snappingRegion;
- (id)initForKeysInView:(const unordered_set_1129f115 *)arg1 layerDatas:(const set_e712f9e3 *)arg2 allowsSnapping:(BOOL)arg3;

@end

