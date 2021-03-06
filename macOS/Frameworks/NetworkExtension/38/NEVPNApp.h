//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEVPN.h>

@class NSArray;

@interface NEVPNApp : NEVPN
{
    BOOL _noRestriction;
    BOOL _restrictDomains;
    NSArray *_appRules;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property BOOL restrictDomains; // @synthesize restrictDomains=_restrictDomains;
@property BOOL noRestriction; // @synthesize noRestriction=_noRestriction;
@property(copy) NSArray *appRules; // @synthesize appRules=_appRules;
- (void)updateAppRulesForUID:(unsigned int)arg1;
- (BOOL)installSigningIdentifiersWithFlowDivertControlSocket:(int)arg1;
- (id)copyUniqueSigningIdentifiers;
- (id)copyAppRuleIDs;
- (BOOL)removeAppRuleByID:(id)arg1;
- (id)copyAppRuleBySigningIdentifier:(id)arg1;
- (id)copyAppRuleByID:(id)arg1;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

