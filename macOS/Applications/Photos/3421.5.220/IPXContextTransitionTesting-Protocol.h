//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IPXContextTransitionTesting <NSObject>
@property(copy, nonatomic) CDUnknownBlockType testing_transitionAnimationPreparationHandler;
@property(copy, nonatomic) CDUnknownBlockType testing_transitionAnimationCompletionHandler;
- (void)testing_notifyTransitionAnimationDidPrepare;
- (void)testing_notifyTransitionAnimationDidComplete;
@end

