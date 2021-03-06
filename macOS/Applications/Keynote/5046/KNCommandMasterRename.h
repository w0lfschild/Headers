//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@class KNMasterSlide, NSString;

@interface KNCommandMasterRename : TSKCommand
{
    KNMasterSlide *_masterSlide;
    NSString *_masterName;
    NSString *_oldMasterName;
}

@property(readonly, nonatomic) NSString *oldMasterName; // @synthesize oldMasterName=_oldMasterName;
@property(readonly, nonatomic) NSString *masterName; // @synthesize masterName=_masterName;
@property(readonly, nonatomic) KNMasterSlide *masterSlide; // @synthesize masterSlide=_masterSlide;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct CommandRenameMasterArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct CommandRenameMasterArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)actionString;
- (void)undo;
- (void)p_doRedo;
- (void)redo;
- (void)commit;
- (BOOL)process;
- (id)initWithMasterSlide:(id)arg1 masterName:(id)arg2;

@end

