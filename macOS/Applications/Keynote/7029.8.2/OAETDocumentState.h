//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, OADBlipCollection, OADFontScheme, OADTheme, OAETClient, OCEDocumentState, TCDrawableLayoutDocumentState, TSUNoCopyDictionary, TSUPointerKeyDictionary;

@interface OAETDocumentState : NSObject
{
    OCEDocumentState *mOwner;
    OAETClient *mClient;
    TCDrawableLayoutDocumentState *mDrawableLayoutState;
    BOOL mConnectorsOK;
    NSMutableArray *mSourceConnectorArray;
    NSMutableArray *mDrawablesTextWrappedByOthers;
    BOOL mBlipsMustBeInline;
    BOOL mBlipBulletIndexMustBeZeroBased;
    OADBlipCollection *mTargetBlipCollection;
    NSObject *mBlipMapper;
    TSUPointerKeyDictionary *mSourceDrawableToTargetDrawableMap;
    TSUPointerKeyDictionary *mSourceDrawableToTargetCaptionDrawableMap;
    unsigned int mCurrentTargetDrawableId;
    BOOL mIsGlobalBlips;
    NSMutableSet *mSetOfDrawablesNotAllowedInAGroup;
    NSMutableDictionary *mBlipMap;
    NSMutableDictionary *mBulletBlipMap;
    BOOL mClientMustMapTextOnly;
    float mFontScale;
    OADTheme *mTargetTheme;
    NSMutableDictionary *mRgbColorToSchemeColorMap;
    OADFontScheme *mTargetFontScheme;
    TSUNoCopyDictionary *mMovieCache;
    TSUNoCopyDictionary *mMovieDataCache;
    NSMutableSet *mUsedLowercaseMoviePaths;
    TSUNoCopyDictionary *mImagedDrawablesBlipMap;
    NSMutableDictionary *mImagedDrawablesCache;
    NSMutableDictionary *mTablePresetIndexToStyleIdMap;
    BOOL mIsXmlWriting;
    BOOL mIsChartWriting;
    BOOL mNeedDualDrawables;
    TSUPointerKeyDictionary *mFlowInfoIndex;
    NSMutableDictionary *mMultiColumnDrawables;
    NSMutableSet *mCaptionsAndTitles;
    NSMutableSet *mAttachmentsForCaptions;
    BOOL _isMappingGallery;
    TSUPointerKeyDictionary *_targetMovieDrawableToSourceMovieDrawableMap;
}

