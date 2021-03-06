//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MKMapView, NSTextField;
@protocol MKAnnotation, MKOverlay, TTRMRadialMapControllerDelegate;

@interface MapDragRadiusView : NSView
{
    BOOL animating;
    NSView *_handleImageView;
    id <MKAnnotation> annotation;
    id <MKOverlay> circleOverlay;
    id <MKOverlay> dashOverlay;
    MKMapView *mapView;
    id <TTRMRadialMapControllerDelegate> delegate;
    long long proximity;
    double radius;
    double _metersPerPixel;
    NSTextField *_text;
    struct CGPoint center;
}

- (void).cxx_destruct;
@property BOOL animating; // @synthesize animating;
@property(retain) NSTextField *text; // @synthesize text=_text;
@property(nonatomic) double metersPerPixel; // @synthesize metersPerPixel=_metersPerPixel;
@property struct CGPoint center; // @synthesize center;
@property(nonatomic) double radius; // @synthesize radius;
@property long long proximity; // @synthesize proximity;
@property(retain) id <TTRMRadialMapControllerDelegate> delegate; // @synthesize delegate;
@property(retain) MKMapView *mapView; // @synthesize mapView;
@property(retain) id <MKOverlay> dashOverlay; // @synthesize dashOverlay;
@property(retain) id <MKOverlay> circleOverlay; // @synthesize circleOverlay;
@property(retain) id <MKAnnotation> annotation; // @synthesize annotation;
@property(retain) NSView *handleImageView; // @synthesize handleImageView=_handleImageView;
- (BOOL)ttrmAccessibilityUpdateWithRadius:(double)arg1;
- (double)ttrmAccessibilityRadiusIncrement;
- (double)ttrmAccessibilityRadiusByAdding:(double)arg1;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformIncrement;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (BOOL)usesMetric;
- (void)recalcMetersPerPixel;
- (void)updateRadius:(double)arg1 finished:(BOOL)arg2;
- (void)resizeCircleDragEnded:(BOOL)arg1;
- (void)resizeCircleAfterDelay;
- (double)feetToMeters:(double)arg1;
- (double)minimumInMeters;
- (void)removeHandle:(BOOL)arg1;
- (void)addHandleForAnnotation:(id)arg1;
- (void)updateOverlays;
- (void)animateHandleIn:(BOOL)arg1;
- (void)updateTextWithRadius:(double)arg1;
- (void)popAnimateHandle;
- (struct CGPoint)calculatedCenter;
- (id)initWithFrame:(struct CGRect)arg1;

@end

