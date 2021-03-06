//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSSet, NSString;

@interface PKPassAutomaticSelectionCriterion : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _supportsExpress;
    NSString *_type;
    long long _technologyType;
    NSSet *_primaryTCIs;
    NSSet *_TCIs;
    NSData *_mask;
}

+ (id)expressModeForCriterion:(id)arg1;
+ (id)criterionForExpressMode:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *mask; // @synthesize mask=_mask;
@property(copy, nonatomic) NSSet *TCIs; // @synthesize TCIs=_TCIs;
@property(copy, nonatomic) NSSet *primaryTCIs; // @synthesize primaryTCIs=_primaryTCIs;
@property(nonatomic) _Bool supportsExpress; // @synthesize supportsExpress=_supportsExpress;
@property(nonatomic) long long technologyType; // @synthesize technologyType=_technologyType;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

