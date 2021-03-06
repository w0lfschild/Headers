//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDCommandInducedForPropagation-Protocol.h"
#import "TSDPropagatableCommand-Protocol.h"

@class KNAbstractSlide, KNSlideStyle, NSArray, NSString, TSUUUIDPath;

@interface KNCommandSlideSetStyle : TSKCommand <GSSPAutoEncodable, TSDPropagatableCommand, TSDCommandInducedForPropagation>
{
    TSUUUIDPath *_slideIdPath;
    KNSlideStyle *_slideStyle;
    KNSlideStyle *_oldSlideStyle;
}

@property(retain, nonatomic) KNSlideStyle *oldSlideStyle; // @synthesize oldSlideStyle=_oldSlideStyle;
@property(readonly, nonatomic) KNSlideStyle *style; // @synthesize style=_slideStyle;
@property(readonly, nonatomic) NSArray *objectsBeingModified;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(CDUnknownBlockType)arg1;
- (void)saveToArchive:(struct CommandSlideSetStyleArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct CommandSlideSetStyleArchive *)arg1 unarchiver:(id)arg2;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)operations;
- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (void)p_changeSlideStyleToStyle:(id)arg1;
- (void)undo;
- (void)redo;
- (void)commit;
- (BOOL)process;
@property(readonly, nonatomic) KNAbstractSlide *slide;
- (void)dealloc;
- (id)initWithSlideIdPath:(id)arg1 style:(id)arg2 context:(id)arg3;
- (id)initWithAbstractSlide:(id)arg1 style:(id)arg2;
- (void)populateGSSPCmdSlideSetStyle:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *otherSerializationClasses;
@property(readonly) Class superclass;

@end

