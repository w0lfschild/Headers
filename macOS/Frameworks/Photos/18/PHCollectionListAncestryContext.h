//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PHCollectionListAncestryContext : NSObject
{
    id <NSFastEnumeration> _allCollectionLists;
    NSMutableDictionary *_collectionListsByOID;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *collectionListsByOID; // @synthesize collectionListsByOID=_collectionListsByOID;
@property(retain) id <NSFastEnumeration> allCollectionLists; // @synthesize allCollectionLists=_allCollectionLists;
- (id)folderForID:(id)arg1;
- (id)initWithCollectionLists:(id)arg1;

@end

