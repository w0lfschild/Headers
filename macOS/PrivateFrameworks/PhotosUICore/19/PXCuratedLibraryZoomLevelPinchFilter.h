//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXChangeDirectionNumberFilter, PXInitialHysteresisNumberFilter;

@interface PXCuratedLibraryZoomLevelPinchFilter : NSObject
{
    BOOL _didHandleInitialPinch;
    PXInitialHysteresisNumberFilter *_initialDirectionFilter;
    PXChangeDirectionNumberFilter *_scaleDirectionFilter;
    double _lastDirection;
    BOOL _isTrackingPinch;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isTrackingPinch; // @synthesize isTrackingPinch=_isTrackingPinch;
- (void)reset;
- (void)filterPinchGestureWithScale:(double)arg1 initialPinchHandler:(CDUnknownBlockType)arg2 subsequentDirectionChangeHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

