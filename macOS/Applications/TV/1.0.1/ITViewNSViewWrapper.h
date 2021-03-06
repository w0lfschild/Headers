//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface ITViewNSViewWrapper : NSView
{
    shared_ptr_d213862f mContainingITView;
    NSView *mContainingNSView;
    shared_ptr_441f3242 mAdapter;
    BOOL mIsVisible;
    BOOL mDidSetClientWindow;
}

+ (void)hideViewWrappersForITView:(shared_ptr_d213862f)arg1 shouldBeVisible:(BOOL)arg2;
+ (HashMap_1f396e61 *)getITViewToWrapperListMapInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGPoint)_convertWindowPointToGlobal:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)renewGState;
- (void)updateRootView;
- (struct CGRect)computeRootViewFrame;
- (void)_doAnyNeededScaling:(struct CGRect *)arg1;
- (struct CGRect)_subtractOtherViewsFromBounds;
- (id)_findParentScrollView;
- (void)updateRootView:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)webPlugInDestroy;
- (void)dealloc;
- (void)releaseClientView;
- (void)removeNotifications;
- (void)viewDidUnhide;
- (void)viewDidHide;
- (void)setRootViewVisible:(BOOL)arg1;
- (void)setupRootView:(shared_ptr_d213862f)arg1;
- (void)handleRootViewGoingAway:(shared_ptr_d213862f)arg1;
- (shared_ptr_d213862f)getRootView;
- (shared_ptr_d213862f)getContainingITView;
- (shared_ptr_421cc4c7)getITWindow;
- (void)setAdapter:(shared_ptr_441f3242)arg1;
- (id)initWithContainingITView:(shared_ptr_d213862f)arg1 andNSView:(id)arg2 andBounds:(struct CGRect)arg3;
- (void)_removeViewWrapperFromMap;
- (void)_addViewWrapperToMap;

@end

