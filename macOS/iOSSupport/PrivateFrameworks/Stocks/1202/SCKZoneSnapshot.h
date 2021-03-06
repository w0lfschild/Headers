//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneReading-Protocol.h>

@class NSArray, SCKZoneSchema;

@interface SCKZoneSnapshot : NSObject <SCKZoneReading>
{
    SCKZoneSchema *_zoneSchema;
    NSArray *_records;
}

@property(copy, nonatomic) NSArray *records; // @synthesize records=_records;
@property(retain, nonatomic) SCKZoneSchema *zoneSchema; // @synthesize zoneSchema=_zoneSchema;
- (void).cxx_destruct;
- (id)descriptionOfContents;
- (id)recordWithName:(id)arg1;
- (id)recordOfType:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)recordOfType:(id)arg1;
- (id)recordsOfType:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allRecords;
- (BOOL)isEqualToSnapshot:(id)arg1;
- (id)initWithZoneSchema:(id)arg1 records:(id)arg2;

@end

