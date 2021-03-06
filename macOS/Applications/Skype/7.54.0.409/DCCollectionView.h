//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "NSDraggingSource-Protocol.h"

@class LazyGridLayoutManager, NSArray, NSCollectionViewItem, NSColor, NSEvent, NSIndexSet, NSMutableDictionary, NSMutableSet, NSString, NSTimer;
@protocol DCCollectionViewDelegate;

@interface DCCollectionView : NSView <CAAnimationDelegate, NSDraggingSource>
{
    NSTimer *_clickTimer;
    BOOL _isFirstResponder;
    NSMutableDictionary *_itemPrototypes;
    BOOL _mapNeedsRebuild;
    NSTimer *_reusableViewControllersTimer;
    double _updatedSubviewsTimestamp;
    BOOL _selectable;
    BOOL _allowsMultipleSelection;
    BOOL _allowsScrollingSelectionVisible;
    id <DCCollectionViewDelegate> _delegate;
    NSArray *_content;
    NSCollectionViewItem *_itemPrototype;
    id _target;
    SEL _action;
    SEL _doubleAction;
    NSColor *_keyHighlightColor;
    NSColor *_nonKeyHighlightColor;
    NSMutableDictionary *_contentToViewControllerMap;
    NSMutableSet *_reusableViewControllers;
    NSIndexSet *_internalSelectionIndexes;
    long long _activeSelectionAnchor;
    long long _activeSelectionEnd;
    long long _lastSelectedIndex;
    LazyGridLayoutManager *_layoutManager;
    NSEvent *_mouseDownEvent;
}

+ (id)defaultBackgroundColor;
+ (Class)layoutManagerClass;
+ (void)initialize;
@property(retain, nonatomic) NSEvent *mouseDownEvent; // @synthesize mouseDownEvent=_mouseDownEvent;
@property(readonly, nonatomic) LazyGridLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(nonatomic) long long lastSelectedIndex; // @synthesize lastSelectedIndex=_lastSelectedIndex;
@property(nonatomic) long long activeSelectionEnd; // @synthesize activeSelectionEnd=_activeSelectionEnd;
@property(nonatomic) long long activeSelectionAnchor; // @synthesize activeSelectionAnchor=_activeSelectionAnchor;
@property(copy, nonatomic) NSIndexSet *internalSelectionIndexes; // @synthesize internalSelectionIndexes=_internalSelectionIndexes;
@property(readonly, nonatomic) NSMutableSet *reusableViewControllers; // @synthesize reusableViewControllers=_reusableViewControllers;
@property(readonly, nonatomic) NSMutableDictionary *contentToViewControllerMap; // @synthesize contentToViewControllerMap=_contentToViewControllerMap;
@property(copy, nonatomic) NSColor *nonKeyHighlightColor; // @synthesize nonKeyHighlightColor=_nonKeyHighlightColor;
@property(copy, nonatomic) NSColor *keyHighlightColor; // @synthesize keyHighlightColor=_keyHighlightColor;
@property(nonatomic) SEL doubleAction; // @synthesize doubleAction=_doubleAction;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSCollectionViewItem *itemPrototype; // @synthesize itemPrototype=_itemPrototype;
@property(nonatomic) BOOL allowsScrollingSelectionVisible; // @synthesize allowsScrollingSelectionVisible=_allowsScrollingSelectionVisible;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property(copy, nonatomic) NSArray *content; // @synthesize content=_content;
@property(nonatomic) __weak id <DCCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseDragged:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)_modifySelectionWithNewIndex:(long long)arg1 direction:(BOOL)arg2 extend:(BOOL)arg3;
- (long long)_startIndexForKeyboardMove;
- (void)cancelOperation:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)keyDown:(id)arg1;
- (struct CGRect)unionFrameForViewItems:(id)arg1;
- (id)visibleSelectedViewItems;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)clickTimerFired:(id)arg1;
- (void)clearClickTimer;
- (void)startClickTimerWithEvent:(id)arg1;
- (void)handleSingleClick:(id)arg1;
- (void)updateSelectionForMouseClick:(id)arg1;
@property(readonly, nonatomic) id clickedObject;
- (id)itemUnderMouse:(id)arg1;
- (void)_clearSelection;
- (void)_highlightSelection:(BOOL)arg1;
- (void)_addItemAtIndexToSelection:(unsigned long long)arg1;
- (void)_extendSelectionToItemAtIndex:(unsigned long long)arg1;
- (void)_selectItemAtIndex:(unsigned long long)arg1;
@property(copy, nonatomic) NSIndexSet *selectionIndexes;
- (void)_setInternalSelection:(id)arg1 anchor:(unsigned long long)arg2 end:(unsigned long long)arg3 last:(unsigned long long)arg4;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleItemPrototypeChanged;
- (void)handleContentChanged:(id)arg1;
- (void)handleSelectionChanged;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)scrollToShowRect:(struct CGRect)arg1 animate:(BOOL)arg2;
- (void)finalizeAnimatedScroll;
- (struct CGPoint)prepareForAnimatedScrollToPoint:(struct CGPoint)arg1;
- (void)scrollToShowItemAtIndex:(unsigned long long)arg1 animate:(BOOL)arg2;
- (id)scrollAnimationFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (void)reloadData;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)updateFrame:(struct CGRect)arg1 forItem:(id)arg2;
- (void)didDisplayItem:(id)arg1;
- (void)willDisplayItem:(id)arg1;
@property(readonly, nonatomic) struct CGRect documentVisibleRect;
- (void)resetPreparedContentRect;
- (void)viewWillDraw;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (void)clearReusableViewControllers;
- (void)clearReusableViewControllersAfterDelay:(double)arg1;
- (void)updateSubviewsWithRect:(struct CGRect)arg1;
- (id)makeCollectionViewItemForContentItem:(id)arg1;
- (void)willUpdateSubviewsAtIndexes:(id)arg1;
- (id)prototypeForContentItem:(id)arg1;
- (id)prototypeForContentIdentifier:(id)arg1;
- (id)registeredContentIdentifiers;
- (struct CGRect)frameForItemAtIndex:(unsigned long long)arg1;
- (void)setViewItem:(id)arg1 forContentItemAtIndex:(unsigned long long)arg2;
- (id)viewItemForContentItemAtIndex:(unsigned long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)windowKeyStateDidChange:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setPrototype:(id)arg1 forContentIdentifier:(id)arg2;
@property(nonatomic) unsigned long long maxNumberOfColumns;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(nonatomic) BOOL autoresizesColumns;
@property(nonatomic) BOOL isFirstResponder;
@property(nonatomic) struct CGSize interItemSpacing;
@property(nonatomic) struct CGSize contentViewMargins;
- (BOOL)animateInSlowMotion;
- (id)menuForEvent:(id)arg1;
- (void)prepareMenu:(id)arg1 forItem:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)canBecomeKeyView;
- (BOOL)acceptsFirstResponder;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

