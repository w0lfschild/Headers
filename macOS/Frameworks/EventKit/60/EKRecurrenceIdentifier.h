//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKRecurrenceIdentifierProtocol.h"

@class NSDate, NSString;

@interface EKRecurrenceIdentifier : NSObject <EKRecurrenceIdentifierProtocol>
{
    NSString *_localUID;
    NSDate *_recurrenceDateUnadjustedFromUTC;
    NSString *_identifierString;
}

+ (id)_recurrenceStringForDate:(id)arg1 stripTime:(BOOL)arg2 stripTimeZone:(BOOL)arg3;
+ (id)_recurrenceIdentifierWithRecurrenceDate:(id)arg1 localUID:(id)arg2 stripTime:(BOOL)arg3 stripTimeZone:(BOOL)arg4;
+ (BOOL)_splitIdentifier:(id)arg1 intoLocalUID:(id *)arg2 recurrenceDate:(id *)arg3;
+ (const char *)_dateFormatStripTime:(BOOL)arg1 stripTimeZone:(BOOL)arg2;
+ (id)localUIDForIdentifierString:(id)arg1;
+ (id)_recurrenceIdentifierForOccurrence:(id)arg1;
+ (id)recurrenceIdentifierForItem:(id)arg1;
+ (id)recurrenceIdentifierWithString:(id)arg1;
+ (id)recurrenceIdentifierWithLocalUID:(id)arg1 recurrenceDate:(id)arg2;
@property(retain, nonatomic) NSString *identifierString; // @synthesize identifierString=_identifierString;
@property(retain) NSDate *recurrenceDateUnadjustedFromUTC; // @synthesize recurrenceDateUnadjustedFromUTC=_recurrenceDateUnadjustedFromUTC;
@property(retain) NSString *localUID; // @synthesize localUID=_localUID;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

