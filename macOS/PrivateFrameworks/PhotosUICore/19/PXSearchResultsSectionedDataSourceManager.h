//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXSearchResultsSectionedDataSourceChangeObserver.h"

@class NSDictionary, NSObject<OS_dispatch_semaphore>, NSString, NSTimer, PHCachingImageManager, PLSearchMetadataStore, PSIDatabase, PXSearchActiveSearch, PXSearchResultsSectionedDataSource;

@interface PXSearchResultsSectionedDataSourceManager : NSObject <PXSearchResultsSectionedDataSourceChangeObserver>
{
    BOOL _isIndexing;
    PXSearchActiveSearch *_activeSearch;
    PHCachingImageManager *_cachingImageManager;
    PXSearchResultsSectionedDataSource *_searchResultsDataSource;
    id <PXSearchResultsSectionedDataSourceChangeObserver> _delegate;
    NSObject<OS_dispatch_semaphore> *_searchIndexReadySemaphore;
    PLSearchMetadataStore *_searchMetadataStore;
    PSIDatabase *_searchIndex;
    NSTimer *_searchIndexStatusTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *searchIndexStatusTimer; // @synthesize searchIndexStatusTimer=_searchIndexStatusTimer;
@property(retain, nonatomic) PSIDatabase *searchIndex; // @synthesize searchIndex=_searchIndex;
@property(retain, nonatomic) PLSearchMetadataStore *searchMetadataStore; // @synthesize searchMetadataStore=_searchMetadataStore;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *searchIndexReadySemaphore; // @synthesize searchIndexReadySemaphore=_searchIndexReadySemaphore;
@property(nonatomic) __weak id <PXSearchResultsSectionedDataSourceChangeObserver> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isIndexing; // @synthesize isIndexing=_isIndexing;
@property(retain, nonatomic) PXSearchResultsSectionedDataSource *searchResultsDataSource; // @synthesize searchResultsDataSource=_searchResultsDataSource;
@property(retain, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
@property(retain, nonatomic) PXSearchActiveSearch *activeSearch; // @synthesize activeSearch=_activeSearch;
@property(readonly) NSDictionary *debugDictionary;
- (void)dealloc;
- (void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 atIndexes:(id)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(id)arg1 shouldMergePendingChanges:(BOOL)arg2;
- (void)searchResultsDataSource:(id)arg1 didFetchAssetsForSearchResult:(id)arg2 indexPath:(id)arg3;
- (void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 topAssetsSectionExists:(BOOL)arg3;
- (void)stopMonitoringSearchIndexStatus;
- (void)startMonitoringSearchIndexStatusWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)queryHasChanged:(id)arg1 maxSuggestionCount:(long long)arg2;
@property(readonly, nonatomic) BOOL resultsReady;
- (void)mergePendingChanges;
- (void)verifySearchDataSourceDidLoad;
- (void)prepareDataSourceWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSearchSectionedDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

