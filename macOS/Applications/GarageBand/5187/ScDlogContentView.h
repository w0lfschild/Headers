//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class ScFocusDrawView;

@interface ScDlogContentView : NSView
{
    ScFocusDrawView *m_focusDrawView_1;
    ScFocusDrawView *m_focusDrawView_2;
}

+ (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)addFocusDrawView;
- (void)setFocusDraw2:(struct CGRect)arg1 auxID:(int)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

