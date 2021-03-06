//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSWPDrawableAttachment;

@interface ICIWPChartAttachmentXPair : NSObject
{
    TSWPDrawableAttachment *mAttachment;
    double mX;
    unsigned long long mChartPageIndex;
    unsigned long long mLegendPageIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long legendPageIndex; // @synthesize legendPageIndex=mLegendPageIndex;
@property(readonly, nonatomic) unsigned long long chartPageIndex; // @synthesize chartPageIndex=mChartPageIndex;
@property(readonly, nonatomic) double x; // @synthesize x=mX;
@property(readonly, nonatomic) TSWPDrawableAttachment *attachment; // @synthesize attachment=mAttachment;
- (id)initWithLegendPageIndex:(unsigned long long)arg1;
- (id)initWithAttachment:(id)arg1 x:(double)arg2 pageIndex:(unsigned long long)arg3;

@end

