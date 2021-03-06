//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface PKProductInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_productInfoDictionary;
    NSURL *_baseURL;
    NSArray *_cachedPackageReferences;
}

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) NSURL *baseURL;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSArray *packageReferences;
- (id)preferredDistributionURL;
- (id)distributionURLForLocalization:(id)arg1;
@property(readonly) NSArray *localizations;
- (id)_distributionsDictionary;
@property(readonly) NSString *productVersion;
@property(readonly) NSString *productIdentifier;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 baseURL:(id)arg2;
- (void)setProductIdentifier:(id)arg1 version:(id)arg2;
- (void)setPackageReferences:(id)arg1;
- (void)setDistributionURL:(id)arg1 forLocalization:(id)arg2;
- (id)init;

@end

