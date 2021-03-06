//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "VersionVectorDatum-Protocol.h"
#import "VersionVectorStore-Protocol.h"

@class LogFormatter, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString, SNode, SPeer, SStore, SSyncEngine, VersionVector;

@interface PeerNodeData : NSObject <VersionVectorDatum, VersionVectorStore, NSCopying>
{
    NSMutableArray *_allJobs;
    NSMutableArray *_jobsForCurrentSyncPass;
    NSMutableArray *_moveJobs;
    NSMutableArray *_readOnlyJobs;
    SPeer *_peer;
    SSyncEngine *_engine;
    NSString *_parentPath;
    SNode *_originalParent;
    SNode *_parent;
    SNode *_node;
    BOOL _excluded;
    BOOL _haveNonTrivialJob;
    LogFormatter *_lf;
    unsigned int _newNodeCount;
    NSString *_name;
    BOOL _readOnly;
    BOOL _supportsDeepCopy;
    SStore *_store;
    NSString *_storeID;
    NSNumber *_versionID;
    NSDictionary *_vvReductionTable;
}

+ (id)peerNodeDataWithPeer:(id)arg1 forEngine:(id)arg2;
@property(retain, nonatomic) NSDictionary *versionVectorReductionTable; // @synthesize versionVectorReductionTable=_vvReductionTable;
@property(retain, nonatomic) NSNumber *versionID; // @synthesize versionID=_versionID;
@property(nonatomic) BOOL supportsDeepCopy; // @synthesize supportsDeepCopy=_supportsDeepCopy;
@property(nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(nonatomic) SStore *store; // @synthesize store=_store;
@property(nonatomic) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, retain, nonatomic) NSMutableArray *readOnlyJobs; // @synthesize readOnlyJobs=_readOnlyJobs;
@property(nonatomic) SPeer *peer; // @synthesize peer=_peer;
@property(retain, nonatomic) NSString *parentPath; // @synthesize parentPath=_parentPath;
@property(nonatomic) SNode *parent; // @synthesize parent=_parent;
@property(nonatomic) SNode *originalParent; // @synthesize originalParent=_originalParent;
@property(nonatomic) SNode *node; // @synthesize node=_node;
@property(nonatomic) unsigned int newNodeCount; // @synthesize newNodeCount=_newNodeCount;
@property(retain, nonatomic) LogFormatter *lf; // @synthesize lf=_lf;
@property(nonatomic) NSMutableArray *jobsForCurrentSyncPass; // @synthesize jobsForCurrentSyncPass=_jobsForCurrentSyncPass;
@property(nonatomic) BOOL haveNonTrivialJob; // @synthesize haveNonTrivialJob=_haveNonTrivialJob;
@property(nonatomic) BOOL excluded; // @synthesize excluded=_excluded;
@property(nonatomic) SSyncEngine *engine; // @synthesize engine=_engine;
@property(readonly, retain, nonatomic) NSArray *allJobs; // @synthesize allJobs=_allJobs;
- (id)description;
@property(readonly, retain, nonatomic) VersionVector *versionVector;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setNextNode:(id)arg1;
- (void)removeNonMoveJobs;
- (void)queueSyncJob:(id)arg1;
- (void)logNodeStatus;
- (void)loadParent:(id)arg1;
- (void)loadPath:(id)arg1;
- (void)loadChildNamed:(id)arg1;
- (BOOL)hasEqualNode:(id)arg1;
- (void)dequeueSyncJob:(id)arg1;
- (void)copyIntoSet:(id)arg1;
- (void)cancelReadOnlyJobs;
- (void)cancelJobsForPass:(unsigned long long)arg1;
- (void)beginNewSyncPass:(unsigned long long)arg1;
- (void)addVersionVectorsToTable;
- (void)addStringToTable:(id)arg1;
- (void)addLocationVersionVectorsToTable;
- (void)dealloc;

@end

