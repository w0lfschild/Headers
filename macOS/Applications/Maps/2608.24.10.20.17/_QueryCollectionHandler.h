//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CollectionHandler.h"

#import "MSPQueryDelegate-Protocol.h"
#import "_TtP8MapsSync25MapsSyncDataQueryDelegate_-Protocol.h"

@class NSArray, NSString;
@protocol MapsSyncQueryLike;

__attribute__((visibility("hidden")))
@interface _QueryCollectionHandler : CollectionHandler <MSPQueryDelegate, _TtP8MapsSync25MapsSyncDataQueryDelegate_>
{
    id <MapsSyncQueryLike> _newQuery;
    NSArray *_queryContents;
}

- (void).cxx_destruct;
- (void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2;
- (void)queryContentsDidChangeWithQuery:(id)arg1;
- (void)removeObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)query;
- (void)loadImage;
- (id)glyphImage;
- (void)updateContent;
- (void)rebuildContent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

