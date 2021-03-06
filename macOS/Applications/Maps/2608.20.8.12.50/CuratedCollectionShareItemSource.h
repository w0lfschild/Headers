//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ShareItemSource-Protocol.h"

@class CuratedCollectionLinkMetadataProvider, CuratedCollectionTextActivityProvider, CuratedCollectionURLActivityProvider, NSArray, NSData, NSString, Route, SearchResult;

__attribute__((visibility("hidden")))
@interface CuratedCollectionShareItemSource : NSObject <ShareItemSource>
{
    Route *_route;
    SearchResult *_searchResult;
    CuratedCollectionTextActivityProvider *_textProvider;
    CuratedCollectionURLActivityProvider *_urlProvider;
    CuratedCollectionLinkMetadataProvider *_linkPresentationProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CuratedCollectionLinkMetadataProvider *linkPresentationProvider; // @synthesize linkPresentationProvider=_linkPresentationProvider;
@property(retain, nonatomic) CuratedCollectionURLActivityProvider *urlProvider; // @synthesize urlProvider=_urlProvider;
@property(retain, nonatomic) CuratedCollectionTextActivityProvider *textProvider; // @synthesize textProvider=_textProvider;
@property(readonly, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, nonatomic) Route *route; // @synthesize route=_route;
- (void)setActivityProviderDelegate:(id)arg1;
@property(readonly, nonatomic) NSArray *includedActivityTypes;
@property(readonly, nonatomic) NSArray *excludedActivityTypes;
@property(readonly, nonatomic) NSArray *applicationActivities;
@property(readonly, nonatomic) NSData *pushSubmissionData;
@property(readonly, nonatomic) NSArray *activityProviders;
- (id)initWithPublisher:(id)arg1;
- (id)initWithPlaceCollection:(id)arg1 refinedMapItems:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

