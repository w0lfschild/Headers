//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface CTIntTuple : NSObject <NSCopying>
{
    long long _CTindex;
    long long _CTdistance;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) long long distance;
@property(readonly, nonatomic) long long index;
- (id)initWithIndex:(long long)arg1 andDistance:(long long)arg2;

@end

