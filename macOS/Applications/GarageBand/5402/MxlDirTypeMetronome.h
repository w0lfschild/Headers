//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MxlDirType.h"

@interface MxlDirTypeMetronome : MxlDirType
{
    int beat_unit;
    long long per_minute;
    long long numDots;
}

- (id)description;
- (void)xmlDebugDirectionTypeElem:(id)arg1;
- (void)xmlCreateDirectionTypeData:(id)arg1;
- (long long)metronomeTempo;
- (BOOL)placeAbove;
- (BOOL)needsStaff;
- (id)dirTypeName;
- (void)dealloc;
- (id)initWithTempoLencode:(int)arg1 tempoDots:(long long)arg2 perMinute:(long long)arg3;

@end

