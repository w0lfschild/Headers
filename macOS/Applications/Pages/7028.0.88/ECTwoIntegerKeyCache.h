//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUIntegerKeyDictionary;

@interface ECTwoIntegerKeyCache : NSObject
{
    TSUIntegerKeyDictionary *mCache;
    BOOL _assertForCollisions;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL assertForCollisions; // @synthesize assertForCollisions=_assertForCollisions;
- (void)setObject:(id)arg1 forKey1:(long long)arg2 key2:(long long)arg3;
- (id)objectForKey1:(long long)arg1 key2:(long long)arg2;
- (id)init;

@end

