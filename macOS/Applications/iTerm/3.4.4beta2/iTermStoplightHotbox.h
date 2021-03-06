//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSBezierPath, NSTrackingArea;

@interface iTermStoplightHotbox : NSView
{
    NSTrackingArea *_trackingArea;
    NSBezierPath *_fillPath;
    NSBezierPath *_strokePath;
    BOOL _inside;
    id <iTermStoplightHotboxDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <iTermStoplightHotboxDelegate> delegate; // @synthesize delegate=_delegate;
- (void)trackClickForWindowMove:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGRect)_opaqueRectForWindowMoveWhenInTitlebar;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)updateTrackingAreas;
- (void)drawRect:(struct CGRect)arg1;

@end

