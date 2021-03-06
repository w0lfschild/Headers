//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface iTermOrderedDictionary : NSObject
{
    NSArray *_orderedKeys;
    NSDictionary *_dictionary;
    BOOL _containsDuplicates;
}

+ (id)withTuples:(id)arg1;
+ (id)byMappingEnumerator:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)byMapping:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL containsDuplicates; // @synthesize containsDuplicates=_containsDuplicates;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)values;
- (id)keys;
@property(readonly, nonatomic) NSString *debugString;
- (id)initWithArray:(id)arg1 dictionary:(id)arg2;

@end

