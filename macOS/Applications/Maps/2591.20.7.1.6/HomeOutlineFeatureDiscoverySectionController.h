//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HomeOutlineSectionController.h"

#import "HomeOutlineSectionControllerSubclassing-Protocol.h"

@class FeatureDiscoveryDataProvider, NSArray, NSSet, NSString, SuggestionsDataProvider;
@protocol MapsUIDiffableDataSourceViewModel;

__attribute__((visibility("hidden")))
@interface HomeOutlineFeatureDiscoverySectionController : HomeOutlineSectionController <HomeOutlineSectionControllerSubclassing>
{
    FeatureDiscoveryDataProvider *_featureDiscoveryDataProvider;
    SuggestionsDataProvider *_suggestionsDataProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SuggestionsDataProvider *suggestionsDataProvider; // @synthesize suggestionsDataProvider=_suggestionsDataProvider;
- (id)contextMenuForSnapshot:(id)arg1;
@property(readonly, nonatomic) NSArray *itemSnapshots;
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *dataProviders;
@property(readonly, nonatomic) NSSet *rendererClasses;
- (id)initWithConfiguration:(id)arg1 suggestionsDataProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

