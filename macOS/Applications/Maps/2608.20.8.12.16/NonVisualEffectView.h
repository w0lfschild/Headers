//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsThemeView.h"

@class NSString, UIView, UIVisualEffect;

__attribute__((visibility("hidden")))
@interface NonVisualEffectView : MapsThemeView
{
    UIView *_contentView;
    UIView *_backgroundView;
    double _cornerRadius;
    UIVisualEffect *_effect;
    NSString *__groupName;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setGroupName:) NSString *_groupName; // @synthesize _groupName=__groupName;
@property(copy, nonatomic) UIVisualEffect *effect; // @synthesize effect=_effect;
- (void)updateTheme;
- (double)_cornerRadius;
- (void)_setCornerRadius:(double)arg1;
@property(readonly, nonatomic) UIView *contentView;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

