//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface RoutingMaterialColorSwitchingView : UIView
{
    long long _lightMaterial;
    UIColor *_darkColor;
    UIVisualEffectView *_lightView;
    UIView *_darkView;
}

- (void).cxx_destruct;
- (void)_setDarkViewVisible:(BOOL)arg1;
- (void)_setLightViewVisible:(BOOL)arg1;
- (void)_updateForCurrentInterfaceStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithLightMaterial:(long long)arg1 darkColor:(id)arg2;

@end

