//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface CollectionOrderStorage : NSObject
{
    NSMutableOrderedSet *_orderedIdentifiers;
}

- (void).cxx_destruct;
- (id)orderCollections:(id)arg1;
- (void)editCollection:(id)arg1;
- (void)removeCollections:(id)arg1;
- (void)_saveOrder;
- (void)_loadOrder;
- (id)init;

@end

