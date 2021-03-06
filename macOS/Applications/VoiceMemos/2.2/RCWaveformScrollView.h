//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RCWaveformScrollView : UIScrollView <UIGestureRecognizerDelegate>
{
    unsigned long long _ignoreContentOffsetChangesCount;
}

- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2 usingCurrentAnimatedPosition:(BOOL)arg3;
- (struct CGPoint)contentOffsetInPresentationLayer:(BOOL)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)endIgnoringContentOffsetChanges;
- (void)beginIgnoringContentOffsetChanges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

