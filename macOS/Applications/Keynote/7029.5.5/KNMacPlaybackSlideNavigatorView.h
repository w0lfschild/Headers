//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "CALayerDelegate-Protocol.h"
#import "KNSlideNavigatorLayerHost-Protocol.h"

@class KNNavigatorLayer, NSString;
@protocol KNMacPlaybackSlideNavigatorViewDelegate;

@interface KNMacPlaybackSlideNavigatorView : NSView <KNSlideNavigatorLayerHost, CALayerDelegate>
{
    double _navigatorLayerHeight;
    BOOL _isObservingClipViewGeometry;
    id <KNMacPlaybackSlideNavigatorViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <KNMacPlaybackSlideNavigatorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)p_selectRowWithMouseEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (struct CGRect)visibleRectForNavigatorLayer:(id)arg1;
- (void)updateLayerHeightTo:(double)arg1 forNavigatorLayer:(id)arg2;
- (void)scrollRowToVisible:(unsigned long long)arg1;
- (void)p_enclosingClipViewFrameDidChangeNotification:(id)arg1;
- (void)p_enclosingClipViewBoundsDidChangeNotification:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isFlipped;
@property(readonly, nonatomic) KNNavigatorLayer *slideNavigatorLayer;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)p_stopObservingEnclosingClipViewGeometryIfNeeded;
- (void)p_startObservingEnclosingClipViewGeometryIfNeeded;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

