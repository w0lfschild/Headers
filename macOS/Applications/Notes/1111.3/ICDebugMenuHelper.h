//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRandomNoteGenerator, NSMenu, NSMenuItem;

@interface ICDebugMenuHelper : NSObject
{
    unsigned long long _tag;
    NSMenu *_appMenu;
    NSMenuItem *_debugMenuItem;
    ICRandomNoteGenerator *_randomNoteGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICRandomNoteGenerator *randomNoteGenerator; // @synthesize randomNoteGenerator=_randomNoteGenerator;
@property(retain, nonatomic) NSMenuItem *debugMenuItem; // @synthesize debugMenuItem=_debugMenuItem;
@property(retain, nonatomic) NSMenu *appMenu; // @synthesize appMenu=_appMenu;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (void)regenerateAllHandwritingSummaries:(id)arg1;
- (void)regenerateAllImageClassifications:(id)arg1;
- (void)regenerateAllOCR:(id)arg1;
- (void)toggleImageClassificationDisabled:(id)arg1;
- (void)toggleOCRDisabled:(id)arg1;
- (void)regenerateFullscreenSketchImages:(id)arg1;
- (void)regenerateAllAttachmentPreviewImages:(id)arg1;
- (void)deleteSearchIndex:(id)arg1;
- (void)reindexEverything:(id)arg1;
- (void)clearCachedKeys:(id)arg1;
- (void)toggleDisableDeleteFolder:(id)arg1;
- (void)resetAutoSortChecklistAlert:(id)arg1;
- (void)resetRecentlyDeletedWarning:(id)arg1;
- (void)removeAllPasswords:(id)arg1;
- (void)toggleAutoDivergedAttachmentFix:(id)arg1;
- (void)removeNotePasswords:(id)arg1;
- (void)removeAccountPassword:(id)arg1;
- (void)setWhatsNewToSierra:(id)arg1;
- (void)setWhatsNewToCurrentOS:(id)arg1;
- (void)removeWhatsNewVersion:(id)arg1;
- (id)lastSeenWhatsNewVersion;
- (void)deleteMigratedDuplicates:(id)arg1;
- (void)resetLocalAccountMigration:(id)arg1;
- (void)migrateLocalAccount:(id)arg1;
- (void)migrateICloudAccount:(id)arg1;
- (void)deleteDocCamPDFs:(id)arg1;
- (void)refreshModernMainContextObjects:(id)arg1;
- (void)dumpStateOfWorld:(id)arg1;
- (void)crashThisApp:(id)arg1;
- (void)fuzzTest:(id)arg1;
- (void)fuzz:(id)arg1;
- (void)saveObfuscatedArchive:(id)arg1;
- (void)saveArchive:(id)arg1;
- (void)saveArchive:(id)arg1 obfuscate:(BOOL)arg2;
- (void)loadArchive:(id)arg1;
- (void)startFresh:(id)arg1;
- (void)deleteEverythingIncludingCloud:(id)arg1;
- (void)deleteEverything:(id)arg1;
- (void)createAttachmentsFromTheFuture:(id)arg1;
- (void)createRecordsFromTheFuture:(id)arg1;
- (void)deleteServerChangeTokens:(id)arg1;
- (void)populateAccounts;
- (void)loadCloudConfiguration:(id)arg1;
- (void)populateCloudConfigurations;
- (void)showRandomNoteWindowController:(id)arg1;
- (void)refetchEverything:(id)arg1;
- (void)pushEverythingToCloud:(id)arg1;
- (void)refreshCloudData:(id)arg1;
- (void)loadTestData:(id)arg1;
- (void)enableDebugMenu;
- (void)populateDebugMenu;
- (id)URLsForTestDataDirectories;
- (void)confirmDestructiveActionWithTitle:(id)arg1 message:(id)arg2 buttonText:(id)arg3 block:(CDUnknownBlockType)arg4;
- (BOOL)validateMenuItem:(id)arg1;
- (void)awakeFromNib;

@end

