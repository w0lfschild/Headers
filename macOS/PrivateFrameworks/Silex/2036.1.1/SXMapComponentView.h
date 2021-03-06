//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXMediaComponentView.h>

#import <Silex/MKMapViewDelegate-Protocol.h>
#import <Silex/UIGestureRecognizerDelegate-Protocol.h>

@class MKMapView, NSArray, NSMutableDictionary, NSString, SXMapSnapShotter, SXMediaEngageEvent, UIBarButtonItem, UIImageView, UISegmentedControl, UITapGestureRecognizer, UIViewController;
@protocol SXDocumentTitleProviding;

@interface SXMapComponentView : SXMediaComponentView <UIGestureRecognizerDelegate, MKMapViewDelegate>
{
    MKMapView *_mapView;
    UITapGestureRecognizer *_tapGesture;
    NSArray *_annotations;
    id <SXDocumentTitleProviding> _documentTitleProvider;
    UIBarButtonItem *_doneBarButtonItem;
    UIViewController *_fullScreenCanvasViewController;
    UISegmentedControl *_segmentedControl;
    NSArray *_toolbarItems;
    NSMutableDictionary *_cachedSnapshots;
    SXMapSnapShotter *_snapShotter;
    UIImageView *_imageView;
    CDUnknownBlockType _snapShotCancelHandler;
    SXMediaEngageEvent *_activeMediaEngageEvent;
    struct CGSize _snapShotViewportSize;
    struct CGSize _snapShotSize;
    CDStruct_02837cd9 _mapRect;
}

@property(retain, nonatomic) SXMediaEngageEvent *activeMediaEngageEvent; // @synthesize activeMediaEngageEvent=_activeMediaEngageEvent;
@property(nonatomic) CDStruct_02837cd9 mapRect; // @synthesize mapRect=_mapRect;
@property(nonatomic) struct CGSize snapShotSize; // @synthesize snapShotSize=_snapShotSize;
@property(nonatomic) struct CGSize snapShotViewportSize; // @synthesize snapShotViewportSize=_snapShotViewportSize;
@property(copy, nonatomic) CDUnknownBlockType snapShotCancelHandler; // @synthesize snapShotCancelHandler=_snapShotCancelHandler;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SXMapSnapShotter *snapShotter; // @synthesize snapShotter=_snapShotter;
@property(retain, nonatomic) NSMutableDictionary *cachedSnapshots; // @synthesize cachedSnapshots=_cachedSnapshots;
@property(retain, nonatomic) NSArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIViewController *fullScreenCanvasViewController; // @synthesize fullScreenCanvasViewController=_fullScreenCanvasViewController;
@property(retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
@property(readonly, nonatomic) id <SXDocumentTitleProviding> documentTitleProvider; // @synthesize documentTitleProvider=_documentTitleProvider;
@property(retain, nonatomic) NSArray *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)submitMediaEngageCompleteEvent;
- (void)finishMediaEngageEvent;
- (void)createMediaEngageEvent;
- (unsigned long long)analyticsMediaType;
- (void)submitEvents;
- (id)mapTitle;
- (BOOL)hasSelectedAnnotations;
- (BOOL)areBarsHidden;
- (BOOL)isPresentingFullscreen;
- (BOOL)isUserInteractingWithMap;
- (void)enableMapViewInteraction:(BOOL)arg1;
- (void)mapTypeChanged:(id)arg1;
- (unsigned long long)mapTypeForSegmentIndex:(unsigned long long)arg1;
- (unsigned long long)segmentIndexForMapType:(unsigned long long)arg1;
- (void)setupToolbar;
- (void)setupNavigationBar;
- (void)configureMapView;
- (void)handleDoneTap:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)dismissFullScreen;
- (void)presentFullScreen;
- (CDStruct_2b0c6e0b)region;
- (void)cancelSnapShot;
- (void)createSnapShot;
- (BOOL)shouldCreateSnapShot;
- (void)discardContents;
- (void)presentComponentWithChanges:(CDStruct_74be42e1)arg1;
- (void)renderContents;
- (void)memoryWarning:(id)arg1;
- (void)dealloc;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 appStateMonitor:(id)arg6 documentTitleProvider:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

