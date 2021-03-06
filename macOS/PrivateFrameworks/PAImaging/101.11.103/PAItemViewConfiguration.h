//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/NSCopying-Protocol.h>

@class NSScreen, PAContentTransform, PADisplay;

@interface PAItemViewConfiguration : NSObject <NSCopying>
{
    double _scaleCoverage;
    PAContentTransform *_itemToContentTransform;
    PAContentTransform *_contentToViewTransform;
    long long _itemOrientation;
    double _contentScale;
    NSScreen *_screen;
    double _backingScaleFactor;
    PADisplay *_display;
    struct CGPoint _contentOrigin;
    struct CGPoint _contentAnchor;
    struct CGRect _itemExtent;
    struct CGRect _itemClipRect;
    struct CGRect _canvasFrame;
    struct CGAffineTransform _itemTransform;
}

@property(retain, nonatomic) PADisplay *display; // @synthesize display=_display;
@property(nonatomic) double backingScaleFactor; // @synthesize backingScaleFactor=_backingScaleFactor;
@property(retain, nonatomic) NSScreen *screen; // @synthesize screen=_screen;
@property(nonatomic) struct CGRect canvasFrame; // @synthesize canvasFrame=_canvasFrame;
@property(nonatomic) struct CGPoint contentAnchor; // @synthesize contentAnchor=_contentAnchor;
@property(nonatomic) struct CGPoint contentOrigin; // @synthesize contentOrigin=_contentOrigin;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) long long itemOrientation; // @synthesize itemOrientation=_itemOrientation;
@property(nonatomic) struct CGRect itemClipRect; // @synthesize itemClipRect=_itemClipRect;
@property(nonatomic) struct CGAffineTransform itemTransform; // @synthesize itemTransform=_itemTransform;
@property(nonatomic) struct CGRect itemExtent; // @synthesize itemExtent=_itemExtent;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect viewContentBounds;
- (struct CGRect)itemRectFromViewRect:(struct CGRect)arg1;
- (struct CGRect)viewRectFromItemRect:(struct CGRect)arg1;
- (struct CGPoint)itemPointFromViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)viewPointFromItemPoint:(struct CGPoint)arg1;
- (struct CGAffineTransform)itemToViewTransform;
- (struct CGRect)itemRectFromContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectFromItemRect:(struct CGRect)arg1;
- (struct CGPoint)itemPointFromContentPoint:(struct CGPoint)arg1;
- (struct CGPoint)contentPointFromItemPoint:(struct CGPoint)arg1;
- (struct CGAffineTransform)itemToContentTransform;
- (struct CGRect)contentRectFromViewRect:(struct CGRect)arg1;
- (struct CGRect)viewRectFromContentRect:(struct CGRect)arg1;
- (struct CGPoint)contentPointFromViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)viewPointFromContentPoint:(struct CGPoint)arg1;
- (struct CGAffineTransform)contentToViewTransform;
- (struct CGPoint)convertPointFromBacking:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromBacking:(struct CGRect)arg1;
- (struct CGPoint)convertPointToBacking:(struct CGPoint)arg1;
- (struct CGRect)convertRectToBacking:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect overlayViewFrame;
- (BOOL)canRescaleBackingLayerDuringLiveResize;
- (struct CGRect)integralViewFrameWithFrame:(struct CGRect)arg1;
- (struct CGRect)computeViewFrameWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect viewFrame; // @dynamic viewFrame;
@property(readonly, nonatomic) struct CGRect viewBounds;
- (double)contentScaleToFitInSize:(struct CGSize)arg1;
- (double)computeScaleToFitWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) double scaleToFit; // @dynamic scaleToFit;
@property(readonly, nonatomic) struct CGRect contentBounds; // @dynamic contentBounds;
- (struct CGPoint)_contentPointToAlign;
- (id)_computeContentToViewTransform;
- (id)_contentToViewTransform;
- (void)_invalidateContentToViewTransform;
- (id)_computeItemToContentTransform;
- (id)_itemToContentTransform;
- (void)_invalidateItemToContentTransform;
@property(nonatomic) struct CGSize itemSize;
- (void)updateContentScaleWithCoverage:(double)arg1;
- (double)contentScaleAsCoverage;
- (void)_computeScaleCoverage;
- (id)debugDescription;
- (BOOL)isEqualToViewConfiguration:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

