//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TwoLinesBasicOutlineCellModel.h"

#import "HomeCellModel-Protocol.h"

@class NSString, SearchResult;

__attribute__((visibility("hidden")))
@interface TwoLinesSearchResultOutlineCellModel : TwoLinesBasicOutlineCellModel <HomeCellModel>
{
    SearchResult *_searchResult;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithSearchResult:(id)arg1;
@property(readonly, nonatomic) id homeDragAndDropObject;
@property(readonly, nonatomic) id homeActionObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *rendererIdentifier;
@property(readonly) Class superclass;

@end

