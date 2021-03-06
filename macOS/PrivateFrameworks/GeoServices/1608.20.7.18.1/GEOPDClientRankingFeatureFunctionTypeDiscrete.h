//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureFunctionTypeDiscrete : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    float _featureValueThresholdHigh;
    float _featureValueThresholdLow;
    float _featureWeightHigh;
    float _featureWeightLow;
    struct {
        unsigned int has_featureValueThresholdHigh:1;
        unsigned int has_featureValueThresholdLow:1;
        unsigned int has_featureWeightHigh:1;
        unsigned int has_featureWeightLow:1;
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
@property(nonatomic) BOOL hasFeatureWeightHigh;
@property(nonatomic) float featureWeightHigh;
@property(nonatomic) BOOL hasFeatureValueThresholdHigh;
@property(nonatomic) float featureValueThresholdHigh;
@property(nonatomic) BOOL hasFeatureWeightLow;
@property(nonatomic) float featureWeightLow;
@property(nonatomic) BOOL hasFeatureValueThresholdLow;
@property(nonatomic) float featureValueThresholdLow;

@end

