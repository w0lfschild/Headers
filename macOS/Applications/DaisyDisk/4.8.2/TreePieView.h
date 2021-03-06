//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "ITPManipulationAnimationChainDelegate.h"
#import "TPContext.h"

@class DirectoryItem, IXMouseEvent, NSArray, NSMapTable, NSMutableArray, NSObject<ITPNavigationAnimationChain>, NSTimer, NSTrackingArea, TPInsertManipulationAnimationChain, TPRemoveManipulationAnimationChain, TPSegment, TPSimpleAnimationView, TPSizeLabel;

@interface TreePieView : NSView <TPContext, ITPManipulationAnimationChainDelegate>
{
    DirectoryItem *_topmostDirectory;
    DirectoryItem *_currentDirectory;
    NSMutableArray *_rings;
    NSMutableArray *_minRings;
    NSMutableArray *_segments;
    NSMutableArray *_smallerItemsGroupSegments;
    NSMapTable *_segmentZoomAnimations;
    TPSizeLabel *_sizeLabel;
    NSMutableArray *_callouts;
    NSMutableArray *_calloutItems;
    NSObject<ITPNavigationAnimationChain> *_navigationAnimation;
    TPInsertManipulationAnimationChain *_insertManipulationAnimation;
    TPRemoveManipulationAnimationChain *_removeManipulationAnimation;
    NSTrackingArea *_trackingArea;
    BOOL _ignoresMouseMove;
    BOOL _delegateWantsFirstMouseMove;
    BOOL _didMouseDrag;
    NSTimer *_autoDragTimer;
    BOOL _isAutoDragging;
    BOOL _isUserInputBlocked;
    TPSegment *_fakeFreeSpaceSegment;
    BOOL _shouldHideFreeSpace;
    double _minVisualizableRelativeSize;
    CDStruct_e7d24821 _displaySpan;
    double _scaleFactor;
    struct CGPoint _centerOffset;
    BOOL _isShowingEmptyUntilBlossom;
    TPSimpleAnimationView *_simpleAnimationView;
    id <ColorSchemeProtocol> _colorScheme;
    id <TreePieViewDelegate> _delegate;
    TPSegment *_selectedSegment;
    IXMouseEvent *_lastMouseDownEvent;
}

@property(retain, nonatomic) IXMouseEvent *lastMouseDownEvent; // @synthesize lastMouseDownEvent=_lastMouseDownEvent;
@property(retain, nonatomic) TPSegment *selectedSegment; // @synthesize selectedSegment=_selectedSegment;
@property(nonatomic) id <TreePieViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL ignoresMouseMove; // @synthesize ignoresMouseMove=_ignoresMouseMove;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property(nonatomic) double minVisualizableRelativeSize; // @synthesize minVisualizableRelativeSize=_minVisualizableRelativeSize;
@property(readonly, nonatomic) DirectoryItem *currentDirectory; // @synthesize currentDirectory=_currentDirectory;
@property(retain, nonatomic) DirectoryItem *topmostDirectory; // @synthesize topmostDirectory=_topmostDirectory;
@property(retain, nonatomic) id <ColorSchemeProtocol> colorScheme; // @synthesize colorScheme=_colorScheme;
@property(nonatomic) BOOL shouldHideFreeSpace; // @synthesize shouldHideFreeSpace=_shouldHideFreeSpace;
@property(readonly, nonatomic) TPSizeLabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(readonly, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic) NSArray *rings; // @synthesize rings=_rings;
@property(nonatomic) CDStruct_e7d24821 displaySpan; // @synthesize displaySpan=_displaySpan;
- (void)unblockUserInput;
- (void)blockUserInput;
- (id)menuForEvent:(id)arg1;
- (void)drillDownNavigationAnimationDidFadeOut;
- (void)recalculateCallouts;
- (void)rebuildCallouts;
- (void)showCalloutsForItems:(id)arg1;
@property(readonly, nonatomic) BOOL isManipulating;
- (void)manipulationDidEnd:(id)arg1;
- (void)completeManipulationAnimationsUnlessCanCancelRemovingItem:(id)arg1;
- (void)insertItem:(id)arg1 isUndraggable:(BOOL)arg2;
- (void)removeItem:(id)arg1 isUndraggable:(BOOL)arg2;
- (void)cancelAllAnimationsIncludingPulsation:(BOOL)arg1;
- (double)zoomSwellingLevelForSegment:(id)arg1;
- (void)zoomSelectedItem;
- (id)zoomAnimationForSegment:(id)arg1;
- (void)removeZoomAnimationForSegment:(id)arg1;
- (void)addZoomAnimationForSegment:(id)arg1;
- (BOOL)isCurrentDirectoryVolume;
- (void)rebuildItemSegments:(id)arg1 withAnimation:(BOOL)arg2;
- (void)showEmptyUntilBlossom;
- (void)blossomOut;
- (void)navigationAnimationDidComplete;
- (void)setCurrentDirectory:(id)arg1 collapsePackageItems:(id)arg2 expandPackageItems:(id)arg3 withAnimation:(BOOL)arg4;
- (void)magnifyWithEvent:(id)arg1;
- (void)cancelAutoDragTimer;
- (void)autoDragTimerDidFire;
- (void)delegateWantsFirstMouseMove;
- (void)mouseExitedWhenOccluded:(BOOL)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)updateTrackingAreas;
- (BOOL)isPointOccludedBySiblingViews:(struct CGPoint)arg1;
- (id)hitTestPoint:(struct CGPoint)arg1;
- (void)refreshSelection;
- (id)smallerItemsGroupSegmentFromParentDirectory:(id)arg1;
- (id)smallerItemsGroupSegmentFromItem:(id)arg1;
- (id)segmentFromItem:(id)arg1;
- (id)segmentFromItem:(id)arg1 lookIntoSmallerGroups:(BOOL)arg2 outSegmentIndex:(unsigned long long *)arg3;
- (struct CGPoint)selectedSegmentCenter;
- (void)selectItem:(id)arg1;
- (void)stopPulsatingSelectedSegment;
- (void)pulsateSelectedSegment;
@property(nonatomic) double displaySpanPosition;
- (void)recalculateAllSegments;
- (void)recalculateSegmentsInRange:(struct _NSRange)arg1;
- (void)rebuildSegmentsForDirectory:(id)arg1 ringIndex:(unsigned long long)arg2 baseDir:(id)arg3;
- (void)rebuild;
- (void)replaceRings:(id)arg1;
- (void)rebuildRings;
- (void)refreshView;
- (void)invalidateView;
- (void)drawCallouts;
- (void)drawSegment:(id)arg1 refreshRect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) long long sizeMathBase;
- (struct CGPoint)calculateCenterPoint;
- (struct CGPoint)segmentCenterForItem:(id)arg1;
@property(nonatomic) double scaledDiameter;
- (id)source;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

