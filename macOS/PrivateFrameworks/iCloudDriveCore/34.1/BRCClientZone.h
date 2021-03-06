//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudDriveCore/BRCReachabilityDelegate-Protocol.h>
#import <iCloudDriveCore/BRCZone-Protocol.h>

@class BRCAccountSession, BRCCreateZoneAndSubscribeOperation, BRCDeadlineSource, BRCFetchRecentAndFavoriteDocumentsOperation, BRCItemID, BRCPQLConnection, BRCServerZone, BRCSyncBudgetThrottle, BRCSyncDownOperation, BRCSyncOperationThrottle, BRCSyncUpOperation, BRCThrottleBase, BRCZoneRowID, CKOperationGroup, ICDBRMangledID, NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString, brc_task_tracker;
@protocol BRCClientZoneDelegate, NSObject, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCClientZone : NSObject <BRCReachabilityDelegate, BRCZone>
{
    BRCAccountSession *_session;
    BRCServerZone *_serverZone;
    id <BRCClientZoneDelegate> _delegate;
    BRCZoneRowID *_dbRowID;
    NSString *_zoneName;
    NSString *_ownerName;
    ICDBRMangledID *_mangledID;
    BRCPQLConnection *_db;
    unsigned int _state;
    BOOL _activated;
    BOOL _isInitialCreation;
    BRCThrottleBase *_readerThrottle;
    BRCCreateZoneAndSubscribeOperation *_createZoneOperation;
    NSObject<OS_dispatch_queue> *_createZoneQueue;
    NSMutableArray *_zoneCreationCompletionBlocks;
    long long _syncUpRetryAfter;
    // Error parsing type: AI, name: _syncState
    BRCSyncUpOperation *_syncUpOperation;
    NSError *_lastSyncUpError;
    BRCSyncDownOperation *_syncDownOperation;
    id _syncDeadlineSourceResumer;
    NSError *_lastSyncDownError;
    BRCSyncOperationThrottle *_syncUpThrottle;
    BRCSyncBudgetThrottle *_syncUpBudget;
    BRCSyncOperationThrottle *_syncDownThrottle;
    BRCDeadlineSource *_syncDeadlineSource;
    NSMutableArray *_blockedOperationsOnInitialSync;
    NSMutableDictionary *_runningListOperations;
    NSMutableDictionary *_recursiveListOperations;
    NSMutableDictionary *_fetchParentOperations;
    NSMutableDictionary *_fetchShareAliasOperations;
    BRCFetchRecentAndFavoriteDocumentsOperation *_fetchRecentsOperation;
    NSMutableIndexSet *_appliedTombstoneRanks;
    long long _lastInsertedRank;
    NSDate *_lastSyncDownDate;
    NSDate *_lastAttemptedSyncDownDate;
    NSObject<OS_dispatch_source> *_resetTimer;
    BOOL _shouldShowiCloudDriveAppInstallationNotification;
    NSMutableDictionary *_syncDownBlockToPerformForItemID;
    // Error parsing type: Aq, name: _waitForOnDiskCount
    NSMutableArray *_nextSyncDownBarriers;
    NSMutableArray *_currentSyncDownBarriers;
    id <NSObject> _hasWorkDidUpdateObserver;
    NSMutableArray *_nextIdleHandlers;
    NSMutableArray *_directoriesCreatedLastSyncUp;
    CKOperationGroup *_syncDownGroup;
    NSMutableArray *_syncDownDependencies;
    NSMutableArray *_allItemsDidUploadTrackers;
    float _syncUpBatchSizeMultiplier;
    brc_task_tracker *_taskTracker;
    BOOL _needsSave;
    BOOL _t_syncDownBlocked;
    BOOL _t_syncUpBlocked;
    unsigned long long _requestID;
    NSArray *_syncThrottles;
    NSString *_osNameRequiredToSync;
    NSMutableDictionary *_t_osNamesByItemIDBlockedForSyncUp;
    NSString *_t_syncBlockedUntilOSName;
}

