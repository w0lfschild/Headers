//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackIdLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _feedbackComponentTypes;
    NSMutableArray *_feedbackIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_feedbackComponentTypes:1;
        unsigned int read_feedbackIds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_feedbackComponentTypes:1;
        unsigned int wrote_feedbackIds:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)feedbackIdType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsFeedbackComponentTypes:(id)arg1;
- (id)feedbackComponentTypesAsString:(int)arg1;
- (void)setFeedbackComponentTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)feedbackComponentTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsFeedbackComponentType:(int)arg1;
- (void)addFeedbackComponentType:(int)arg1;
- (void)clearFeedbackComponentTypes;
@property(readonly, nonatomic) int *feedbackComponentTypes;
@property(readonly, nonatomic) unsigned long long feedbackComponentTypesCount;
- (void)_readFeedbackComponentTypes;
- (id)feedbackIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackIdsCount;
- (void)_addNoFlagsFeedbackId:(id)arg1;
- (void)addFeedbackId:(id)arg1;
- (void)clearFeedbackIds;
@property(retain, nonatomic) NSMutableArray *feedbackIds;
- (void)_readFeedbackIds;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

