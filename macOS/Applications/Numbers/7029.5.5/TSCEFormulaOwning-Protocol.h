//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSCECalculationEngine, TSCEFormulaRewriteSpec, TSCEGroupByChange, TSKCommand;
@protocol TSCEReferenceResolving;

@protocol TSCEFormulaOwning <NSObject>
- (void)resetFormulasForCellRefs:(const struct TSCECellRefSet *)arg1 calcEngine:(TSCECalculationEngine *)arg2;
- (TSKCommand *)commandForRewritingForGroupByChange:(TSCEGroupByChange *)arg1;
- (TSKCommand *)commandForRewritingFormulas:(TSCEFormulaRewriteSpec *)arg1 calcEngine:(TSCECalculationEngine *)arg2;
- (void)amendRewriteSpec:(TSCEFormulaRewriteSpec *)arg1 withPostCellRefs:(const struct TSCECellRefSet *)arg2 calcEngine:(TSCECalculationEngine *)arg3;
- (void)prepareRewriteSpec:(TSCEFormulaRewriteSpec *)arg1 withPreCellRefs:(const struct TSCECellRefSet *)arg2 calcEngine:(TSCECalculationEngine *)arg3;
- (UUIDData_5fbc143e)ownerUID;
- (void)invalidateForCalcEngine:(TSCECalculationEngine *)arg1;
- (void)writeResultsForCalcEngine:(TSCECalculationEngine *)arg1;
- (long long)evaluationMode;
- (id <TSCEReferenceResolving>)linkedResolver;
- (unsigned short)ownerKind;

@optional
- (struct TSCERecalculationState)multiEvaluateFormulasAt:(const struct TSCECellCoordSet *)arg1 withCalcEngine:(TSCECalculationEngine *)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
- (struct TSCERecalculationState)evaluateFormulaAt:(struct TSUCellCoord)arg1 withCalcEngine:(TSCECalculationEngine *)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
@end

