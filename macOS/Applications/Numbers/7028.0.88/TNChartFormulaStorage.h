//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSMutableDictionary;

@interface TNChartFormulaStorage : NSObject <GSSPAutoEncodable, NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_storage;
    int _direction;
    unsigned long long _cachedNumberOfGroups;
    BOOL _cachedNumberOfGroupsValid;
}

+ (vector_2bba1c52)persistentFormulaTypes;
- (void).cxx_destruct;
- (id)areaFormulaWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
-     // Error parsing type: v32@0:8^{ChartMediatorFormulaStorage=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}i}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{ChartMediatorFormulaStorage=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}i}16@24, name: initWithArchive:unarchiver:
- (void)clearCachesForCalculationEngine:(id)arg1;
- (BOOL)dataFormulaAreRegularForSeriesInsertionWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
@property(readonly, nonatomic) unsigned long long categoryLabelFormulaType;
@property(readonly, nonatomic) unsigned long long seriesLabelFormulaType;
- (unsigned long long)numberOfSeries;
@property(readonly, nonatomic) unsigned long long numberOfDataFormulas;
- (BOOL)labelFormulasAreAllStaticWithCalcEngine:(id)arg1 inEntity:(const UUIDData_5fbc143e *)arg2;
- (BOOL)formulasOfType:(unsigned long long)arg1 areAllStaticWithCalcEngine:(id)arg2 inEntity:(const UUIDData_5fbc143e *)arg3;
- (unsigned long long)numberOfTotalCategoryLabelsWithCalcEngine:(id)arg1 inEntity:(const UUIDData_5fbc143e *)arg2;
- (unsigned long long)numberOfGroupsWithCalcEngine:(id)arg1 inEntity:(const UUIDData_5fbc143e *)arg2;
- (unsigned long long)p_calculateNumberOfGroupsWithCalcEngine:(id)arg1 inEntity:(const UUIDData_5fbc143e *)arg2;
- (id)description;
- (id)formulaTypeEnumerator;
- (id)formulaListForType:(unsigned long long)arg1;
- (id)formulaForID:(struct TSUCellCoord)arg1;
- (id)copyByRewriting:(BOOL)arg1 withCalcEngine:(id)arg2 andHostUID:(const UUIDData_5fbc143e *)arg3;
- (id)referencedEntitiesWithCalcEngine:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (BOOL)isEqualToFormulaStorage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int direction;
- (id)initWithChartFormulaStorage:(id)arg1;
- (id)initWithDirection:(int)arg1;
- (id)init;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPNumbersChartFormulaStorage:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

