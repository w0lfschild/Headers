//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultBlur : SCRCPhotoEvaluatorResult
{
    double _blurLevel;
}

@property(readonly, nonatomic) double blurLevel; // @synthesize blurLevel=_blurLevel;
- (id)humanReadableResult;
- (id)initWithBlurLevel:(double)arg1;

@end

