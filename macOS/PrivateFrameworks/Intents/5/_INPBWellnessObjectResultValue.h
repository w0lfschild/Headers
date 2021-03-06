//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBWellnessObjectResultValue.h"

@class NSArray, NSString, _INPBDateTimeRange, _INPBString;

@interface _INPBWellnessObjectResultValue : PBCodable <_INPBWellnessObjectResultValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int resultType:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _resultType;
    _INPBDateTimeRange *_recordDate;
    _INPBString *_unit;
    NSArray *_values;
}

+ (BOOL)supportsSecureCoding;
+ (Class)valuesType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) _INPBString *unit; // @synthesize unit=_unit;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) _INPBDateTimeRange *recordDate; // @synthesize recordDate=_recordDate;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)valuesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValues:(id)arg1;
- (void)clearValues;
@property(readonly, nonatomic) BOOL hasUnit;
- (int)StringAsResultType:(id)arg1;
- (id)resultTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasResultType;
@property(readonly, nonatomic) BOOL hasRecordDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

