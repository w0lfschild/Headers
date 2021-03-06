//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import "TSKDocumentObject-Protocol.h"
#import "TSKModel-Protocol.h"

@class NSArray, NSIndexSet, NSMapTable, NSMutableDictionary, NSSet, NSString, TPDocumentRoot;

@interface TPFloatingDrawables : TSPObject <TSKDocumentObject, TSKModel>
{
    NSMutableDictionary *_drawablesByPageIndex;
    NSMapTable *_pageIndexByDrawable;
    NSMapTable *_tagByDrawable;
    TPDocumentRoot *_documentRoot;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)childEnumerator;
- (void)moveDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (void)removeDrawables:(id)arg1;
- (void)removeDrawable:(id)arg1;
- (void)removeDrawable:(id)arg1 suppressDOLC:(BOOL)arg2;
- (void)removeTagForDrawable:(id)arg1;
- (void)p_removeDrawable:(id)arg1;
- (void)applyTag:(id)arg1 toDrawable:(id)arg2;
- (void)addDrawables:(id)arg1 toPageIndex:(unsigned long long)arg2 insertContext:(id)arg3;
- (void)addDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2 insertContext:(id)arg3;
- (void)addDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4;
- (void)p_addDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (id)drawableEnumerator;
- (id)tagForDrawable:(id)arg1;
- (unsigned long long)pageIndexForDrawable:(id)arg1;
@property(readonly, nonatomic) NSIndexSet *pageIndexesOfPagesContainingDrawables;
@property(readonly, nonatomic) unsigned long long maximumPageIndex;
- (id)orderedDrawablesOnPageIndex:(unsigned long long)arg1;
- (id)swift_drawablesOnPageIndex:(unsigned long long)arg1;
- (id)drawablesOnPageIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *swift_allDrawables;
@property(readonly, nonatomic) NSSet *allDrawables;
@property(readonly, nonatomic) unsigned long long countOfAllDrawables;
@property(readonly, nonatomic) BOOL hasAnyDrawables;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

