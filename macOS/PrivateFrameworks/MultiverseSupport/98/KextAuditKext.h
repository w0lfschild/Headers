//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MultiverseSupport/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface KextAuditKext : NSObject <NSSecureCoding>
{
    NSData *_cdHash;
    NSData *_bundleIDHash;
    NSString *_teamID;
    NSString *_version;
}

+ (id)kextWithCDHash:(id)arg1 andBundleIDHash:(id)arg2 andTeamID:(id)arg3 andVersion:(id)arg4;
+ (BOOL)supportsSecureCoding;
@property(retain) NSString *version; // @synthesize version=_version;
@property(retain) NSString *teamID; // @synthesize teamID=_teamID;
@property(retain) NSData *bundleIDHash; // @synthesize bundleIDHash=_bundleIDHash;
@property(retain) NSData *cdHash; // @synthesize cdHash=_cdHash;
- (void).cxx_destruct;
- (_Bool)xpcDictionary:(id *)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCDHash:(id)arg1 andBundleIDHash:(id)arg2 andTeamID:(id)arg3 andVersion:(id)arg4;

@end

