//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSDraggingSource.h"

@class CPKCharactersView, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface CPKCharactersSectionView : NSView <NSDraggingSource>
{
    long long _section;
    BOOL _allowFallbackInSection;
    long long _charactersCount;
    unsigned long long _parentDataGeneration;
    unsigned long long _ownerChangedCount;
    NSObject<OS_dispatch_queue> *_fallbackTaskQueue;
    long long _popupTargetIndex;
    struct CGPoint _lastMouseDownLocation;
    BOOL _highlightedByMouse;
    BOOL _editable;
    long long _dropTargetIndex;
    CPKCharactersView *_parentCharactersView;
    long long _selectedIndex;
}

@property long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly) CPKCharactersView *parentCharactersView; // @synthesize parentCharactersView=_parentCharactersView;
- (struct CGRect)_dropTargetFrame;
- (void)_clearDropTargetIndicator;
- (id)_dragImageForCurrentSelection;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)isFlipped;
- (id)_findNewFontsForCells:(id)arg1 baseFont:(id)arg2 fallbackType:(long long)arg3;
- (void)_startFontFallbackTask:(id)arg1;
- (struct CGPoint)_drawingPosOfGlyph:(unsigned short)arg1 inFrame:(struct CGRect)arg2 font:(id)arg3 newFontSize:(double *)arg4;
- (void)_drawCells:(id)arg1;
- (long long)_fillCellDrawingInfo:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)_characterDescriptionAtIndex:(long long)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (id)menuForEvent:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)_delayedShowSkinToneVariantsPopup;
- (void)mouseDown:(id)arg1;
- (void)_confirmSelectedSkinToneVariant:(id)arg1;
- (void)showSkinToneVariantsPopupAtIndex:(long long)arg1 byMouse:(BOOL)arg2;
- (id)characterAtIndex:(long long)arg1 withSpecificFont:(id *)arg2;
- (void)confirmCurrentSelection;
- (void)highlightIndex:(long long)arg1 byMouse:(BOOL)arg2;
- (BOOL)index:(long long *)arg1 atPoint:(struct CGPoint)arg2;
- (struct CGRect)frameRectAtIndex:(long long)arg1 withDrawingRect:(struct CGRect *)arg2;
- (struct CGRect)_drawingRectAtIndex:(long long)arg1;
- (void)setParentCharactersView:(id)arg1 section:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)_columnCount;
- (long long)_rowCount;
- (BOOL)_visibleFirstIndex:(long long *)arg1 lastIndex:(long long *)arg2;
- (id)_axChildrenInRange:(struct _NSRange)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)firstAXElement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

