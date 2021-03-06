//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CardShadowSettings : NSObject
{
    double _radius;
    double _opacity;
    double _rimOpacity;
    double _cornerRadius;
}

+ (id)settingsForTraitCollection:(id)arg1 button:(BOOL)arg2;
+ (id)darkCardMacShadowSettings;
+ (id)lightCardMacShadowSettings;
+ (id)darkButtonShadowSettings;
+ (id)darkCardShadowSettings;
+ (id)lightButtonShadowSettings;
+ (id)lightCardShadowSettings;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) double rimOpacity; // @synthesize rimOpacity=_rimOpacity;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) double expansion;
- (id)initWithRadius:(double)arg1 opacity:(double)arg2 rimOpacity:(double)arg3 cornerRadius:(double)arg4;

@end

