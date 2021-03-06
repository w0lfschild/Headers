//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@class NSTrackingArea;

@interface KNBuildOrderTableView : NSTableView
{
    NSTrackingArea *_cursorTrackingArea;
    BOOL _isMouseInside;
    BOOL _isDraggingDeliveryGroup;
    BOOL _shouldDrawIndicator;
    BOOL _isCurrentlyDragging;
    struct CGRect _indicatorRect;
    BOOL _handlingUserEvent;
}

@property(nonatomic) BOOL handlingUserEvent; // @synthesize handlingUserEvent=_handlingUserEvent;
@property(nonatomic) BOOL draggingDeliveryGroup; // @synthesize draggingDeliveryGroup=_isDraggingDeliveryGroup;
- (void).cxx_destruct;
- (id)p_tableBackgroundColor;
- (id)p_highlightStrokeColor;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (BOOL)p_entireDeliveryGroupSelectedInMultipleDragForIndex:(unsigned long long)arg1 inDragRows:(id)arg2;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)updateTrackingAreas;
- (void)selectAll:(id)arg1;
- (void)reloadData;
- (void)keyDown:(id)arg1;
- (void)p_clearHandlingUserEventFlagAtEndOfRunLoop;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawDropIndicatorForRow:(long long)arg1 isLastRow:(BOOL)arg2;
- (void)scrollRowToVisible:(long long)arg1;
- (BOOL)canDragRowsWithIndexes:(id)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)p_isReadOnly;
- (void)dealloc;

@end

