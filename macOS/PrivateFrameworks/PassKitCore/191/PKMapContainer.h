//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableDictionary;

@interface PKMapContainer : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_recipientMap;
    NSMutableDictionary *_scoreMap;
    long long _version;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSMutableDictionary *scoreMap; // @synthesize scoreMap=_scoreMap;
@property(readonly, copy, nonatomic) NSMutableDictionary *recipientMap; // @synthesize recipientMap=_recipientMap;
- (void)removeAllObjects;
- (void)updateWithContainer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

