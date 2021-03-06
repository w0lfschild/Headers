//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDimensionSumCache, ICTableContentView, ICTableLayoutManager, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;
@protocol ICTableTextViewManagerDelegate;

@interface ICTableTextViewManager : NSObject
{
    BOOL _shouldHighlightAuthorEdits;
    BOOL _updatingTiles;
    id <ICTableTextViewManagerDelegate> _delegate;
    NSMutableArray *_columnIdentifiers;
    NSMutableArray *_rowIdentifiers;
    NSMutableSet *_prepopulatedColumns;
    NSMutableDictionary *_columnTextViews;
    ICTableLayoutManager *_tableLayoutManager;
    ICTableContentView *_contentView;
    ICDimensionSumCache *_cachedColumnWidths;
    ICDimensionSumCache *_cachedRowHeights;
    NSMutableDictionary *_cachedCellHeights;
    NSArray *_previousRowIdentifiers;
    NSMutableSet *_columnsNeedingRestyle;
    unsigned long long _anchorColumn;
    unsigned long long _anchorRow;
    NSSet *_draggedColumns;
    NSSet *_draggedRows;
    struct CGPoint _anchorPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *draggedRows; // @synthesize draggedRows=_draggedRows;
@property(retain, nonatomic) NSSet *draggedColumns; // @synthesize draggedColumns=_draggedColumns;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) unsigned long long anchorRow; // @synthesize anchorRow=_anchorRow;
@property(nonatomic) unsigned long long anchorColumn; // @synthesize anchorColumn=_anchorColumn;
@property(nonatomic, getter=isUpdatingTiles) BOOL updatingTiles; // @synthesize updatingTiles=_updatingTiles;
@property(nonatomic) BOOL shouldHighlightAuthorEdits; // @synthesize shouldHighlightAuthorEdits=_shouldHighlightAuthorEdits;
@property(retain, nonatomic) NSMutableSet *columnsNeedingRestyle; // @synthesize columnsNeedingRestyle=_columnsNeedingRestyle;
@property(retain, nonatomic) NSArray *previousRowIdentifiers; // @synthesize previousRowIdentifiers=_previousRowIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *cachedCellHeights; // @synthesize cachedCellHeights=_cachedCellHeights;
@property(readonly, nonatomic) ICDimensionSumCache *cachedRowHeights; // @synthesize cachedRowHeights=_cachedRowHeights;
@property(readonly, nonatomic) ICDimensionSumCache *cachedColumnWidths; // @synthesize cachedColumnWidths=_cachedColumnWidths;
@property(readonly, nonatomic) __weak ICTableContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) ICTableLayoutManager *tableLayoutManager; // @synthesize tableLayoutManager=_tableLayoutManager;
@property(readonly, nonatomic) NSMutableDictionary *columnTextViews; // @synthesize columnTextViews=_columnTextViews;
@property(readonly, nonatomic) NSMutableSet *prepopulatedColumns; // @synthesize prepopulatedColumns=_prepopulatedColumns;
@property(readonly, nonatomic) NSMutableArray *rowIdentifiers; // @synthesize rowIdentifiers=_rowIdentifiers;
@property(readonly, nonatomic) NSMutableArray *columnIdentifiers; // @synthesize columnIdentifiers=_columnIdentifiers;
@property(nonatomic) __weak id <ICTableTextViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)frameOfRow:(id)arg1;
- (struct CGRect)frameOfColumn:(id)arg1;
- (struct CGRect)frameOfCellAtColumn:(id)arg1 row:(id)arg2;
- (void)highlightTextViewIfNeeded:(id)arg1;
- (void)updateCellHighlightState:(BOOL)arg1;
- (void)restyleTextView:(id)arg1;
- (void)restyleCells;
- (void)parentViewDidChange;
- (id)textViewForColumn:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)textViewForColumn:(id)arg1;
- (id)rowContainingY:(double)arg1;
- (id)columnContainingX:(double)arg1;
- (BOOL)cellContainingPoint:(struct CGPoint)arg1 columnID:(id *)arg2 rowID:(id *)arg3;
- (void)moveRowAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)moveColumnAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeColumn:(id)arg1;
- (void)heightChangedForRow:(id)arg1 by:(double)arg2;
- (struct CGPoint)redrawAllWithViewport:(struct CGRect)arg1;
- (struct CGPoint)updateTilesWithViewport:(struct CGRect)arg1 redrawAll:(BOOL)arg2;
- (void)clearRowsOutsideFrame:(struct CGRect)arg1;
- (void)clearColumnsOutsideFrame:(struct CGRect)arg1;
- (void)clearRow:(id)arg1;
- (void)clearColumn:(id)arg1;
- (void)ensureCellPositionForColumn:(id)arg1 andRow:(id)arg2;
- (double)preAddRow:(id)arg1 atYPosition:(double)arg2;
- (double)ensureChunkOfPopulatedRowsForRow:(id)arg1 shouldForce:(BOOL)arg2;
- (double)addRow:(id)arg1 atEnd:(BOOL)arg2;
- (double)preAddColumn:(id)arg1;
- (double)ensureChunkOfPopulatedColumnsForColumn:(id)arg1;
- (double)addColumn:(id)arg1 atEnd:(BOOL)arg2;
- (void)validateRowHeightsForColumn:(id)arg1;
- (void)adjustOnscreenPositions;
- (void)enumerateTextViewsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *rowIDs;
@property(readonly, nonatomic) NSArray *columnIDs;
@property(readonly, nonatomic) struct CGRect boundingRect;
- (struct CGPoint)initialScrollPointForViewport:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithTableLayoutManager:(id)arg1 view:(id)arg2 cachedWidths:(id)arg3 cachedRowHeights:(id)arg4 cachedCellHeights:(id)arg5;
- (id)init;

@end

