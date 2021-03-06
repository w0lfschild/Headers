//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MAButton, NSButton, NSScrollView, NSString, NSTableView, NSView;

@interface GroupSettingsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSButton *clutch;
    MAButton *m_actionButton;
    NSScrollView *scroll;
    NSTableView *_tableView;
    NSView *settingsView;
    NSButton *disclosure;
    NSButton *flagSelect;
    NSButton *flagPhaseLocked;
    NSButton *flagAutoMode;
    NSButton *flagVolume;
    NSButton *flagPan;
    NSButton *flagMute;
    NSButton *flagSolo;
    NSButton *flagInput;
    NSButton *flagRec;
    NSButton *flagSend1;
    NSButton *flagSend2;
    NSButton *flagSend3;
    NSButton *flagSend4;
    NSButton *flagSend5;
    NSButton *flagSend6;
    NSButton *flagSend7;
    NSButton *flagSend8;
    NSButton *flagColor;
    NSButton *flagHide;
    NSButton *flagZoom;
    NSButton *flagAlternative;
    BOOL isObservingMessages;
    struct MixGroupFlags onStates;
    struct MixGroupFlags mixedStates;
    long long _menuRow;
}

+ (id)visibleGroupSettingsController:(id)arg1;
- (id).cxx_construct;
@property long long menuRow; // @synthesize menuRow=_menuRow;
@property(readonly) NSButton *clutchButton; // @synthesize clutchButton=clutch;
@property(readonly) NSView *settingsView; // @synthesize settingsView;
@property(readonly) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly) NSScrollView *scrollView; // @synthesize scrollView=scroll;
@property(readonly) NSButton *disclosureButton; // @synthesize disclosureButton=disclosure;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)changeFlag:(id)arg1;
- (void)changeFlag:(short)arg1 to:(long long)arg2;
- (void)menuAction:(id)arg1;
- (unsigned long long)pasteGroupSettings:(int)arg1;
- (unsigned long long)copyGroupSettings:(int)arg1;
- (unsigned long long)addOrRemoveSelected:(BOOL)arg1 mode:(int)arg2;
- (unsigned long long)deleteGroups:(BOOL)arg1 mode:(int)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (id)unusedGroups;
- (int)numberOfMembers:(short)arg1;
- (CFlagSet_f51f77c4)allSelectedGroups;
- (void)changeClutch:(id)arg1;
- (void)changeName:(id)arg1;
- (void)updateUI;
- (void)enumerateSelectedGroupsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)inverseFlagState:(short)arg1;
- (long long)flagState:(short)arg1;
- (void)selectGroups:(id)arg1;
- (id)editedGroups;
- (void)cancelPendingDelayedSelectors;
- (void)handleUM_GDEL:(id)arg1;
- (void)handleUM_HIDE:(id)arg1;
- (void)handleUM_MIXGROUP:(id)arg1;
- (void)handleUM_TRACKSEL:(id)arg1;
- (void)handleUM_PATRACK:(id)arg1;
- (void)delayedTrackSelNotificationAction;
-     // Error parsing type: ^{CSong={FVARS=IssssIisii{TPureClock=q}ccCc{TPosOneBasedTrackNr=s}{TPosOneBasedTrackNr=s}iiiiiicccciiiiiiiqiiiiiccccCCcccccccccc[12c]scccccccCcccccciccCccccccccccccccccciii{TPosOneBasedTrackNr=s}s{TPosOneBasedTrackNr=s}ssscccccciiicciiissccscccCcCcc[8c]cccCccccssscccccccc{TVolatile<TAbsPureClock>=q}{TVolatile<TAbsPureClock>=q}{TAbsPureClock=q}{TAbsPureClock=q}{TSignedPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}i{TPosOneBasedTrackNr=s}ccfccs{TAbsPureClock=q}{TAbsPureClock=q}{TPureLength=q}c{TAbsPureClock=q}ccccccc{TAbsPureClock=q}ii{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}ccc[54c]SS}{FVARS=IssssIisii{TPureClock=q}ccCc{TPosOneBasedTrackNr=s}{TPosOneBasedTrackNr=s}iiiiiicccciiiiiiiqiiiiiccccCCcccccccccc[12c]scccccccCcccccciccCccccccccccccccccciii{TPosOneBasedTrackNr=s}s{TPosOneBasedTrackNr=s}ssscccccciiicciiissccscccCcCcc[8c]cccCccccssscccccccc{TVolatile<TAbsPureClock>=q}{TVolatile<TAbsPureClock>=q}{TAbsPureClock=q}{TAbsPureClock=q}{TSignedPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}i{TPosOneBasedTrackNr=s}ccfccs{TAbsPureClock=q}{TAbsPureClock=q}{TPureLength=q}c{TAbsPureClock=q}ccccccc{TAbsPureClock=q}ii{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}ccc[54c]SS}[120c]cCcc[170c][16C]cccc{CTFlagSet<_SONG::TSelBasedFlags, unsigned char>=C}c{CTFlagSet<_SONG::TFreeRecordingFlags, unsigned char>=C}ccccCcc[95s]{CTFlagSet<_SONG::TGeneralFlags, unsigned short>=S}SSSS[108i][16i]iiiiiiiii{CTronFlags={CTFlagSet<TTronFlags, int>=i}}i{CTFlagSet<_SONG::TVariousEditorFlags, int>=i}iiiiiiiiiiiIif^{CSongObjects}^{tMapGenData}^{GenDataPointerGroup}^{vector<MAMem2, std::__1::allocator<MAMem2> >}^{CAdjustBeats}^{CTrackConductor}^{CTransientContainer}^{CMovieThumbnailUtility}^{CMovieData}^{CChordTypes}^{CAssessmentController}i{TTrackNr=qi}ii{MORESEQPARS=sssccs{QUAMOD=ss(?=s{?=cc})sss}{TSignedPureLength=q}cccccc{REALS=qq}iccsIiiicccc}{MORESEQPARS=sssccs{QUAMOD=ss(?=s{?=cc})sss}{TSignedPureLength=q}cccccc{REALS=qq}iccsIiiicccc}{TAbsPureClock=q}S[16c]i{CTFlagSet<_SONG::TSongRuntimeFlags, int>=i}^{CEvs}c{CNoteRepeatPars=cccccccccccccccccccccccc[8c]}QiiC^{CUndoManager}BB{atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}B{unique_ptr<CSongCategories, std::__1::default_delete<CSongCategories> >={__compressed_pair<CSongCategories *, std::__1::default_delete<CSongCategories> >=^{CSongCategories}}}}16@0:8, name: song
- (void)removeObservers;
- (void)addObservers;
- (void)dealloc;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)addActionItemWithTitle:(long long)arg1 befehl:(const struct TRegisteredBefehlID *)arg2;
- (void)syncSelectionToTrackSelection;
- (void)selectGroupsOfInst:(int)arg1;
- (void)addGroupsOfInst:(int)arg1 toIndexSet:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

