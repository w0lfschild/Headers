//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBHomeAttributeRange.h"

@class NSString;

@interface _INPBHomeAttributeRange : PBCodable <_INPBHomeAttributeRange, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int lowerValue:1;
        unsigned int upperValue:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    double _lowerValue;
    double _upperValue;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) double upperValue; // @synthesize upperValue=_upperValue;
@property(nonatomic) double lowerValue; // @synthesize lowerValue=_lowerValue;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasUpperValue;
@property(nonatomic) BOOL hasLowerValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

