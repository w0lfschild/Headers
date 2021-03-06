//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface EDLinksCollection : NSObject
{
    NSMutableArray *mLinks;
    NSMutableArray *mReferences;
}

- (void).cxx_destruct;
- (id)description;
- (void)addOrEquivalentExternalAddInName:(id)arg1 linkReferenceIndex:(unsigned long long *)arg2 nameIndex:(unsigned long long *)arg3;
- (unsigned long long)addOrEquivalentLinkReferenceOfType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;
- (unsigned long long)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned long long)arg1 lastSheetIndex:(unsigned long long)arg2;
- (_Bool)convertLinkReferenceIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long *)arg2 lastSheetIndex:(unsigned long long *)arg3;
- (unsigned long long)addReference:(id)arg1;
- (unsigned long long)indexOfReference:(id)arg1;
- (id)referenceAtIndex:(unsigned long long)arg1;
- (unsigned long long)referencesCount;
- (unsigned long long)linkIndexCreateIfNeededWithType:(int)arg1;
- (unsigned long long)addLink:(id)arg1;
- (unsigned long long)indexOfFirstLinkWithType:(int)arg1;
- (id)linkAtIndex:(unsigned long long)arg1;
- (unsigned long long)linksCount;
- (id)init;

@end

