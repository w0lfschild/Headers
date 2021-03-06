//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarServiceItemView : UIStatusBarItemView
{
    NSString *_serviceString;
    NSString *_crossfadeString;
    unsigned long long _crossfadeStep;
    double _maxWidth;
    double _serviceWidth;
    double _crossfadeWidth;
    int _contentType;
    BOOL _loopingNecessaryForString;
    BOOL _loopNowIfNecessary;
    BOOL _loopingNow;
    double _letterSpacing;
}

- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (BOOL)_loopingNecessary;
- (void)_crossfadeStepAnimation;
- (BOOL)_crossfaded;
- (void)_finalAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_loopAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)performPendedActions;
- (double)extraRightPadding;
- (BOOL)animatesDataChange;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (id)contentsImage;
- (id)_crossfadeContentsImage;
- (id)_serviceContentsImage;
- (id)_contentsImageFromString:(id)arg1 withWidth:(double)arg2 letterSpacing:(double)arg3;
- (double)updateContentsAndWidth;
- (long long)legibilityStyle;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (BOOL)updateForContentType:(int)arg1 serviceString:(id)arg2 serviceCrossfadeString:(id)arg3 maxWidth:(double)arg4 actions:(int)arg5;
- (double)addContentOverlap:(double)arg1;
- (double)resetContentOverlap;
- (double)standardPadding;

@end

