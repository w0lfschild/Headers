//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UserLocationView.h"

__attribute__((visibility("hidden")))
@interface MapsUserLocationView : UserLocationView
{
    BOOL _isOnAnotherFloorInVenue;
}

@property(nonatomic, setter=_setIsOnAnotherFloorInVenue:) BOOL isOnAnotherFloorInVenue; // @synthesize isOnAnotherFloorInVenue=_isOnAnotherFloorInVenue;
- (struct CGPoint)_bottomCalloutOffset;
- (unsigned long long)_allowedCalloutEdges;
- (BOOL)_shouldKeepCalloutVisible;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

