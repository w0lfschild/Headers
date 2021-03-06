//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSTableView.h>

@class NSAttributedString, NSColor;

@interface DividedTableView : NSTableView
{
    long long mDividerLocation;
    double mDividerHeight;
    NSColor *mDividerColor;
    NSAttributedString *mTitle;
    double mTitleWidth;
    double mTitleLeftInset;
    double mTitleRightSpaceAfter;
    double mTitleFromTop;
    double mHeightAboveLine;
    double mHeightOfLine;
    double mHeightBelowLine;
    double mWidthRightOfLine;
}

- (long long)rowAtPoint:(struct CGPoint)arg1;
- (struct CGRect)rectOfRow:(long long)arg1;
- (void)setSpacingAboveLine:(double)arg1 line:(double)arg2 belowLine:(double)arg3 right:(double)arg4;
- (void)setTitle:(id)arg1 topInset:(double)arg2 leftInset:(double)arg3 rightSpaceAfter:(double)arg4;
- (void)setBarColor:(id)arg1;
- (void)setDividerLocationAfterRow:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

