//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "TSCEResolverContainer-Protocol.h"
#import "TSDKeyValueProxyVending-Protocol.h"
#import "TSKDocumentObject-Protocol.h"
#import "TSKModel-Protocol.h"
#import "TSKSearchTarget-Protocol.h"

@class KNAbstractSlide, KNSlideTree, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, TSPLazyReference;

@interface KNSlideNode : TSPObject <GSSPAutoEncodable, TSDKeyValueProxyVending, TSKDocumentObject, TSKModel, TSKSearchTarget, TSCEResolverContainer>
{
    TSPLazyReference *_slideReference;
    NSMutableDictionary *_thumbnails;
    BOOL _thumbnailsAreDirty;
    NSSet *_digestsForDatasThatNeedDownloadForThumbnail;
    BOOL _hidden;
    BOOL _collapsed;
    BOOL _collapsedInOutlineView;
    BOOL _hasBodyInOutlineView;
    BOOL _hasTransition;
    BOOL _hasNote;
    BOOL _slideNumberVisible;
    unsigned long long _depth;
    unsigned long long _slideSpecificHyperlinksCount;
    NSString *_classicUniqueID;
    NSString *_previousIdentifier;
    unsigned int _tableNameCounter;
    NSArray *_children;
    BOOL _hasBackgroundAlpha;
    NSMutableDictionary *_slideSpecificHyperlinkMap;
    BOOL _hasExplicitBuilds;
    BOOL _hasExplicitBuildsIsUpToDate;
    unsigned long long _buildEventCount;
    BOOL _buildEventCountIsUpToDate;
    NSMutableSet *_remappedTableNames;
    KNSlideTree *_slideTree;
}

