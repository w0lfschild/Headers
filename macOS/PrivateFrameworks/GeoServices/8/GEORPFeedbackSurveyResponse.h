//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackSurveyResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSString *_optionDescription;
    NSString *_optionId;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_optionDescription:1;
        unsigned int read_optionId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_optionDescription:1;
        unsigned int wrote_optionId:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(retain, nonatomic) NSString *optionDescription;
@property(readonly, nonatomic) BOOL hasOptionDescription;
- (void)_readOptionDescription;
@property(retain, nonatomic) NSString *optionId;
@property(readonly, nonatomic) BOOL hasOptionId;
- (void)_readOptionId;

@end

