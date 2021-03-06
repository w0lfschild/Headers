//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@class DocumentTabBar, DragSplitResizeView, NSObject<PCViewDraggingDelegateProtocol>, NSView, PCRoundShadowView;

__attribute__((visibility("hidden")))
@interface TabBarScrollView : NSScrollView
{
    NSView *iAccessoryView;
    DocumentTabBar *oSitesTabView;
    PCRoundShadowView *iLeftShadowView;
    PCRoundShadowView *iRightShadowView;
    DragSplitResizeView *iSplitResizeView;
    NSObject<PCViewDraggingDelegateProtocol> *iDraggingDelegate;
}

@property NSObject<PCViewDraggingDelegateProtocol> *draggingDelegate; // @synthesize draggingDelegate=iDraggingDelegate;
- (void)tile;
- (void)roundShadowViewDidFadeOut:(id)arg1;
- (void)updateShadowViews;
- (id)dragSplitResizeView;
- (id)accessoryView;
- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;

@end

