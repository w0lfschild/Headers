//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SXLayoutOptions;

@interface SXLayoutParameters : NSObject
{
    SXLayoutOptions *_layoutOptions;
    unsigned long long _layoutType;
    double _expectedDuration;
}

@property(readonly, nonatomic) double expectedDuration; // @synthesize expectedDuration=_expectedDuration;
@property(readonly, nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, nonatomic) SXLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLayoutOptions:(id)arg1 layoutType:(unsigned long long)arg2 expectedDuration:(double)arg3;

@end

