//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSApplication/TMAZoomStepper.h>

@class KNMacLightTableViewController;

@interface KNMacLightTableZoomStepper : TMAZoomStepper
{
    KNMacLightTableViewController *_lightTableViewController;
}

+ (id)keyPathsForValuesAffectingZoomValue;
- (void).cxx_destruct;
@property(nonatomic) __weak KNMacLightTableViewController *lightTableViewController; // @synthesize lightTableViewController=_lightTableViewController;
- (void)zoomToActualSize;
- (BOOL)canZoomToActualSize;
- (double)zoomValue;
- (void)setZoomValue:(double)arg1 animated:(BOOL)arg2;

@end

