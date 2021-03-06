//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXVScrollMenuDelegate-Protocol.h"
#import "AXVViewMouseEventDelegate-Protocol.h"

@class AXVMutableWindowSpace, AXVProgressIndicatorView, AXVScrollMenu, AXVStyledMenu, AXVStyledMenuItem, DCZoomManager, NSDictionary, NSString;

@interface DCVisualManager : NSObject <AXVViewMouseEventDelegate, AXVScrollMenuDelegate>
{
    BOOL _isZoomedIn;
    BOOL _isHighlightingView;
    BOOL __isAnimatingPress;
    BOOL __isAnimatingMenuPress;
    BOOL __isCursorHidden;
    DCZoomManager *__zoomManager;
    AXVProgressIndicatorView *__progressIndicatorView;
    AXVScrollMenu *__scrollMenu;
    AXVStyledMenu *__optionsMenu;
    AXVMutableWindowSpace *__windowSpace;
    AXVStyledMenuItem *__optionsMenuHighlightedItem;
    NSDictionary *__optionsMenuDwellAction;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL _isCursorHidden; // @synthesize _isCursorHidden=__isCursorHidden;
@property(nonatomic) BOOL _isAnimatingMenuPress; // @synthesize _isAnimatingMenuPress=__isAnimatingMenuPress;
@property(nonatomic) BOOL _isAnimatingPress; // @synthesize _isAnimatingPress=__isAnimatingPress;
@property(retain, nonatomic) NSDictionary *_optionsMenuDwellAction; // @synthesize _optionsMenuDwellAction=__optionsMenuDwellAction;
@property(retain, nonatomic) AXVStyledMenuItem *_optionsMenuHighlightedItem; // @synthesize _optionsMenuHighlightedItem=__optionsMenuHighlightedItem;
@property(retain, nonatomic) AXVMutableWindowSpace *_windowSpace; // @synthesize _windowSpace=__windowSpace;
@property(retain, nonatomic) AXVStyledMenu *_optionsMenu; // @synthesize _optionsMenu=__optionsMenu;
@property(retain, nonatomic) AXVScrollMenu *_scrollMenu; // @synthesize _scrollMenu=__scrollMenu;
@property(retain, nonatomic) AXVProgressIndicatorView *_progressIndicatorView; // @synthesize _progressIndicatorView=__progressIndicatorView;
@property(retain, nonatomic) DCZoomManager *_zoomManager; // @synthesize _zoomManager=__zoomManager;
@property(nonatomic) BOOL isHighlightingView; // @synthesize isHighlightingView=_isHighlightingView;
@property(nonatomic) BOOL isZoomedIn; // @synthesize isZoomedIn=_isZoomedIn;
- (void)scrollMenu:(id)arg1 stopScrollingInDirection:(unsigned long long)arg2;
- (void)scrollMenu:(id)arg1 shouldScrollInDirection:(unsigned long long)arg2 withPayload:(id)arg3;
- (void)_unhighlightOptionsMenuItem:(id)arg1;
- (void)_highlightOptionsMenuItem:(id)arg1 eventSourceData:(id)arg2;
- (void)mouseDidExitView:(id)arg1 event:(id)arg2;
- (void)mouseDidEnterView:(id)arg1 event:(id)arg2;
- (void)_fadeIn:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fadeOut:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeViewFromOverlayWindowSpace:(id)arg1;
- (void)_addViewToOverlayWindowSpace:(id)arg1;
- (void)_activateForMenuItemDictionary:(id)arg1;
- (void)_animateMenuPress;
- (id)_optionsMenuItemsForDisplayStyle:(long long)arg1;
- (void)dismissOptionsMenu;
- (void)showOptionsMenuAroundPoint:(struct CGPoint)arg1;
- (void)hideScrollControl;
- (void)showScrollControlAtPoint:(struct CGPoint)arg1 vertical:(BOOL)arg2 horizontal:(BOOL)arg3;
- (void)hideProgressCursor;
- (void)showProgressCursorForFrame:(struct CGRect)arg1;
- (void)cancelProgressCursorAnimation;
- (void)animateProgressCursorForDuration:(double)arg1;
- (void)animateProgressCursorPress;
- (void)zoomOut;
- (void)zoomIn;
- (void)zoomWindowMoveIfNeededToPoint:(struct CGPoint)arg1;
- (void)reset;
- (void)setDwellCursorColor:(id)arg1;
- (void)setDwellZoomEnabled:(BOOL)arg1;
- (void)cleanup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

