//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GEOComposedRouteLaneInfo, NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface GuidanceLaneView : UIView
{
    NSArray *_allPaths;
    struct CGSize _laneDrawingSize;
    BOOL _maneuverHasPreferredLane;
    GEOComposedRouteLaneInfo *_laneInfo;
    UIColor *_invalidArrowColor;
    unsigned long long _drawingBiasDirection;
    unsigned long long _laneStyle;
    double _drawingScale;
    double _verticalOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double verticalOffset; // @synthesize verticalOffset=_verticalOffset;
@property(nonatomic) double drawingScale; // @synthesize drawingScale=_drawingScale;
@property(nonatomic) unsigned long long laneStyle; // @synthesize laneStyle=_laneStyle;
@property(readonly, nonatomic) unsigned long long drawingBiasDirection; // @synthesize drawingBiasDirection=_drawingBiasDirection;
@property(retain, nonatomic) UIColor *invalidArrowColor; // @synthesize invalidArrowColor=_invalidArrowColor;
@property(readonly, nonatomic) BOOL maneuverHasPreferredLane; // @synthesize maneuverHasPreferredLane=_maneuverHasPreferredLane;
@property(readonly, nonatomic) GEOComposedRouteLaneInfo *laneInfo; // @synthesize laneInfo=_laneInfo;
- (void)drawRect:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_defaultInvalidArrowColor;
- (id)_validArrowColor;
- (id)_preferredArrowColor;
- (BOOL)_markFirstDirectionAsValid;
- (BOOL)_highlightFirstDirection;
- (struct CGSize)intrinsicContentSize;
- (void)_updateLanePaths;
- (id)initWithLaneInfo:(id)arg1 maneuverHasPreferredLane:(BOOL)arg2 drawingBiasDirection:(unsigned long long)arg3 laneStyle:(unsigned long long)arg4;

@end