+ (id)UUIDStringSetForSlideNodes:(id)arg1;
+ (id)slideNodeForSelectionPath:(id)arg1;
+ (id)parentSlideNodeForInfo:(id)arg1;
+ (BOOL)needsObjectUUID;
+ (id)slideNodeUUIDForObsoleteUniqueIDString:(id)arg1 inSlideNodes:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *slideSpecificHyperlinkMap; // @synthesize slideSpecificHyperlinkMap=_slideSpecificHyperlinkMap;
@property(readonly, nonatomic) BOOL hasBackgroundAlpha; // @synthesize hasBackgroundAlpha=_hasBackgroundAlpha;
@property(nonatomic) BOOL hasBodyInOutlineView; // @synthesize hasBodyInOutlineView=_hasBodyInOutlineView;
@property(nonatomic, getter=isCollapsedInOutlineView) BOOL collapsedInOutlineView; // @synthesize collapsedInOutlineView=_collapsedInOutlineView;
@property(nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property(copy, nonatomic) NSSet *digestsForDatasThatNeedDownloadForThumbnail; // @synthesize digestsForDatasThatNeedDownloadForThumbnail=_digestsForDatasThatNeedDownloadForThumbnail;
@property(readonly, nonatomic) NSDictionary *thumbnails; // @synthesize thumbnails=_thumbnails;
@property(nonatomic) __weak KNSlideTree *slideTree; // @synthesize slideTree=_slideTree;
- (id)paragraphIndexesOfTopLevelBullets;
- (void)p_commonInit;
- (void)purgeU15ModelIfNeeded;
- (void)p_addOldModelDescendantsToSlideTree:(id)arg1 atDepth:(unsigned long long)arg2;
- (void)addOldModelDescendantsToSlideTree:(id)arg1;
- (id)descendantsOmittingSkippedSlideNodes:(BOOL)arg1 omittingCollapsedSlideNodes:(BOOL)arg2;
- (id)descendants;
- (void)clearRemappedTableNames;
- (id)remappedTableNames;
- (void)addRemappedTableName:(id)arg1;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (unsigned int)saveNextUntitledResolverIndex;
- (unsigned int)nextUntitledResolverIndex;
- (BOOL)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (void)removeAllThumbnails;
- (void)removeThumbnailAtSize:(struct CGSize)arg1;
- (void)addThumbnail:(id)arg1 atSize:(struct CGSize)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
@property(nonatomic) BOOL isSlideNumberVisible;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(retain, nonatomic) KNAbstractSlide *slide;
@property(readonly, nonatomic) KNAbstractSlide *slideIfLoaded;
- (id)slideAndReturnError:(id *)arg1;
@property(readonly, nonatomic) NSArray *childSearchTargets;
- (id)childEnumerator;
- (id)commandsToRemoveTableSlideSpecificHyperlinksForSlideNodeUUIDString:(id)arg1;
- (id)commandsToRemoveHyperlinksForSlideNodeUUIDString:(id)arg1;
- (id)p_getSlideSpecificMappingForStorage:(id)arg1 forSlideNode:(id)arg2;
- (void)removeSlideSpecificMappingsFromDrawablesInGroup:(id)arg1;
- (void)removeHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2;
- (void)removeHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2;
- (void)removeHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2;
- (void)cleanOutInvalidSlideSpecificInfoEntries;
- (void)p_removeHyperlinkForObjectReferencedByMapping:(id)arg1 toSlideNode:(id)arg2;
- (void)addHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2;
- (void)addHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2;
- (void)addHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2;
- (void)p_addHyperlinkForObjectReferencedByMapping:(id)arg1 toSlideNode:(id)arg2;
- (BOOL)hasSlideSpecificHyperlinkToNode:(id)arg1;
- (BOOL)hasSlideSpecificHyperlinks;
- (void)uniquifyTableNamesForUpgradeOrImport;
@property(readonly, nonatomic) long long bodyParagraphCount;
- (unsigned long long)p_buildEventCount;
- (void)invalidateBuildEventCountCaches;
@property(readonly, nonatomic) unsigned long long safeBuildEventCount;
@property(readonly, nonatomic) unsigned long long buildEventCount;
- (BOOL)safeHasBuildEvents;
@property(readonly, nonatomic) BOOL hasBuildEvents;
- (void)p_updateHasExplicitBuilds;
@property(readonly, nonatomic) BOOL hasExplicitBuilds;
- (void)updateHasBackgroundAlpha;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) BOOL hasChildren;
@property(readonly, nonatomic) KNSlideNode *previousSkippingHidden;
@property(readonly, nonatomic) KNSlideNode *nextSkippingHidden;
@property(readonly, nonatomic) KNSlideNode *previousSkippingCollapsed;
@property(readonly, nonatomic) KNSlideNode *nextSkippingCollapsed;
@property(readonly, nonatomic) KNSlideNode *previous;
@property(readonly, nonatomic) KNSlideNode *next;
@property(copy, nonatomic) NSString *previousIdentifier;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)initWithContext:(id)arg1;
@property(retain, nonatomic) NSString *classicUniqueID;
@property(nonatomic) unsigned long long depth;
@property(nonatomic) BOOL hasNote;
@property(nonatomic) BOOL hasTransition;
@property(nonatomic) BOOL thumbnailsAreDirty;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
-     // Error parsing type: v32@0:8^{SlideNodeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Size>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::DataReference>=^{Arena}ii^{Rep}}{RepeatedPtrField<KN::SlideNodeArchive_SlideSpecificHyperlinkMapEntry>=^{Arena}ii^{Rep}}{RepeatedPtrField<std::__1::basic_string<char> >=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{Reference}BBBBBBBBIIBBBBIIBI}16@24, name: saveToArchive:archiver:
- (id)p_mappingFromString:(id)arg1;
-     // Error parsing type: v32@0:8r^{SlideNodeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Size>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::DataReference>=^{Arena}ii^{Rep}}{RepeatedPtrField<KN::SlideNodeArchive_SlideSpecificHyperlinkMapEntry>=^{Arena}ii^{Rep}}{RepeatedPtrField<std::__1::basic_string<char> >=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Reference}^{Reference}BBBBBBBBIIBBBBIIBI}16@24, name: loadFromArchive:unarchiver:
- (id)objectUUIDPath;
- (void)didLoadSlide:(id)arg1;
- (id)p_gsspSlideId;
- (id)p_mappingStringForObject:(id)arg1;
- (void)populateGSSPSlideNode:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)removeObsoleteFieldsFor20Upgrade;
- (void)removeInvalidSlideSpecificHyperlinksWithSlideNodeUUIDStrings:(id)arg1;
- (id)p_slideNodeWithUUIDString:(id)arg1 inSlideNodes:(id)arg2;
- (void)upgradeSlideSpecificHyperlinksForSlideNodes:(id)arg1;
- (void)removeInvalidSlideSpecificHyperlinksForStorage:(id)arg1 withSlideNodeUUIDStrings:(id)arg2;
- (void)upgradeSlideSpecificStorageHyperlinksForStorage:(id)arg1 withSlideNodes:(id)arg2;
- (unsigned long long)numberOfLinksToSlideNodeInStorage:(id)arg1 forSlideNodeUUIDString:(id)arg2;
- (id)p_commandsToRemoveHyperlinkFromTableStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)commandsToRemoveSlideSpecificHyperlinksFromStorage:(id)arg1 forSlideNodeUUIDString:(id)arg2;
- (void)clearSlideSpecificLinkMap;

// Remaining properties
@property(readonly, nonatomic) NSArray *childAnnotationSearchTargets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGRect frameInRoot;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL needsAdditionalOffsetBasedOnPartitioningOfParent;
@property(readonly) Class superclass;

@end

