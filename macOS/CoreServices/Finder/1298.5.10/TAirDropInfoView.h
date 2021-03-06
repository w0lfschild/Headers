//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TUpdateLayerView.h"

@class NSLayoutConstraint;

@interface TAirDropInfoView : TUpdateLayerView
{
    struct TNSRef<NSVisualEffectView, void> _backgroundView;
    double _superviewHeightCache;
    double _initialBottomConstraintConstantCache;
    NSLayoutConstraint *_bottomConstraint;
    _Bool _isInArcMode;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)layout;
@property(getter=isInArcMode) _Bool inArcMode; // @synthesize inArcMode=_isInArcMode;
- (void)awakeFromNib;

@end

