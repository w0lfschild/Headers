//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Navigation/MNGuidanceManager.h>

@interface MNWalkGuidanceManager : MNGuidanceManager
{
}

- (int)transportType;
- (void)updateGuidanceForProceedToRouteAtLocation:(CDStruct_2c43369c)arg1 routeMatch:(id)arg2 remainingTime:(double)arg3 distanceUntilDestination:(double)arg4;
- (BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2;
- (void)_updatePrepareForNextStep;
- (id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2;
- (double)_adjustedVehicleSpeed:(id)arg1;

@end

