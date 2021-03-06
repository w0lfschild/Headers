//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class TSDUndoObject, TSUUUIDPath;
@protocol TSWPFlowInfoContainer;

@interface TSWPRemoveFlowInfoCommand : TSKCommand <GSSPAutoEncodable>
{
    TSUUUIDPath *_flowInfoUUIDPath;
    id <TSWPFlowInfoContainer> _flowInfoContainer;
    TSDUndoObject *_undoObject;
    TSDUndoObject *_undoObjectForMakeInverse;
    long long _undo_userInterfaceIdentifierToRestore;
    long long _undo_nextUserInterfaceIdentifierToRestore;
}

+ (id)commandForRemovingFlowInfo:(id)arg1;
@property(readonly, nonatomic) TSUUUIDPath *flowInfoUUIDPath; // @synthesize flowInfoUUIDPath=_flowInfoUUIDPath;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)loadFromUnarchiver:(id)arg1;
- (const struct RemoveFlowInfoCommandArchive *)removeFlowInfoCommandArchiveFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct RemoveFlowInfoCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct RemoveFlowInfoCommandArchive *)arg1 archiver:(id)arg2;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)operations;
- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)p_clearUndoState;
- (void)commit;
- (BOOL)p_shouldCommit;
- (BOOL)process;
- (void)didInitFromSOS;
- (id)p_flowInfo;
- (id)initWithContext:(id)arg1 flowInfo:(id)arg2;
- (id)initWithContext:(id)arg1;
- (void)populateGSSPCmdRemoveFlowInfo:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

