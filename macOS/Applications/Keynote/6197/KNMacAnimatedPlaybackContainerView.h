//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "KNAnimatedPlaybackConcealerLayerVisibilityDelegate-Protocol.h"
#import "KNAnimatedPlaybackPlatformViewHost-Protocol.h"
#import "KNPlaybackConcealer-Protocol.h"

@class CALayer, NSArray, NSObject, NSString, NSTrackingArea;
@protocol KNAnimatedPlaybackRenderingController, KNPlaybackConcealer;

@interface KNMacAnimatedPlaybackContainerView : NSView <KNPlaybackConcealer, KNAnimatedPlaybackConcealerLayerVisibilityDelegate, KNAnimatedPlaybackPlatformViewHost>
{
    NSObject<KNAnimatedPlaybackRenderingController> *_renderingController;
    struct CGSize _playbackSize;
    double _playbackContentsScale;
    unsigned long long _playbackResolutionUpdateDisableCount;
    BOOL _playbackResolutionNeedsUpdate;
    NSView *_playbackContainerLayerView;
    NSView *_playbackConcealerLayerView;
    struct NSView *_buildRendererParentView;
    NSArray *_activeConstraints;
    NSTrackingArea *_trackingArea;
    BOOL _scalesPlaybackLayerToFitPlaybackSize;
    BOOL _updatesPlaybackResolutionOnBoundsChange;
}

@property(nonatomic) BOOL updatesPlaybackResolutionOnBoundsChange; // @synthesize updatesPlaybackResolutionOnBoundsChange=_updatesPlaybackResolutionOnBoundsChange;
@property(nonatomic) BOOL scalesPlaybackLayerToFitPlaybackSize; // @synthesize scalesPlaybackLayerToFitPlaybackSize=_scalesPlaybackLayerToFitPlaybackSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSView *buildRendererParentView;
- (void)concealerLayerDidHide:(id)arg1;
@property(nonatomic) long long concealingStyle;
- (void)mouseMoved:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)p_hyperlinkURLForMouseEvent:(id)arg1;
- (struct CGPoint)mouseLocationInPlaybackViewFromEvent:(id)arg1;
- (void)updateTrackingAreas;
- (void)p_renderingControllerAnimationDidEnd:(id)arg1;
- (void)p_updatePlaybackResolutionIfNeeded;
- (void)p_setPlaybackResolutionNeedsUpdate;
- (struct CGRect)p_playbackLayerBounds;
- (BOOL)p_shouldScalePlaybackLayerToFitPlaybackContainerViewBounds;
- (void)viewDidEndLiveResize;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)layout;
- (void)updateConstraints;
@property(readonly, nonatomic) NSObject<KNPlaybackConcealer> *playbackConcealer;
- (void)naturalPlaybackSizeDidChange;
- (void)enableResolutionUpdates;
- (void)disableResolutionUpdates;
@property(readonly, nonatomic) CALayer *playbackLayer;
- (id)p_playbackContainerLayer;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithRenderingController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

