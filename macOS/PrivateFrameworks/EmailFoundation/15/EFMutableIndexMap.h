//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface EFMutableIndexMap : NSObject
{
    NSMutableArray *_tuples;
    NSMutableDictionary *_keyToTuple;
}

@property(retain, nonatomic) NSMutableDictionary *keyToTuple; // @synthesize keyToTuple=_keyToTuple;
@property(retain, nonatomic) NSMutableArray *tuples; // @synthesize tuples=_tuples;
- (void).cxx_destruct;
- (void)shiftKeysStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;
- (void)setObject:(id)arg1 forKey:(long long)arg2;
- (id)objectForInt64Key:(long long)arg1;
- (unsigned long long)indexOfKey:(long long)arg1;
- (id)_tupleForKey:(long long)arg1;
- (BOOL)hasKeyAtIndex:(unsigned long long)arg1;
- (long long)keyAtIndex:(unsigned long long)arg1;
- (void)enumerateKeysIndexesAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeAllKeys;
- (BOOL)removeKeyAtIndex:(unsigned long long)arg1;
- (void)addKey:(long long)arg1 atIndex:(unsigned long long)arg2 object:(id)arg3;
- (void)addKey:(long long)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (id)init;

@end

