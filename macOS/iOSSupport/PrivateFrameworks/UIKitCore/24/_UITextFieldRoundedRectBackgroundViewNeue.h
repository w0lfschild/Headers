//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIView
{
    double _lineWidthPixels;
    BOOL _disabled;
    BOOL _hasFlexibleCornerRadius;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hasFlexibleCornerRadius; // @synthesize hasFlexibleCornerRadius=_hasFlexibleCornerRadius;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void)setContentScaleFactor:(double)arg1;
- (BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
- (void)setActive:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (double)_cornerRadiusAdjustedForBoundsHeight;
- (double)_screenScale;
- (id)_fillColor:(BOOL)arg1;
- (id)_strokeColor:(BOOL)arg1;
@property(nonatomic) double lineWidth;
- (void)updateView;
- (id)_initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2 lineWidth:(double)arg3 updateView:(BOOL)arg4;
- (id)_initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2 lineWidth:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 active:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

