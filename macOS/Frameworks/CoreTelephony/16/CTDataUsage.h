//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface CTDataUsage : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _cellularHome;
    unsigned long long _cellularRoaming;
    unsigned long long _wifi;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long wifi; // @synthesize wifi=_wifi;
@property(nonatomic) unsigned long long cellularRoaming; // @synthesize cellularRoaming=_cellularRoaming;
@property(nonatomic) unsigned long long cellularHome; // @synthesize cellularHome=_cellularHome;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addUsage:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithHome:(unsigned long long)arg1 roaming:(unsigned long long)arg2 wifi:(unsigned long long)arg3;

@end

