//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class IPAnimationSemaphore, NSMutableArray, PAShareKitFaceEffectConfiguration;

@interface PAShareKitFaceGridEffect : NSObject
{
    NSMutableArray *_cellEffects;
    IPAnimationSemaphore *_animationSemaphore;
    PAShareKitFaceEffectConfiguration *_config;
}

@property(readonly, nonatomic) PAShareKitFaceEffectConfiguration *config; // @synthesize config=_config;
@property(readonly, nonatomic) IPAnimationSemaphore *animationSemaphore; // @synthesize animationSemaphore=_animationSemaphore;
- (unsigned long long)numberOfCellsAnimating;
- (void)animateOff;
- (id)animateOnCellLayer:(id)arg1;
- (void)dealoc;
- (id)init;

@end

