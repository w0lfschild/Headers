//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MuninPIPDataCoordinatorObserver-Protocol.h"

@class NSString;
@protocol MuninPIPDataCoordinator;

__attribute__((visibility("hidden")))
@interface MuninPIPAnalyticsController : NSObject <MuninPIPDataCoordinatorObserver>
{
    id <MuninPIPDataCoordinator> _dataCoordinator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MuninPIPDataCoordinator> dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
- (int)_targetForMuninPIPDataCoordinator:(id)arg1;
- (void)_captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3;
- (void)muninPIPDataCoordinatorDidEndPanningMapView:(id)arg1;
- (void)muninPIPDataCoordinatorDidEndRotatingMapView:(id)arg1;
- (void)muninPIPDataCoordinatorDidSelectMapItem:(id)arg1;
- (void)muninPIPDataCoordinatorDidDoubleTapZoomOutMapView:(id)arg1;
- (void)muninPIPDataCoordinatorDidDoubleTapZoomInMapView:(id)arg1;
- (void)muninPIPDataCoordinatorDidSingleFingerZoomOutMapView:(id)arg1;
- (void)muninPIPDataCoordinatorDidSingleFingerZoomInMapView:(id)arg1;
- (void)muninPIPDataCoordinatorDidPinchZoomOutMapView:(id)arg1;
- (void)muninPIPDataCoordinatorDidPinchZoomInMapView:(id)arg1;
- (void)muninPIPDataCoordinatorDidRotateMapView:(id)arg1;
- (void)muninPIPDataCoordinatorDidEnterMuninPIP:(id)arg1;
- (id)initWithDataCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

