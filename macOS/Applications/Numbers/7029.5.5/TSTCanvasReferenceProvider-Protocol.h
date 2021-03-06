//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexSet, NSSet, TSCEWrappedRangeRef, TSDDrawableInfo, TSTCanvasReference, TSTCanvasReferenceIdentifier, TSTCellRegion, TSTTableInfo;
@protocol TSTCanvasReferenceController;

@protocol TSTCanvasReferenceProvider <NSObject>
@property(readonly, nonatomic) BOOL supportsStickyReferences;
- (BOOL)isEditingDrawable:(TSDDrawableInfo *)arg1;
- (id <TSTCanvasReferenceController>)canvasReferenceController;
- (void)endEditing;
- (void)endEditingReference:(TSTCanvasReferenceIdentifier *)arg1;
- (void)startEditingReference:(TSTCanvasReferenceIdentifier *)arg1;
- (TSTCanvasReference *)editingCanvasReferenceForRange:(TSCEWrappedRangeRef *)arg1;
- (TSTCellRegion *)subregionForReference:(TSTCanvasReferenceIdentifier *)arg1 range:(TSCEWrappedRangeRef *)arg2;
- (TSCEWrappedRangeRef *)resizeReference:(TSTCanvasReferenceIdentifier *)arg1 toRange:(TSCEWrappedRangeRef *)arg2;
- (TSCEWrappedRangeRef *)moveReference:(TSTCanvasReferenceIdentifier *)arg1 toRange:(TSCEWrappedRangeRef *)arg2;
- (NSSet *)references;
- (int)editingType;

@optional
@property(readonly, nonatomic) BOOL tapOutsideOfTableEndsReferenceEditing;
- (void)endEditingWithDoubleTapAtCanvasPoint:(struct CGPoint)arg1;
- (void)setSelectedSeriesIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)selectedSeriesIndexes;
- (void)menuForSeries:(long long)arg1 inTable:(TSTTableInfo *)arg2 canvasPoint:(struct CGPoint)arg3;
@end

