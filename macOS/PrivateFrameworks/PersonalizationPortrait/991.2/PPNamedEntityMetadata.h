//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProactiveSupport/_PASZonedObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@interface PPNamedEntityMetadata : _PASZonedObject <NSCopying, NSSecureCoding>
{
    unsigned short _impressionCount;
    unsigned short _occurrencesInSource;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned short occurrencesInSource; // @synthesize occurrencesInSource=_occurrencesInSource;
@property(readonly, nonatomic) unsigned short impressionCount; // @synthesize impressionCount=_impressionCount;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNamedEntityMetadata:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2;
- (id)init;

@end

