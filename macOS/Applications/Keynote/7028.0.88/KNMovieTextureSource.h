//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDMetalRenderer-Protocol.h"
#import "TSDMetalRendererDirectTextureSource-Protocol.h"

@class KNAnimationSubtitleController, NSString, TSDGPUDataBuffer, TSDMetalRenderTarget, TSDMetalShader, TSDTextureSet, TSDTexturedRectangle;
@protocol MTLSamplerState, MTLTexture, TSDMetalRendererDirectTextureSource;

@interface KNMovieTextureSource : NSObject <TSDMetalRenderer, TSDMetalRendererDirectTextureSource>
{
    id <TSDMetalRendererDirectTextureSource> _videoTextureSource;
    KNAnimationSubtitleController *_subtitleController;
    TSDTextureSet *_unflattenedTextureSet;
    TSDMetalShader *_textureShader;
    TSDMetalShader *_maskingShader;
    id <MTLSamplerState> _clampToEdgeSampler;
    struct CATransform3D _videoTransform;
    struct CATransform3D _styledVideoTransform;
    struct CATransform3D _strokeTransform;
    struct CATransform3D _shadowTransform;
    struct CGAffineTransform _frameMaskTextureTransform;
    struct CATransform3D _reflectionTransform;
    struct CATransform3D _reflectedStyledVideoTransform;
    TSDTexturedRectangle *_strokeTexture;
    TSDTexturedRectangle *_shadowTexture;
    TSDTexturedRectangle *_frameMaskTexture;
    TSDTexturedRectangle *_reflectionMaskTexture;
    TSDGPUDataBuffer *_videoQuad;
    TSDGPUDataBuffer *_strokeQuad;
    TSDGPUDataBuffer *_shadowQuad;
    TSDGPUDataBuffer *_reflectionQuad;
    TSDMetalRenderTarget *_reflectionRenderTarget;
    double _shadowOpacity;
    double _reflectionOpacity;
    double _bakingScale;
    struct CGRect _originalFrame;
    struct CGRect _drawingFrame;
    struct CATransform3D _projection;
    id <MTLTexture> _subtitleTexture;
    struct CGSize _videoSize;
    BOOL _requiresOffscreenPass;
    long long _lastRenderedVideoTextureToken;
    double _bakedAngle;
}

+ (struct CGRect)boundingRectForTextureSet:(id)arg1;
+ (struct CGAffineTransform)p_affineRotationForLayer:(id)arg1 angle:(double)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) double bakedAngle; // @synthesize bakedAngle=_bakedAngle;
@property(readonly, nonatomic) KNAnimationSubtitleController *subtitleController; // @synthesize subtitleController=_subtitleController;
@property(readonly, nonatomic) id <TSDMetalRendererDirectTextureSource> videoTextureSource; // @synthesize videoTextureSource=_videoTextureSource;
- (struct CATransform3D)p_transformForLayer:(id)arg1 angle:(double)arg2 relativeToFrame:(struct CGRect)arg3;
- (struct CATransform3D)p_translationTransformForLayer:(id)arg1 relativeToFrame:(struct CGRect)arg2;
- (struct CATransform3D)p_rotationTransformForLayer:(id)arg1 angle:(double)arg2;
- (struct CATransform3D)p_translationTransformForRect:(struct CGRect)arg1 relativeToFrame:(struct CGRect)arg2;
- (struct CGPoint)p_orthoOffsetForRect:(struct CGRect)arg1 relativeToFrame:(struct CGRect)arg2;
- (void)p_drawStyledVideoWithMetalContext:(id)arg1 projection:(struct CATransform3D)arg2;
- (void)renderWithContext:(id)arg1;
- (BOOL)hasNewRenderingForTimingInfo:(CDStruct_39925896)arg1;
- (id)currentDirectTextureWithRenderingContext:(id)arg1;
- (void)updateCurrentDirectTextureWithUpdateContext:(id)arg1;
- (BOOL)hasNewDirectTextureForTimingInfo:(CDStruct_39925896)arg1;
@property(readonly, nonatomic) long long currentDirectTextureToken;
- (BOOL)canProvideDirectTextureForTimingInfo:(CDStruct_39925896)arg1;
- (void)p_setupWithTextureSet:(id)arg1 viewScale:(double)arg2 metalEnvironment:(id)arg3 pixelFormat:(unsigned long long)arg4;
- (id)p_movieTextureDescriptionForSession:(id)arg1;
- (void)dealloc;
- (id)initWithVideoTextureSource:(id)arg1 subtitleController:(id)arg2 forTextureSet:(id)arg3 session:(id)arg4 bakedAngle:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

