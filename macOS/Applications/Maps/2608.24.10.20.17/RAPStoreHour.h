//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GEOPDHours, GEORPFeedbackBusinessHours, NSArray, NSDate, NSMutableArray;

__attribute__((visibility("hidden")))
@interface RAPStoreHour : NSObject <NSCopying>
{
    NSMutableArray *_mutableDaysOpen;
    id _observer;
    CDUnknownBlockType _changeHandler;
    GEOPDHours *_shadowHours;
    BOOL _open24Hours;
    NSDate *_startDate;
    NSDate *_endDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) BOOL open24Hours; // @synthesize open24Hours=_open24Hours;
- (void)notifyObserver;
- (void)clearObserver;
- (void)setObserver:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) GEORPFeedbackBusinessHours *businessHours;
- (BOOL)isSubmittable;
- (BOOL)containsDay:(int)arg1;
- (void)toggleDay:(int)arg1;
@property(readonly, nonatomic) NSArray *daysOpen;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPlaceDailyHours:(id)arg1;
- (id)init;

@end

