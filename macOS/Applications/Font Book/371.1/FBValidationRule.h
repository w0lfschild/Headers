//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBValidationObject-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface FBValidationRule : NSObject <FBValidationObject, NSCopying, NSSecureCoding>
{
    BOOL _passed;
    NSDictionary *_ruleDict;
    long long _severity;
}

+ (BOOL)supportsSecureCoding;
+ (id)_rulesWithArray:(id)arg1;
@property BOOL passed; // @synthesize passed=_passed;
@property long long severity; // @synthesize severity=_severity;
@property(copy) NSDictionary *ruleDict; // @synthesize ruleDict=_ruleDict;
- (BOOL)matchesSearchTerms:(id)arg1;
- (BOOL)exceedsSeverity:(long long)arg1;
- (BOOL)matchesSeverity:(long long)arg1;
- (id)description;
- (id)statusImage;
- (id)helpText;
- (id)children;
- (long long)numberOfChildren;
- (id)error;
- (id)warn;
- (id)pass;
- (id)image;
- (id)name;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRuleDictionary:(id)arg1;

@end

