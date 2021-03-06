//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray;
@protocol KNMacPresenterDisplayElementCustomizeOverlayViewDelegate;

@interface KNMacPresenterDisplayElementCustomizeOverlayView : NSView
{
    NSArray *_lineViews;
    NSArray *_knobViews;
    BOOL _isSelected;
    BOOL _mouseIsInsideView;
    id <KNMacPresenterDisplayElementCustomizeOverlayViewDelegate> _delegate;
}

@property(nonatomic) BOOL mouseIsInsideView; // @synthesize mouseIsInsideView=_mouseIsInsideView;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) id <KNMacPresenterDisplayElementCustomizeOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)p_makeAndAddLineView;
- (id)p_makeAndAddKnobForPosition:(struct CGPoint)arg1;
- (void)p_updateViewState;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;
- (id)initWithFrame:(struct CGRect)arg1;

@end

