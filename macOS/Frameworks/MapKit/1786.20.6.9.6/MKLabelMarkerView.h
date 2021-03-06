//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class MKMapView, NSColor, NSImage, NSView;

@interface MKLabelMarkerView : MKAnnotationView
{
    NSView *_anchorDotView;
    BOOL _needsToResolveBalloonAttributes;
    long long _balloonCalloutStyle;
    BOOL _balloonCalloutShouldOriginateFromSmallSize;
    NSColor *_balloonFillColor;
    NSColor *_balloonStrokeColor;
    NSImage *_balloonImage;
    NSView *_balloonContentView;
    double _smallBalloonScaleFactor;
    MKMapView *_mapView;
}

+ (BOOL)_followsTerrain;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_didHideBalloonCalloutView:(id)arg1;
- (void)_addBalloonCalloutView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_useBalloonCallouts;
- (BOOL)_shouldShowCallout;
- (void)dealloc;
- (void)setAnnotation:(id)arg1;
- (void)_deregisterObserver;
- (void)_registerObserver;
- (id)_balloonContentView;
- (id)_balloonImage;
- (id)_balloonStrokeColor;
- (id)_balloonTintColor;
- (BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double *)arg1;
- (long long)_balloonCalloutStyle;
- (void)_resolveBalloonAttributesIfNecessary;
- (void)prepareForReuse;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

