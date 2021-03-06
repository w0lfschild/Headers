//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDMetalEffect-Protocol.h"

@class NSString, TSDGPUDataBuffer, TSDMagicMoveAnimationMatch, TSDTexturedRectangle;

@interface TSDMorphEffect : NSObject <TSDMetalEffect>
{
    TSDGPUDataBuffer *_dataBuffer;
    BOOL _shouldDrawMotionBlur;
    struct CATransform3D _previousMVPMatrix;
    struct CGSize _velocityScale;
    double _opacity;
    TSDTexturedRectangle *_texture;
    TSDMagicMoveAnimationMatch *_match;
    struct CATransform3D _MVPMatrix;
}

- (void).cxx_destruct;
@property(nonatomic) struct CATransform3D MVPMatrix; // @synthesize MVPMatrix=_MVPMatrix;
@property(retain, nonatomic) TSDMagicMoveAnimationMatch *match; // @synthesize match=_match;
@property(retain, nonatomic) TSDTexturedRectangle *texture; // @synthesize texture=_texture;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
- (void)teardown;
- (void)setupEffectIfNecessary;
- (BOOL)shouldUpdateMVPMatrix;
- (void)renderEffectAtPercent:(double)arg1 withContext:(id)arg2;
- (void)setPreviousMVPMatrix:(struct CATransform3D)arg1 andVelocityScale:(struct CGSize)arg2;
- (id)initWithTexture:(id)arg1 andMatch:(id)arg2 metalContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

