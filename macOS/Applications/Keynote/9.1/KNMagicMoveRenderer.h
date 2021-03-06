//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KNTransitionRenderer.h"

#import "CAAnimationDelegate.h"

@class NSDate, NSMapTable, NSMutableArray, NSOperationQueue, NSString, NSTimer, TSDFPSCounter;

@interface KNMagicMoveRenderer : KNTransitionRenderer <CAAnimationDelegate>
{
    NSMutableArray *_matches;
    NSMutableArray *_animatedLayersRetained;
    NSMutableArray *_layerToOldParentArray;
    NSMapTable *_layerToOldHiddenMap;
    NSMapTable *_layerToOldSublayerTransformMap;
    NSMutableArray *_morphMatches;
    NSDate *_lastMorphDate;
    TSDFPSCounter *_morphFPSCounter;
    double _morphFrameDurationAverage;
    NSTimer *_morphUpdateTimer;
    BOOL _isDone;
    NSOperationQueue *_morphOperationQueue;
    NSMutableArray *_morphLayerUpdates;
    double _animationStartTime;
    BOOL _hasOutgoingSlideBeenRendered;
}

+ (void)generateLayersForMatches:(id)arg1 oldHiddenValuesMap:(id)arg2;
+ (void)preGenerateLayersForMatches:(id)arg1 addToArray:(id)arg2;
+ (void)generateLayersForTexture:(id)arg1 inTextureSet:(id)arg2 isOutgoing:(BOOL)arg3 oldHiddenValuesMap:(id)arg4;
@property(nonatomic) BOOL hasOutgoingSlideBeenRendered; // @synthesize hasOutgoingSlideBeenRendered=_hasOutgoingSlideBeenRendered;
- (void)stopAnimations;
- (void)removeAnimationsAndFinish:(BOOL)arg1;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (BOOL)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(BOOL)arg2;
- (void)animate;
- (void)setupPluginContext;
- (void)generateTextures;
- (void)p_generateMagicMoveMatches;
- (void)renderSlideIndex:(unsigned long long)arg1;
- (void)p_restoreLayerHierarchy;
- (void)addLayersForSlideIndex:(unsigned long long)arg1;
- (void)p_updateMorphAnimationsForTime:(double)arg1;
- (void)p_updateMorphTexturesForTime:(double)arg1;
- (void)p_updateMorphLayerUpdates;
- (void)p_updateMorphAnimations;
- (void)p_cleanUpUpdateMorphAnimations;
- (void)teardown;
- (void)dealloc;
- (id)initWithEffectClass:(Class)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

