//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocation, NSString;

__attribute__((visibility("hidden")))
@interface HomeResultCacheKey : NSObject
{
    NSString *_countryCode;
    GEOLocation *_location;
}

+ (BOOL)_location:(id)arg1 isEquivalentToLocation:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)description;
- (BOOL)isEqualivantToKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCountryCode:(id)arg1 location:(id)arg2;

@end

