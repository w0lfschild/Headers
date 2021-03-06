//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import "PXMutablePinchTracker.h"

@class NSString, PXChangeDirectionNumberFilter, PXNumberFilter;

@interface PXPinchTracker : PXObservable <PXMutablePinchTracker>
{
    struct {
        char initialValues;
        char geometry;
    } _needsUpdateFlags;
    BOOL _didSetInitialValues;
    struct CGPoint _initialCenter;
    struct CGSize _initialSize;
    struct CGAffineTransform _initialTransform;
    struct CGAffineTransform _initialTransformInverse;
    struct CGPoint _initialPinchCenter;
    double _initialPinchDistance;
    double _initialPinchAngle;
    struct CGPoint _initialPinchOrigin;
    PXNumberFilter *_pinchRotationFilter;
    PXNumberFilter *_horizontalVelocityFilter;
    PXNumberFilter *_verticalVelocityFilter;
    PXNumberFilter *_scaleVelocityFilter;
    PXNumberFilter *_rotationalVelocityFilter;
    PXChangeDirectionNumberFilter *_scaleDirectionFilter;
    BOOL _shouldResize;
    double _time;
    double _scale;
    long long _scaleDirection;
    double _rotationHysteris;
    double _scaleHysteresis;
    struct CGPoint _pinchLocation1;
    struct CGPoint _pinchLocation2;
    struct CGPoint _center;
    struct CGSize _size;
    struct PXDisplayVelocity _velocity;
    struct CGAffineTransform _transform;
}

@property(readonly, nonatomic) BOOL shouldResize; // @synthesize shouldResize=_shouldResize;
@property(readonly, nonatomic) double scaleHysteresis; // @synthesize scaleHysteresis=_scaleHysteresis;
@property(readonly, nonatomic) double rotationHysteris; // @synthesize rotationHysteris=_rotationHysteris;
@property(nonatomic, setter=_setScaleDirection:) long long scaleDirection; // @synthesize scaleDirection=_scaleDirection;
@property(nonatomic, setter=_setScale:) double scale; // @synthesize scale=_scale;
@property(nonatomic, setter=_setVelocity:) struct PXDisplayVelocity velocity; // @synthesize velocity=_velocity;
@property(nonatomic, setter=_setTransform:) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic, setter=_setSize:) struct CGSize size; // @synthesize size=_size;
@property(nonatomic, setter=_setCenter:) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) struct CGPoint pinchLocation2; // @synthesize pinchLocation2=_pinchLocation2;
@property(nonatomic) struct CGPoint pinchLocation1; // @synthesize pinchLocation1=_pinchLocation1;
- (void).cxx_destruct;
- (void)_updateGeometryIfNeeded;
- (void)_invalidateGeometry;
- (void)_updateInitialValuesIfNeeded;
- (void)_invalidateInitialValues;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (BOOL)_needsUpdate;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_transformPinchLocation1:(struct CGPoint)arg1 location2:(struct CGPoint)arg2 intoCenter:(struct CGPoint *)arg3 distance:(double *)arg4 angle:(double *)arg5;
- (id)initWithCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2 transform:(struct CGAffineTransform)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

