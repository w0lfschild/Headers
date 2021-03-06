//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSLayoutConstraint, NSTrackingArea, TTagInfo, TTagsPaneController, TViewOverColorCircle;

@interface TTagsPrefCellView : NSTableCellView
{
    NSButton *_sidebarCheckBox;
    TViewOverColorCircle *_viewOverColorCircle;
    NSTrackingArea *_beginTrackingArea;
    NSTrackingArea *_endTrackingArea;
    _Bool _mouseInDot;
    TTagInfo *_tagInfo;
    NSLayoutConstraint *_colorCircleWidthConstraint;
    NSLayoutConstraint *_colorCircleExpandedWidthConstraint;
    TTagsPaneController *_tagsPaneController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TTagsPaneController *tagsPaneController; // @synthesize tagsPaneController=_tagsPaneController;
@property(retain, nonatomic) NSLayoutConstraint *colorCircleExpandedWidthConstraint; // @synthesize colorCircleExpandedWidthConstraint=_colorCircleExpandedWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *colorCircleWidthConstraint; // @synthesize colorCircleWidthConstraint=_colorCircleWidthConstraint;
@property(retain, nonatomic) TTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(retain, nonatomic) TViewOverColorCircle *viewOverColorCircle; // @synthesize viewOverColorCircle=_viewOverColorCircle;
@property(readonly, nonatomic) NSButton *sidebarCheckBox; // @synthesize sidebarCheckBox=_sidebarCheckBox;
- (void)updateImage;
- (void)mouseExited:(id)arg1;
- (void)revertHoverState;
- (void)mouseEntered:(id)arg1;
- (void)disableTrackingArea;
- (void)enableTrackingArea;
- (void)prepareForReuse;
- (void)dealloc;
- (void)viewDidMoveToWindow;

@end

