//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSSecureCoding.h"

@class NSData, NSNumber, NSString, NSUUID;

@interface HAPBLEPeripheralInfo : HMFObject <NSSecureCoding>
{
    NSUUID *_peripheralUUID;
    unsigned long long _advertisedProtocolVersion;
    unsigned long long _previousProtocolVersion;
    unsigned long long _resumeSessionId;
    double _lastSeen;
    NSNumber *_statusFlags;
    NSNumber *_stateNumber;
    NSNumber *_configNumber;
    NSNumber *_categoryIdentifier;
    NSString *_accessoryName;
    NSData *_broadcastKey;
    double _keyUpdatedTime;
    NSNumber *_keyUpdatedStateNumber;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *keyUpdatedStateNumber; // @synthesize keyUpdatedStateNumber=_keyUpdatedStateNumber;
@property(nonatomic) double keyUpdatedTime; // @synthesize keyUpdatedTime=_keyUpdatedTime;
@property(retain, nonatomic) NSData *broadcastKey; // @synthesize broadcastKey=_broadcastKey;
@property(retain, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(readonly, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly, nonatomic) NSNumber *configNumber; // @synthesize configNumber=_configNumber;
@property(retain, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(readonly, nonatomic) NSNumber *statusFlags; // @synthesize statusFlags=_statusFlags;
@property(readonly, nonatomic) double lastSeen; // @synthesize lastSeen=_lastSeen;
@property(nonatomic) unsigned long long resumeSessionId; // @synthesize resumeSessionId=_resumeSessionId;
@property(nonatomic) unsigned long long previousProtocolVersion; // @synthesize previousProtocolVersion=_previousProtocolVersion;
@property(nonatomic) unsigned long long advertisedProtocolVersion; // @synthesize advertisedProtocolVersion=_advertisedProtocolVersion;
@property(readonly, nonatomic) NSUUID *peripheralUUID; // @synthesize peripheralUUID=_peripheralUUID;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateAccessoryName:(id)arg1;
- (void)updateBroadcastKey:(id)arg1;
- (void)saveBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 updatedTime:(double)arg3;
- (void)updateStateNumber:(id)arg1;
- (void)updateResumeSessionId:(unsigned long long)arg1;
- (void)updateProtocolVersion:(unsigned long long)arg1;
- (id)initWithPeripheralInfo:(id)arg1 advertisedProtocolVersion:(unsigned long long)arg2 previousProtocolVersion:(long long)arg3 resumeSessionId:(unsigned long long)arg4 lastSeen:(double)arg5 statusFlags:(id)arg6 stateNumber:(id)arg7 configNumber:(id)arg8 categoryIdentifier:(id)arg9 accessoryName:(id)arg10;

@end

