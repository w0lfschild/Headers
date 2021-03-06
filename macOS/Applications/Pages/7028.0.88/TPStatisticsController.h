//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDSelectionStatisticsCalculator-Protocol.h"
#import "TSKChangeSourceObserver-Protocol.h"
#import "TSWPStatisticsControlling-Protocol.h"

@class NSMutableSet, NSString, TPDocumentRoot, TPDocumentStatistics, TPInteractiveCanvasController, TSUDelayTimer, TSUNoCopyDictionary;
@protocol OS_dispatch_queue;

@interface TPStatisticsController : NSObject <TSKChangeSourceObserver, TSWPStatisticsControlling, TSDSelectionStatisticsCalculator>
{
    BOOL _tornDown;
    BOOL _currentlyTracking;
    BOOL _trackersAreValid;
    BOOL _includeInlinesForBodyProcessing;
    NSMutableSet *_clientSet;
    TPDocumentRoot *_documentRoot;
    TPInteractiveCanvasController *_interactiveCanvasController;
    TSUNoCopyDictionary *_trackerDictionary;
    NSObject<OS_dispatch_queue> *_queue;
    TSUDelayTimer *_docStatsTimer;
    TSUDelayTimer *_selectionStatsTimer;
    TPDocumentStatistics *_lastDocumentStats;
    TPDocumentStatistics *_lastSelectionStats;
    TPDocumentStatistics *_accumulatedStats;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPDocumentStatistics *accumulatedStats; // @synthesize accumulatedStats=_accumulatedStats;
@property(nonatomic) BOOL includeInlinesForBodyProcessing; // @synthesize includeInlinesForBodyProcessing=_includeInlinesForBodyProcessing;
@property(retain, nonatomic) TPDocumentStatistics *lastSelectionStats; // @synthesize lastSelectionStats=_lastSelectionStats;
@property(retain, nonatomic) TPDocumentStatistics *lastDocumentStats; // @synthesize lastDocumentStats=_lastDocumentStats;
@property(nonatomic) BOOL trackersAreValid; // @synthesize trackersAreValid=_trackersAreValid;
@property(nonatomic) BOOL currentlyTracking; // @synthesize currentlyTracking=_currentlyTracking;
@property(nonatomic) BOOL tornDown; // @synthesize tornDown=_tornDown;
@property(readonly, nonatomic) TSUDelayTimer *selectionStatsTimer; // @synthesize selectionStatsTimer=_selectionStatsTimer;
@property(readonly, nonatomic) TSUDelayTimer *docStatsTimer; // @synthesize docStatsTimer=_docStatsTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) TSUNoCopyDictionary *trackerDictionary; // @synthesize trackerDictionary=_trackerDictionary;
@property(readonly, nonatomic) __weak TPInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
@property(readonly, nonatomic) __weak TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (id)visibleChildrenOfDrawable:(id)arg1;
- (id)p_selectedInfos;
- (id)p_updateSelectionStatisticsForcingUpdate:(BOOL)arg1;
- (void)p_processStatisticsOnWPEditor:(id)arg1;
- (void)p_processInfoSet:(id)arg1;
- (void)p_editorControllerSelectionDidChange:(id)arg1;
- (void)p_triggerSelectionStatisticsForcingUpdate:(BOOL)arg1;
- (void)p_processStorage:(id)arg1 processSelection:(id)arg2;
- (void)p_processInlineStoragesOnStorage:(id)arg1 processRange:(struct _NSRange)arg2;
- (void)p_processStorage:(id)arg1 processRange:(struct _NSRange)arg2;
- (void)p_stopTracking;
- (void)p_startTracking;
- (void)p_postDocumentStatisticsOnMainThread:(id)arg1;
- (void)p_postSelectionStatisticsOnMainThread:(id)arg1;
- (void)p_updateStatistics:(id)arg1;
- (void)p_scheduleCalculationAfterDelay:(double)arg1 forcePost:(BOOL)arg2;
- (void)p_invalidateStatistics;
- (BOOL)p_modelObjectIsVisible:(id)arg1;
- (void)p_updateTrackerDictionary;
- (void)p_documentModelDidChange;
- (BOOL)p_isEnabled;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1;
- (void)updatePageCount:(unsigned long long)arg1;
- (void)processStorageForStatistics:(id)arg1 processSelection:(id)arg2;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (id)changeNotifier;
- (void)storageDidChange;
- (void)tearDown;
@property(readonly, nonatomic) NSMutableSet *clientSet; // @synthesize clientSet=_clientSet;
- (id)initWithInteractiveCanvasController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

