//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface PMLPlanDescriptor : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_version;
    NSString *_locale;
}

+ (id)planIdFromString:(id)arg1;
+ (id)descriptorFromPlanId:(id)arg1;
+ (BOOL)isValidPlanId:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 version:(id)arg2 locale:(id)arg3;

@end

