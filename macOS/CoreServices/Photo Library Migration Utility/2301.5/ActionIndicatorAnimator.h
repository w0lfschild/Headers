//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class ActionIndicatorWindow, NSArray, NSTimer;

@interface ActionIndicatorAnimator : NSObject
{
    ActionIndicatorWindow *mWind;
    NSTimer *mTimer;
    NSArray *mImages;
    long long mImageIndex;
}

- (void)dealloc;
- (id)initWithWindow:(id)arg1 images:(id)arg2 interval:(double)arg3;
- (void)_animate:(id)arg1;

@end

