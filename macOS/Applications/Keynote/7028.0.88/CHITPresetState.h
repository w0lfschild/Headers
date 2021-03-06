//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSSPropertyMap;

@interface CHITPresetState : NSObject
{
    unsigned long long mPresetIndex;
    unsigned long long mChartIndex;
    TSSPropertyMap *mChartPropertyMap;
    TSSPropertyMap *mLegendPropertyMap;
    NSMutableArray *mValueAxisPropertyMapArray;
    NSMutableArray *mCategoryAxisPropertyMapArray;
    NSMutableArray *mSeriesPropertyMapArray;
    NSMutableArray *mParagraphPropertyMapArray;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *paragraphPropertyMapArray; // @synthesize paragraphPropertyMapArray=mParagraphPropertyMapArray;
@property(readonly, nonatomic) NSMutableArray *seriesPropertyMapArray; // @synthesize seriesPropertyMapArray=mSeriesPropertyMapArray;
@property(readonly, nonatomic) NSMutableArray *categoryAxisPropertyMapArray; // @synthesize categoryAxisPropertyMapArray=mCategoryAxisPropertyMapArray;
@property(readonly, nonatomic) NSMutableArray *valueAxisPropertyMapArray; // @synthesize valueAxisPropertyMapArray=mValueAxisPropertyMapArray;
@property(retain, nonatomic) TSSPropertyMap *legendPropertyMap; // @synthesize legendPropertyMap=mLegendPropertyMap;
@property(retain, nonatomic) TSSPropertyMap *chartPropertyMap; // @synthesize chartPropertyMap=mChartPropertyMap;
- (unsigned long long)chartIndex;
- (unsigned long long)presetIndex;
- (BOOL)areWeImportingTheFirstChart;
- (void)advanceChartIndex;
- (id)initWithPresetIndex:(unsigned long long)arg1;

@end

