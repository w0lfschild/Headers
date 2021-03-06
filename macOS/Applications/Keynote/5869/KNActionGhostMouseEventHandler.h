//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDModalMouseEventHandler-Protocol.h"

@class KNCanvasSelection, KNInteractiveCanvasController, NSString, TSDRep;
@protocol KNActionGhostMouseEventHandlerDelegate;

@interface KNActionGhostMouseEventHandler : NSObject <TSDModalMouseEventHandler>
{
    KNInteractiveCanvasController *_interactiveCanvasController;
    KNCanvasSelection *_canvasSelection;
    id <KNActionGhostMouseEventHandlerDelegate> _delegate;
    TSDRep *_highlightedRep;
}

- (void).cxx_destruct;
- (void)updateCursorAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)wantsUpdateCursorAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)p_exitWithHitRep:(id)arg1;
- (void)exitActionBuildShapeSelectionMode;
- (void)removeRepHighlight;
- (BOOL)handleSingleClickAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)mouseMovedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)p_repIsValidHitTarget:(id)arg1;
- (id)p_hitRepAtPoint:(struct CGPoint)arg1;
- (id)initWithInteractiveCanvasController:(id)arg1 canvasSelection:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

