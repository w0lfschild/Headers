//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitBackingStore/HMBLocalZoneQueryResult.h>

@class NSData, NSMutableSet;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultRecordIDSequence : HMBLocalZoneQueryResult
{
    NSData *_currentSequenceAsData;
    NSData *_lastReturnedSequence;
    NSMutableSet *_returnedIDs;
}

@property(retain, nonatomic) NSMutableSet *returnedIDs; // @synthesize returnedIDs=_returnedIDs;
@property(retain, nonatomic) NSData *lastReturnedSequence; // @synthesize lastReturnedSequence=_lastReturnedSequence;
@property(retain, nonatomic) NSData *currentSequenceAsData; // @synthesize currentSequenceAsData=_currentSequenceAsData;
- (void).cxx_destruct;
- (id)fetchRow:(id)arg1 error:(id *)arg2;
- (id)initWithLocalZone:(id)arg1 statement:(id)arg2 initialSequence:(id)arg3 sequenceBindOffset:(unsigned long long)arg4 arguments:(id)arg5 maximumRowsPerSelect:(unsigned long long)arg6;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 currentSequence:(id)arg2 error:(id *)arg3;
- (id)fetchRowFromStatement:(struct sqlite3_stmt *)arg1 skip:(char *)arg2 updatedSequenceColumn:(id *)arg3 error:(id *)arg4;
- (id)nextObject;

@end

