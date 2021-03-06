//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CALCanvasItem.h"

@class NSGradient;

@interface CALCanvasRectangle : CALCanvasItem
{
    double _curveRadius;
    BOOL _topLeftCurved;
    BOOL _topRightCurved;
    BOOL _bottomLeftCurved;
    BOOL _bottomRightCurved;
    NSGradient *_gradient;
    double _gradientAngle;
    BOOL _drawSelectionBackground;
}

+ (id)rectangleWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
+ (id)rectangle:(struct CGRect)arg1;
- (void).cxx_destruct;
- (BOOL)isHitByPoint:(struct CGPoint)arg1;
- (struct CGRect)bounds;
- (void)draw;
- (void)_drawSelectionListHighlightInRect:(struct CGRect)arg1;
- (void)setDrawSelectionBackground:(BOOL)arg1;
- (void)pushRoundedRectPath:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withCornerRadius:(double)arg3;
- (void)drawLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (void)drawShadow;
- (void)updateBezierRepresentation;
- (BOOL)bottomRightIsCurved;
- (BOOL)bottomLeftIsCurved;
- (BOOL)topRightIsCurved;
- (BOOL)topLeftIsCurved;
- (void)setCurvedCornersAtTopLeft:(BOOL)arg1 atTopRight:(BOOL)arg2 atBottomLeft:(BOOL)arg3 atBottomRight:(BOOL)arg4;
- (void)setCurveRadius:(double)arg1;
- (double)curveRadius;
- (BOOL)round;
- (void)setGradient:(id)arg1;
- (void)setGradientAngle:(double)arg1;
- (double)gradientAngle;
- (id)gradient;
- (id)initWithTagID:(id)arg1 position:(struct CGPoint)arg2 size:(struct CGSize)arg3 delegate:(id)arg4 shown:(BOOL)arg5 selectable:(BOOL)arg6 userData:(id)arg7;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;

@end