+ (id)keyForRgbColor:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSUPointerKeyDictionary *targetMovieDrawableToSourceMovieDrawableMap; // @synthesize targetMovieDrawableToSourceMovieDrawableMap=_targetMovieDrawableToSourceMovieDrawableMap;
@property(nonatomic) BOOL isMappingGallery; // @synthesize isMappingGallery=_isMappingGallery;
@property(readonly, nonatomic) NSMutableSet *attachmentsForCaptions; // @synthesize attachmentsForCaptions=mAttachmentsForCaptions;
@property(readonly, nonatomic) NSMutableSet *captionsAndTitles; // @synthesize captionsAndTitles=mCaptionsAndTitles;
@property(readonly, nonatomic) NSMutableSet *usedLowercaseMoviePaths; // @synthesize usedLowercaseMoviePaths=mUsedLowercaseMoviePaths;
@property(readonly) NSMutableDictionary *multiColumnDrawables; // @synthesize multiColumnDrawables=mMultiColumnDrawables;
@property(readonly, nonatomic) NSMutableDictionary *imagedDrawablesCache; // @synthesize imagedDrawablesCache=mImagedDrawablesCache;
@property(readonly, nonatomic) TSUNoCopyDictionary *imagedDrawablesBlipMap; // @synthesize imagedDrawablesBlipMap=mImagedDrawablesBlipMap;
@property(retain, nonatomic) NSMutableArray *drawablesTextWrappedByOthers; // @synthesize drawablesTextWrappedByOthers=mDrawablesTextWrappedByOthers;
@property(readonly, nonatomic) NSMutableDictionary *tablePresetIndexToStyleIdMap; // @synthesize tablePresetIndexToStyleIdMap=mTablePresetIndexToStyleIdMap;
@property(readonly, nonatomic) TSUNoCopyDictionary *movieDataCache; // @synthesize movieDataCache=mMovieDataCache;
@property(readonly, nonatomic) TSUNoCopyDictionary *movieCache; // @synthesize movieCache=mMovieCache;
@property(nonatomic) float fontScale; // @synthesize fontScale=mFontScale;
@property(retain, nonatomic) OADTheme *targetTheme; // @synthesize targetTheme=mTargetTheme;
@property(nonatomic) BOOL clientMustMapTextOnly; // @synthesize clientMustMapTextOnly=mClientMustMapTextOnly;
@property(readonly, nonatomic) __weak OCEDocumentState *owner; // @synthesize owner=mOwner;
@property(nonatomic) BOOL blipBulletIndexMustBeZeroBased; // @synthesize blipBulletIndexMustBeZeroBased=mBlipBulletIndexMustBeZeroBased;
@property(nonatomic) BOOL blipsMustBeInline; // @synthesize blipsMustBeInline=mBlipsMustBeInline;
@property(readonly, nonatomic) TCDrawableLayoutDocumentState *drawableLayoutState; // @synthesize drawableLayoutState=mDrawableLayoutState;
@property(retain, nonatomic) OAETClient *client; // @synthesize client=mClient;
@property(nonatomic) BOOL needDualDrawables; // @synthesize needDualDrawables=mNeedDualDrawables;
@property(nonatomic) BOOL isChartWriting; // @synthesize isChartWriting=mIsChartWriting;
@property(nonatomic) unsigned int currentTargetDrawableId; // @synthesize currentTargetDrawableId=mCurrentTargetDrawableId;
- (BOOL)shouldTruncateFontNames;
- (id)blipRefForImageData:(id)arg1 tintColor:(id)arg2 isBullet:(BOOL)arg3 renderedSize:(struct CGSize)arg4;
- (id)possiblyRelativeFontNameWithAbsoluteFontName:(id)arg1 baseFontId:(int)arg2;
- (int)idForFontCollection:(id)arg1;
- (id)schemeColorForRgbColor:(id)arg1;
- (void)tearDownMappingToTheme;
- (void)setUpMappingToThemeWithColorScheme:(id)arg1 colorMap:(id)arg2 fontScheme:(id)arg3 theme:(id)arg4;
- (void)addColor:(id)arg1 relativeToColorMappedToScheme:(id)arg2;
- (void)setXmlWriting:(BOOL)arg1;
- (BOOL)isXmlWriting;
- (BOOL)isDrawableAllowedInAGroup:(id)arg1;
- (void)cacheDrawableNotAllowedInAGroup:(id)arg1;
- (void)enableCachingOfDrawablesNotAllowedInAGroup;
- (void)setTargetDrawables:(id)arg1 forSourceDrawable:(id)arg2;
- (id)targetDrawablesForSourceDrawable:(id)arg1;
- (void)resetSourceConnectorCache;
- (id)sourceConnectorAtIndex:(unsigned long long)arg1;
- (unsigned long long)sourceConnectorCount;
- (void)cacheSourceConnector:(id)arg1;
- (void)setConnectorsOK:(BOOL)arg1;
- (BOOL)connectorsOK;
- (id)blipMapper;
- (void)setDualDrawable:(id)arg1 forMainDrawable:(id)arg2;
- (id)dualDrawableForMainDrawable:(id)arg1;
- (void)identifyDrawable:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)indexForFlowInfo:(id)arg1;
- (id)initWithClient:(id)arg1 connectorsOK:(BOOL)arg2 isXmlWriting:(BOOL)arg3;

@end

