//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, VCPVideoMetaMotionSegment;

@interface VCPVideoMetaMotionAnalyzer : NSObject
{
    struct HinkleyDetector _hinkleyDetector;
    VCPVideoMetaMotionSegment *_activeSegment;
    NSMutableArray *_mutableResults;
    NSMutableArray *_internalResults;
    CDStruct_e83c9415 _frameTimeRange;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSArray *results;
- (int)finalizeAnalysis;
- (void)mergeSimilarSegments;
- (int)processFrameMetadata:(id)arg1;
- (BOOL)decideSegmentPointBasedOn:(float)arg1;
- (id)init;

@end

