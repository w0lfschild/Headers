//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCHChartAbstractAreaLayoutItem.h"

@class TSCHChartBodyLayoutItem, TSCHChartDataSetNameLayoutItem, TSCHChartTitleLayoutItem;

@interface TSCH2DChartAbstractAreaLayoutItem : TSCHChartAbstractAreaLayoutItem
{
    TSCHChartTitleLayoutItem *mTitleElement;
    TSCHChartDataSetNameLayoutItem *mDataSetNameElement;
    TSCHChartBodyLayoutItem *mChartBody;
}

@property(readonly, nonatomic) TSCHChartBodyLayoutItem *bodyLayoutItem; // @synthesize bodyLayoutItem=mChartBody;
- (void).cxx_destruct;
- (struct CGRect)i_currentBufferAreaUnitRect;
- (void)setChartBodyLayoutSize:(struct CGSize)arg1;
- (struct CGRect)chartBodyLayoutRect;

@end

