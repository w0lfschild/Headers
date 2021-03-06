//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAManagedLocalIDObject.h"

@class FBABugForm, FBAUser, NSArray, NSNumber, NSSet, NSString;

@interface FBABugFormStub : FBAManagedLocalIDObject
{
}

+ (id)uniquingKey;
+ (id)entityName;
+ (id)sortDescriptor;
+ (id)bugFormStubsMatchingBuild:(id)arg1 withStubs:(id)arg2;
+ (id)bugFormStubsMatchingBuild:(id)arg1 forPlatform:(id)arg2 withStubs:(id)arg3;
+ (id)fetchRequest;
@property(readonly, nonatomic) NSSet *teamsMatchingFormID;
@property(readonly, nonatomic) NSSet *stubsWithMatchingID;
- (id)preferredTeamForStubPreferringTeam:(id)arg1;
- (id)signatureDescription;
- (void)setPropertiesFromJSONObject:(id)arg1;

// Remaining properties
@property(retain, nonatomic) FBABugForm *bugForm; // @dynamic bugForm;
@property(copy, nonatomic) NSString *buildPrefix; // @dynamic buildPrefix;
@property(nonatomic) BOOL forcePicker; // @dynamic forcePicker;
@property(copy, nonatomic) NSString *formDescription; // @dynamic formDescription;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *platform; // @dynamic platform;
@property(retain, nonatomic) NSArray *pluginIDs; // @dynamic pluginIDs;
@property(copy, nonatomic) NSNumber *priority; // @dynamic priority;
@property(retain, nonatomic) NSSet *programs; // @dynamic programs;
@property(copy, nonatomic) NSNumber *remoteID; // @dynamic remoteID;
@property(copy, nonatomic) NSNumber *serverID; // @dynamic serverID;
@property(copy, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) NSSet *teams; // @dynamic teams;
@property(retain, nonatomic) FBAUser *user; // @dynamic user;

@end

