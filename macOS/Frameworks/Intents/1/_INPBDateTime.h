//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields, _INPBLocalDate, _INPBLocalTime;

@interface _INPBDateTime : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _calendarSystem;
    _INPBLocalDate *_date;
    _INPBLocalTime *_time;
    NSString *_timeZoneID;
    struct {
        unsigned int calendarSystem:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) NSString *timeZoneID; // @synthesize timeZoneID=_timeZoneID;
@property(retain, nonatomic) _INPBLocalTime *time; // @synthesize time=_time;
@property(retain, nonatomic) _INPBLocalDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsCalendarSystem:(id)arg1;
- (id)calendarSystemAsString:(int)arg1;
@property(nonatomic) BOOL hasCalendarSystem;
@property(nonatomic) int calendarSystem; // @synthesize calendarSystem=_calendarSystem;
@property(readonly, nonatomic) BOOL hasTimeZoneID;
@property(readonly, nonatomic) BOOL hasTime;
@property(readonly, nonatomic) BOOL hasDate;

@end

