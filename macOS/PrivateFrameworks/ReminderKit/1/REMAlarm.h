//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>

@class NSDate, NSString, REMAlarmTrigger, REMObjectID;

@interface REMAlarm : NSObject <REMObjectIDProviding, NSSecureCoding>
{
    REMAlarmTrigger *_trigger;
    REMObjectID *_objectID;
    NSDate *_acknowledgedDate;
    NSString *_alarmUID;
    NSString *_originalAlarmUID;
}

+ (BOOL)supportsSecureCoding;
+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
@property(retain, nonatomic) NSString *originalAlarmUID; // @synthesize originalAlarmUID=_originalAlarmUID;
@property(retain, nonatomic) NSString *alarmUID; // @synthesize alarmUID=_alarmUID;
@property(retain, nonatomic) NSDate *acknowledgedDate; // @synthesize acknowledgedDate=_acknowledgedDate;
@property(retain, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) REMAlarmTrigger *trigger; // @synthesize trigger=_trigger;
- (void).cxx_destruct;
- (BOOL)isSnooze;
- (BOOL)isOriginal;
- (BOOL)isAcknowledged;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAlarm:(id)arg1 objectID:(id)arg2;
- (id)initWithTrigger:(id)arg1;
- (id)initWithTrigger:(id)arg1 objectID:(id)arg2;
@property(readonly, nonatomic) REMObjectID *remObjectID;

@end

