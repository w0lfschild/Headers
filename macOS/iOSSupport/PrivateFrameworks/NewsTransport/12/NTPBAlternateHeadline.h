//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBAlternateHeadline : PBCodable <NSCopying>
{
    int _articleHeadlineTreatmentId;
    int _articleHeadlineTreatmentState;
    CDStruct_762d0caf _has;
}

@property(nonatomic) int articleHeadlineTreatmentId; // @synthesize articleHeadlineTreatmentId=_articleHeadlineTreatmentId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasArticleHeadlineTreatmentId;
@property(nonatomic) BOOL hasArticleHeadlineTreatmentState;
@property(nonatomic) int articleHeadlineTreatmentState; // @synthesize articleHeadlineTreatmentState=_articleHeadlineTreatmentState;

@end

