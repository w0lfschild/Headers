//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"
#import "NSDraggingSource-Protocol.h"
#import "TSPPasteboardDataProvider-Protocol.h"

@class KNDocumentRoot, NSArray, NSDraggingSession, NSEvent, NSImage, NSString, NSTimer, NSView, NSWindow, TSDNoDefaultImplicitActionLayer;
@protocol KNMacSlideDragControllerDelegate;

@interface KNMacSlideDragController : NSObject <TSPPasteboardDataProvider, NSDraggingSource, CAAnimationDelegate>
{
    NSArray *mSlideNodes;
    KNDocumentRoot *mDocumentRoot;
    NSView *mHostView;
    TSDNoDefaultImplicitActionLayer *mHoldingLayer;
    NSEvent *mStartEvent;
    NSDraggingSession *mDraggingSession;
    NSImage *mDragSessionImage;
    struct CGPoint mDragSessionImageOrigin;
    NSWindow *mDragWindow;
    NSTimer *mStartPulsingTimer;
    id mDragEventMonitor;
    unsigned long long mDraggingState;
    struct CGPoint mDragPoint;
    struct CGPoint mOffsetFromThumbnailCenter;
    BOOL mIsCopyDrag;
    BOOL mSkipCollapsedChildren;
    BOOL mShowsSnapbackAnimation;
    BOOL mDidDrag;
    BOOL mCancelled;
    BOOL mIsGettingNamesOfPromisedFilesDroppedAtDestination;
    unsigned long long mAnimationCount;
    BOOL mPromiseNativeDataOnly;
    id <KNMacSlideDragControllerDelegate> mDelegate;
}

+ (unsigned long long)p_eventsToAllowDuringPulse;
+ (unsigned long long)p_eventsToBlockDuringPulse;
+ (double)defaultRadiusBeforeDragBegins;
+ (unsigned long long)dragOperationForDragInfo:(id)arg1;
+ (BOOL)canReadMediaDataForInfo:(id)arg1;
+ (id)draggedMediaURLsForInfo:(id)arg1;
+ (id)supportedDragDestinationTypes;
@property(nonatomic) BOOL promiseNativeDataOnly; // @synthesize promiseNativeDataOnly=mPromiseNativeDataOnly;
@property(readonly, nonatomic) BOOL isCopyDrag; // @synthesize isCopyDrag=mIsCopyDrag;
@property(readonly, nonatomic) BOOL didDrag; // @synthesize didDrag=mDidDrag;
@property(nonatomic) id <KNMacSlideDragControllerDelegate> delegate; // @synthesize delegate=mDelegate;
- (id)pasteboardPromise:(id)arg1 propertyListForType:(id)arg2;
- (id)p_documentUTIs;
@property(readonly, nonatomic) KNDocumentRoot *sourceDocument;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)p_endDraggingSession;
- (void)p_createDraggingSession;
- (void)p_transitionPulsingSlidesToDraggingSlides;
- (void)p_floatSlideLayersForState:(unsigned long long)arg1;
- (void)p_updateHoldingLayerSublayersWithScreenPoint:(struct CGPoint)arg1;
- (struct CGRect)p_dragRectForSlideLayers:(id)arg1;
- (struct CGRect)p_thumbnailFrameForSlideLayer:(id)arg1;
- (id)p_dragItemForCurrentSelection;
- (id)p_draggingAssistantForSlideNodes:(id)arg1;
- (id)p_supportedDragImageUTIs;
- (void)p_switchToCompleteState;
- (void)p_snapback;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)p_switchToReturningState;
- (void)p_switchToDraggingState;
- (void)p_switchToPulsingState;
- (id)p_errorMessageForInvalidStateChangeFrom:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)p_stringForDraggingState:(unsigned long long)arg1;
- (void)p_cleanupWindowsSlideDragDestinations;
- (void)p_prepareWindowsSlideDragDestinations;
- (void)p_startPulsing;
- (void)p_clearEventMonitor;
- (void)p_startEventMonitor;
- (void)p_clearTimer;
- (BOOL)deactivate;
- (void)cancel;
- (void)activateDrag;
- (BOOL)shouldDragForDragDistance:(double)arg1;
- (void)activate;
@property(readonly, nonatomic) BOOL canDrag;
- (id)initWithDocumentRoot:(id)arg1 slideNodes:(id)arg2 hostView:(id)arg3 withEvent:(id)arg4 skipCollapsedChildren:(BOOL)arg5 showsSnapbackAnimation:(BOOL)arg6;
- (id)initWithDocumentRoot:(id)arg1 slideNodes:(id)arg2 hostView:(id)arg3 withEvent:(id)arg4 skipCollapsedChildren:(BOOL)arg5;
- (id)initWithDocumentRoot:(id)arg1 slideTreeEditor:(id)arg2 hostView:(id)arg3 withEvent:(id)arg4;
- (id)initWithDocumentRoot:(id)arg1 slideTreeEditor:(id)arg2 hostView:(id)arg3 withEvent:(id)arg4 skipCollapsedChildren:(BOOL)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

