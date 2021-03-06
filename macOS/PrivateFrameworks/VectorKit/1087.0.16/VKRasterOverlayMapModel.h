//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/VKMapTileModel.h>

#import <VectorKit/VKMapLayer-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VKRasterOverlayMapModel : VKMapTileModel <VKMapLayer>
{
    NSMutableArray *_sortedTiles;
    unsigned long long _level;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _gglRenderState;
    struct unique_ptr<ggl::Mesh, std::__1::default_delete<ggl::Mesh>> _unitMesh;
    struct unique_ptr<ggl::ClearItem, std::__1::default_delete<ggl::ClearItem>> _clearItem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)reset;
- (void)dealloc;
- (id)initWithLevel:(unsigned long long)arg1;
- (BOOL)shouldLayoutWithoutStyleManager;
- (unsigned long long)mapLayerPosition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