@property(readonly, nonatomic) BOOL _t_syncUpBlocked; // @synthesize _t_syncUpBlocked;
@property(readonly, nonatomic) BOOL _t_syncDownBlocked; // @synthesize _t_syncDownBlocked;
@property(retain, nonatomic) NSDate *lastAttemptedSyncDownDate; // @synthesize lastAttemptedSyncDownDate=_lastAttemptedSyncDownDate;
@property(readonly, nonatomic) brc_task_tracker *taskTracker; // @synthesize taskTracker=_taskTracker;
@property(readonly, nonatomic) NSString *osNameRequiredToSync; // @synthesize osNameRequiredToSync=_osNameRequiredToSync;
@property(retain, nonatomic) BRCServerZone *serverZone; // @synthesize serverZone=_serverZone;
@property(readonly, nonatomic) BRCDeadlineSource *syncDeadlineSource; // @synthesize syncDeadlineSource=_syncDeadlineSource;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) long long lastInsertedRank; // @synthesize lastInsertedRank=_lastInsertedRank;
@property(readonly, nonatomic) unsigned long long currentRequestID; // @synthesize currentRequestID=_requestID;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) BRCZoneRowID *dbRowID; // @synthesize dbRowID=_dbRowID;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) BOOL needsSave; // @synthesize needsSave=_needsSave;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property(retain, nonatomic) id <BRCClientZoneDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL activated; // @synthesize activated=_activated;
- (void).cxx_destruct;
- (id)insertParentChainForItem:(id)arg1;
- (id)itemIDForTopLevelSharedItemGivenItem:(id)arg1;
- (id)serverItemIDForTopLevelSharedItemGivenItem:(id)arg1;
- (BOOL)shouldSyncMangledID:(id)arg1;
- (void)setupOperationForTestsIfNeeded:(id)arg1 recordsToSave:(id)arg2;
- (void)_t_flushIdleBlocksIfNeeded;
- (BOOL)_t_isIdle;
- (void)_t_resumeSyncUp;
- (void)_t_pauseSyncUp;
- (void)_t_resumeSyncDown;
- (void)_t_pauseSyncDown;
@property(readonly, nonatomic) NSString *_t_syncBlockedUntilOSName; // @synthesize _t_syncBlockedUntilOSName;
@property(readonly, nonatomic) NSMutableDictionary *_t_osNamesByItemIDBlockedForSyncUp; // @synthesize _t_osNamesByItemIDBlockedForSyncUp;
- (void)_t_markBlockedUntilOSName:(id)arg1;
- (void)_t_removeAllSyncUpBlocking;
- (void)_t_removeItemIDSyncUpBlocking:(id)arg1;
- (void)_t_addItemID:(id)arg1 blockedForSyncUpUntilOSName:(id)arg2;
- (BOOL)dumpActivityToContext:(id)arg1 error:(id *)arg2;
- (BOOL)_dumpItemsToContext:(id)arg1 error:(id *)arg2;
- (void)_dumpRecursivePropertiesOfItemByRowID:(unsigned long long)arg1 context:(id)arg2 depth:(int)arg3;
- (void)_appendToString:(id)arg1 descriptionOfFieldNamed:(id)arg2 inResultSet:(id)arg3 pos:(int *)arg4 containsSize:(BOOL)arg5 context:(id)arg6;
- (long long)throttleHashWithItemID:(id)arg1;
- (void)networkReachabilityChanged:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hasHighPriorityWatchers;
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesRefreshingItemID:(id)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesLookingForItemID:(id)arg2;
- (void)_prepareForForegroundSyncDown;
- (void)performBlock:(CDUnknownBlockType)arg1 whenFileObjectIDIsOnDisk:(id)arg2;
- (void)_removeAllShareAcceptanceBlocks;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)itemTypeByItemID:(id)arg1 db:(id)arg2;
- (BOOL)existsByItemID:(id)arg1 db:(id)arg2;
- (BOOL)existsByItemID:(id)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)documentItemByItemID:(id)arg1 db:(id)arg2;
- (id)documentItemByItemID:(id)arg1;
- (id)itemByItemID:(id)arg1 db:(id)arg2;
- (id)itemByItemID:(id)arg1;
- (id)serverQuotaUsageWithParentID:(id)arg1 db:(id)arg2;
- (id)clientChildCountWithParentID:(id)arg1 db:(id)arg2;
- (id)serverChildCountWithParentID:(id)arg1 db:(id)arg2;
- (id)serverItemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)serverItemByRowID:(unsigned long long)arg1;
- (id)serverItemByItemID:(id)arg1 db:(id)arg2;
- (id)serverItemByItemID:(id)arg1;
- (long long)serverRankByItemID:(id)arg1 db:(id)arg2;
- (id)serverItemByRank:(long long)arg1;
- (id)serverStructuralEtagByItemID:(id)arg1;
- (id)serverShareEtagByItemID:(id)arg1;
- (long long)serverRankByItemID:(id)arg1;
- (struct PQLResultSet *)ineligibleFromSyncItemsUnderParent:(id)arg1;
- (struct PQLResultSet *)itemsParentedToThisZoneButLivingInAnOtherZone;
- (struct PQLResultSet *)allItems;
- (BOOL)_resetItemsTable;
- (BOOL)dumpTablesToContext:(id)arg1 error:(id *)arg2;
- (BOOL)dumpStatusToContext:(id)arg1 error:(id *)arg2;
- (void)fetchRecentAndFavoriteDocuments;
- (id)fetchShareAliasIfNecessaryForTarget:(id)arg1 isUserWaiting:(BOOL)arg2;
- (id)fetchParentChainIfNecessaryWithParentItemID:(id)arg1 isUserWaiting:(BOOL)arg2;
- (id)fetchRecursiveDirectoryContentsIfNecessary:(id)arg1 isUserWaiting:(BOOL)arg2 rescheduleApply:(BOOL)arg3;
- (id)fetchDirectoryContentsIfNecessary:(id)arg1 isUserWaiting:(BOOL)arg2 rescheduleApplyScheduler:(BOOL)arg3;
- (BOOL)_isSideSyncOperationBlockedWithName:(id)arg1;
- (id)cancelFetchAliasOperationAndReschedule:(id)arg1;
- (void)_registerFetchAliasOperation:(id)arg1;
- (id)cancelFetchParentChainOperationAndReschedule:(id)arg1;
- (void)_registerFetchParentChainOperation:(id)arg1;
- (void)_blockLowPriorityStitchingOperationsForOperation:(struct _BRCOperation *)arg1;
- (id)cancelListOperationAndReschedule:(id)arg1;
- (void)_registerListOperation:(id)arg1;
- (void)_registerServerStitchingOperation:(struct _BRCOperation *)arg1;
- (BOOL)hasCompletedInitialSyncDownOnce;
- (void)flushAppliedTombstones;
- (void)didApplyTombstoneForRank:(long long)arg1;
- (void)didGCTombstoneRanks:(id)arg1;
- (void)handleRootRecordDeletion;
- (BOOL)_crossZoneMoveDocumentsToZone:(id)arg1;
- (void)didSyncDownRequestID:(unsigned long long)arg1 maxApplyRank:(long long)arg2 caughtUpWithServer:(BOOL)arg3 syncDownDate:(id)arg4;
- (void)listedUpToRank:(long long)arg1;
- (void)_fixupMissingCrossMovedItems;
- (void)syncDownOperation:(id)arg1 didFinishWithError:(id)arg2 status:(long long)arg3;
- (void)notifyClient:(id)arg1 afterNextSyncDown:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *syncThrottles; // @synthesize syncThrottles=_syncThrottles;
- (void)_syncUpOfRecords:(id)arg1 createdAppLibraryNames:(id)arg2 didFinishWithError:(id)arg3;
- (void)learnCKInfosFromSavedRecords:(id)arg1 isOutOfBandModifyRecords:(BOOL)arg2;
- (unsigned long long)nextSyncUpRequestID;
- (void)_markRequestIDAcked;
- (void)_markLatestSyncRequestFailed;
- (id)directoryItemIDsCreatedLastSyncUp;
- (void)prepareDirectoryForSyncUp:(id)arg1;
- (void)clearSyncUpError;
- (void)resetSyncBudgetAndThrottle;
- (void)scheduleSyncDownForOOBModifyRecordsAck;
- (void)scheduleSyncDownFirst;
- (void)scheduleSyncDown;
- (void)scheduleSyncDownWithGroup:(id)arg1;
- (void)scheduleSyncUp;
- (void)_startSync;
- (id)syncDownImmediately;
- (void)_blockSyncDownOnStitchingOperations;
- (void)removeSyncDownDependency:(id)arg1;
- (void)addSyncDownDependency:(id)arg1;
- (void)clearSyncStateBits:(unsigned int)arg1;
- (void)setSyncStateBits:(unsigned int)arg1;
@property(readonly) unsigned int syncState;
- (void)didClearOutOfQuota;
- (struct PQLResultSet *)documentsNotIdleEnumeratorWithDB:(id)arg1;
- (struct PQLResultSet *)itemsWithInFlightDiffsEnumerator;
- (BOOL)hasItems;
- (BOOL)hasItemsWithInFlightDiffs;
- (struct PQLResultSet *)itemsEnumeratorWithDB:(id)arg1;
- (BOOL)serverItemTypeByItemID:(id)arg1 db:(id)arg2;
- (BOOL)existsByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (BOOL)existsByParentID:(id)arg1 andLogicalName:(id)arg2;
- (struct PQLResultSet *)itemEnumeratorByParentID:(id)arg1 andCaseInsensitiveLogicalName:(id)arg2;
- (id)itemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (id)itemByParentID:(id)arg1 andLogicalName:(id)arg2;
- (id)serverItemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;
- (id)serverItemByParentID:(id)arg1 andLogicalName:(id)arg2;
- (id)descriptionWithContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToClientZone:(id)arg1;
- (BOOL)isSyncBlockedBecauseOSNeedsUpgrade;
- (BOOL)isSyncBlockedBecauseAppNotInstalled;
- (BOOL)isSyncBlocked;
- (void)clearStateBits:(unsigned int)arg1;
- (BOOL)setStateBits:(unsigned int)arg1;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)_forDBUpgrade_setStateBits:(unsigned int)arg1 clearStateBits:(unsigned int)arg2;
@property(readonly, nonatomic) BOOL isForeground;
@property(readonly, nonatomic) BOOL isCloudDocsZone;
- (void)recomputeAllItemsDidUploadState;
- (BOOL)_hasUploadTrackers;
- (void)_allItemsDidUploadWithError:(id)arg1;
- (void)unregisterAllItemsDidUploadTracker:(id)arg1;
- (void)registerAllItemsDidUploadTracker:(id)arg1;
- (BOOL)handleZoneLevelErrorIfNeeded:(id)arg1;
- (void)scheduleResetServerAndClientTruthsForReason:(const char *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scheduleResetServerAndClientTruthsForReason:(const char *)arg1;
- (void)close;
- (void)resume;
- (void)associateWithServerZone:(id)arg1 offline:(BOOL)arg2;
- (void)associateWithServerZone:(id)arg1;
- (void)updateWithPlist:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *plist;
- (void)dealloc;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(BOOL)arg6;
- (id)init;
- (void)_increaseSyncUpBatchSizeAfterSuccess;
- (void)_decreaseSyncUpBatchSizeAfterError;
@property(readonly, nonatomic) unsigned int syncUpBatchSize;
@property(readonly, nonatomic) BOOL isSharedZone;
@property(readonly, nonatomic) BOOL isPrivateZone;
@property(readonly, nonatomic) ICDBRMangledID *mangledID; // @synthesize mangledID=_mangledID;
@property(readonly, nonatomic) BRCItemID *rootItemID;
- (id)asSharedClientZone;
- (id)asPrivateClientZone;
- (id)ownerName;
- (void)_finishedReset:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_cancelAllOperationsForReset;
- (void)_performAfterResetServerAndClientTruthsAndUnlinkDataAndPurgeTheZone:(CDUnknownBlockType)arg1;
- (void)_performAfterResetServerAndClientTruthsAndUnlinkData:(CDUnknownBlockType)arg1;
- (void)_performAfterResetServerAndClientSharedTruthsAndUnlinkData:(CDUnknownBlockType)arg1;
- (void)_performAfterResetServerAndClientPrivateTruthsAndUnlinkData:(CDUnknownBlockType)arg1;
- (void)_performResetAndWantsUnlink:(BOOL)arg1 clientTruthBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)supportsKeepingClientItemsDuringReset;
- (void)_reset:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scheduleReset:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scheduleReset:(unsigned long long)arg1;
- (void)cancelReset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

