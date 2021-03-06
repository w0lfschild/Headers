//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FRAdjustableIndexMap, FRFeedCollectionViewScrollBookmark, NSMapTable, NSMutableSet, NSString;
@protocol FRFeedCollectionViewLayoutCacheType;

@interface FRFeedCollectionViewLayoutBlueprint : NSObject <NSCopying>
{
    BOOL _frozen;
    NSString *_identifier;
    FRAdjustableIndexMap *_indexesToSectionIDs;
    FRAdjustableIndexMap *_yOriginsToSectionIDArrays;
    NSMapTable *_layoutInfoIDsToSectionIDs;
    NSMapTable *_regionIDsToSectionIDs;
    NSMapTable *_sectionIDsToSectionIDArrays;
    NSMapTable *_sectionsByID;
    NSMapTable *_underlyingTileInfoIDsToLayoutInfoIDs;
    long long _contentHeight;
    NSMutableSet *_layoutInfoIDsToUpdate;
    id <FRFeedCollectionViewLayoutCacheType> _layoutCache;
    FRFeedCollectionViewScrollBookmark *_lastBookmark;
    struct CGSize _viewportSize;
}

+ (id)fr_newLayoutBlueprintWithFeedDescriptor:(id)arg1 feedSettings:(id)arg2 layoutSectionDescriptorProvider:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) FRFeedCollectionViewScrollBookmark *lastBookmark; // @synthesize lastBookmark=_lastBookmark;
@property(retain, nonatomic) id <FRFeedCollectionViewLayoutCacheType> layoutCache; // @synthesize layoutCache=_layoutCache;
@property(retain, nonatomic) NSMutableSet *layoutInfoIDsToUpdate; // @synthesize layoutInfoIDsToUpdate=_layoutInfoIDsToUpdate;
@property(nonatomic) long long contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;
@property(retain, nonatomic) NSMapTable *underlyingTileInfoIDsToLayoutInfoIDs; // @synthesize underlyingTileInfoIDsToLayoutInfoIDs=_underlyingTileInfoIDsToLayoutInfoIDs;
@property(retain, nonatomic) NSMapTable *sectionsByID; // @synthesize sectionsByID=_sectionsByID;
@property(retain, nonatomic) NSMapTable *sectionIDsToSectionIDArrays; // @synthesize sectionIDsToSectionIDArrays=_sectionIDsToSectionIDArrays;
@property(retain, nonatomic) NSMapTable *regionIDsToSectionIDs; // @synthesize regionIDsToSectionIDs=_regionIDsToSectionIDs;
@property(retain, nonatomic) NSMapTable *layoutInfoIDsToSectionIDs; // @synthesize layoutInfoIDsToSectionIDs=_layoutInfoIDsToSectionIDs;
@property(retain, nonatomic) FRAdjustableIndexMap *yOriginsToSectionIDArrays; // @synthesize yOriginsToSectionIDArrays=_yOriginsToSectionIDArrays;
@property(retain, nonatomic) FRAdjustableIndexMap *indexesToSectionIDs; // @synthesize indexesToSectionIDs=_indexesToSectionIDs;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL frozen; // @synthesize frozen=_frozen;
- (BOOL)hasUniqueLayoutInfoIDsAcrossSections:(id)arg1;
- (id)sectionsIDsIntersectingWithRect:(struct CGRect)arg1;
- (BOOL)assertValid;
- (void)freeze;
- (id)debugDescription;
- (id)description;
- (void)markLayoutInfoIDAsUpdated:(id)arg1;
- (long long)yOriginDifferenceBetweenWithRespectToNonStickyFirstLayoutInfoIDInBlueprint:(id)arg1;
- (id)layoutInfoIDPrecedingTileInfoIDInVisuallySortedOrder:(id)arg1;
- (id)layoutInfoIDFollowingTileInfoIDInVisuallySortedOrder:(id)arg1;
- (id)firstLayoutInfoRelativeToIndexPath:(id)arg1 inOrder:(unsigned long long)arg2 withMaxDistance:(double)arg3 distance:(out double *)arg4 tileInfoFrame:(out struct CGRect *)arg5 passingTest:(CDUnknownBlockType)arg6;
- (id)layoutInfoEnumeratorInReverse:(BOOL)arg1 startingAtIndexPath:(id)arg2;
- (id)reverseLayoutInfoEnumeratorStartingAtIndexPath:(id)arg1;
- (id)reverseLayoutInfoEnumerator;
- (id)layoutInfoEnumeratorStartingSearchForRegionsAtYOrigin:(long long)arg1;
- (id)layoutInfoEnumeratorStartingAtIndexPath:(id)arg1;
- (id)layoutInfoEnumeratorStartingAtSectionIndex:(long long)arg1;
- (id)layoutInfoEnumerator;
- (id)previousValidIndexPathBeforeIndexPath:(id)arg1;
- (id)nextValidIndexPathAfterIndexPath:(id)arg1;
- (id)firstSectionCoveringYOrigin:(long long)arg1;
- (id)allLayoutInfoIDsForHeadlineIDs:(id)arg1;
- (id)allGapLayoutTileInfos;
- (id)findClosestGapToLayoutInfoID:(id)arg1 searchUnderlyingTileInfos:(BOOL)arg2 withInDistance:(double)arg3;
- (id)allLayoutInfos;
- (id)allLayoutInfoIDs;
- (struct CGRect)visibleBoundsForBookmark:(id)arg1 fittingSize:(struct CGSize)arg2 topContentInset:(double)arg3 feedSettings:(id)arg4;
- (id)scrollBookmarkGivenVisibleBounds:(struct CGRect)arg1 withSuggestedBestCandidateID:(id)arg2 excludingLayoutInfosPassingTest:(CDUnknownBlockType)arg3;
- (id)scrollBookmarkGivenVisibleBounds:(struct CGRect)arg1 excludingLayoutInfosPassingTest:(CDUnknownBlockType)arg2;
- (id)allInsertedAndUpdatedIndexPathsWithDiff:(id)arg1;
- (id)allInsertedIndexPathsWithDiff:(id)arg1;
- (id)diffWithBlueprint:(id)arg1 updatedLayoutInfoIDs:(id)arg2;
- (id)diffWithBlueprint:(id)arg1;
- (BOOL)containsLayoutInfoID:(id)arg1;
- (id)layoutInfoIDForIndexPath:(id)arg1;
- (id)indexPathForLayoutInfoID:(id)arg1 searchUnderlyingTileInfos:(BOOL)arg2;
- (id)indexPathForLayoutInfoID:(id)arg1;
- (long long)yOriginOfLayoutInfoID:(id)arg1 searchUnderlyingTileInfos:(BOOL)arg2;
- (long long)yOriginOfLayoutInfoID:(id)arg1;
- (id)layoutInfoForID:(id)arg1 searchUnderlyingTileInfos:(BOOL)arg2;
- (id)layoutInfoForID:(id)arg1;
- (id)layoutInfosAtIndexPaths:(id)arg1;
- (id)layoutInfoAtIndexPath:(id)arg1;
- (id)layoutAttributesForID:(id)arg1;
- (id)layoutTileInfoIdentifierOfAdInOrder:(unsigned long long)arg1 relativeToLayoutTileInfoID:(id)arg2;
- (BOOL)sectionNearbyWithAdsBelowSectionIndex:(long long)arg1 withinNumberOfScreenfuls:(long long)arg2;
- (BOOL)sectionNearbyWithAdsAboveSectionIndex:(long long)arg1 withinNumberOfScreenfuls:(long long)arg2;
- (BOOL)sectionNearbyWithAdsInOrder:(unsigned long long)arg1 startingAtSectionIndex:(long long)arg2 withinNumberOfscreenfuls:(long long)arg3;
- (long long)countOfLayoutInfosInSectionWithIndex:(long long)arg1;
- (long long)_yOriginToInsertSectionAtSectionIndex:(long long)arg1;
- (void)_updateLayoutAttributes:(id)arg1 withYOrigin:(long long)arg2 indexPath:(id)arg3;
- (id)_updatedLayoutInfoFromLayoutInfo:(id)arg1 withYOrigin:(long long)arg2 indexPath:(id)arg3;
- (id)sectionSupplimentaryLayoutAttributesAtIndexPath:(id)arg1;
- (id)layoutInfosIntersectingWithRect:(struct CGRect)arg1;
- (id)layoutInfoIDsIntersectingWithRect:(struct CGRect)arg1;
- (id)allLayoutAttributesWithinRect:(struct CGRect)arg1;
- (id)reverseSectionEnumeratorStartingAtIndex:(long long)arg1;
- (id)sectionEnumeratorStartingAtIndex:(long long)arg1;
- (void)_setArrayOfSectionIDs:(id)arg1 atYOrigin:(long long)arg2;
- (id)_retrieveOrCreateEmptyArrayOfSectionIDsAtYOrigin:(long long)arg1;
- (long long)yOriginOfSectionID:(id)arg1;
- (id)lastSectionID;
- (id)firstSectionID;
- (id)lastLayoutInfoPassingTest:(CDUnknownBlockType)arg1;
- (id)lastLayoutInfoID;
- (id)firstLayoutInfoPassingTest:(CDUnknownBlockType)arg1;
- (id)firstLayoutInfoID;
- (id)sectionContainingLayoutInfoID:(id)arg1;
- (id)identifierOfSectionContainingLayoutInfoID:(id)arg1;
- (long long)indexOfSectionContainingLayoutInfoID:(id)arg1;
- (long long)indexOfSection:(id)arg1;
- (long long)indexOfSectionWithID:(id)arg1;
- (id)sectionContainingRegionID:(id)arg1;
- (id)sectionWithID:(id)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (void)removeSectionAtIndex:(long long)arg1;
- (long long)_heightOfLastSectionIDInArray:(id)arg1;
- (long long)_accumulatedHeightOfSectionIDArray:(id)arg1;
- (BOOL)_insertSection:(id)arg1 atIndex:(long long)arg2;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (void)insertSections:(id)arg1 startingAtIndex:(long long)arg2;
- (long long)countOfSections;
- (long long)countOfLayoutInfos;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewportSize:(struct CGSize)arg1;
- (id)init;
- (unsigned long long)fr_absoluteGroupRankOfSectionWithID:(id)arg1;
- (unsigned long long)fr_absoluteRankOfHeadlineTileInfoWithID:(id)arg1;
- (BOOL)fr_containsGapAtBottom;
- (BOOL)fr_containsGapAtTop;
- (BOOL)fr_containsGap;
- (id)topStoriesSection;
- (id)fr_indexPathForHeadlineWithTileInfoID:(id)arg1;
- (id)fr_indexPathForTileInfo:(id)arg1;
- (id)fr_headlineFromTileInfo:(id)arg1;
- (id)fr_headlineAtIndexPath:(id)arg1;
- (id)fr_aggregateTileInfoForUnderlyingTileInfoID:(id)arg1;
- (id)fr_tileInfoForTileInfoID:(id)arg1;
- (id)fr_layoutInfoAtIndexPath:(id)arg1;
- (id)fr_tileInfoAtIndexPath:(id)arg1;

@end

