//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface iTermStatusBarTimeSeries : NSObject
{
    NSArray *_values;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) long long count;
- (id)timeSeriesWithLastN:(long long)arg1;
- (id)initWithValues:(id)arg1;

@end

