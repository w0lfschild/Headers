//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOABClientConfig, GEOABExperimentAssignment, GEOAbAssignInfo, GEOPDDatasetABStatus, PBDataReader;

@interface GEOLogMsgStateExperiments : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOAbAssignInfo *_abAssignInfo;
    GEOABClientConfig *_clientAbExperimentAssignment;
    GEOPDDatasetABStatus *_datasetAbStatus;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_abAssignInfo:1;
        unsigned int read_clientAbExperimentAssignment:1;
        unsigned int read_datasetAbStatus:1;
        unsigned int read_tilesAbExperimentAssignment:1;
        unsigned int wrote_abAssignInfo:1;
        unsigned int wrote_clientAbExperimentAssignment:1;
        unsigned int wrote_datasetAbStatus:1;
        unsigned int wrote_tilesAbExperimentAssignment:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
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
@property(retain, nonatomic) GEOAbAssignInfo *abAssignInfo;
@property(readonly, nonatomic) BOOL hasAbAssignInfo;
- (void)_readAbAssignInfo;
@property(retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property(readonly, nonatomic) BOOL hasDatasetAbStatus;
- (void)_readDatasetAbStatus;
@property(retain, nonatomic) GEOABClientConfig *clientAbExperimentAssignment;
@property(readonly, nonatomic) BOOL hasClientAbExperimentAssignment;
- (void)_readClientAbExperimentAssignment;
@property(retain, nonatomic) GEOABExperimentAssignment *tilesAbExperimentAssignment;
@property(readonly, nonatomic) BOOL hasTilesAbExperimentAssignment;
- (void)_readTilesAbExperimentAssignment;
- (id)initWithData:(id)arg1;
- (id)init;

@end

