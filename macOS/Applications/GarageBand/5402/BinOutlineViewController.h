//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFilePromiseProviderDelegate-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"

@class BinMAKitOutlineView, BinView, MAKitMenu, NSDictionary, NSFont, NSImage, NSMutableArray, NSMutableDictionary, NSMutableSet, NSMutableString, NSScroller, NSString, NSTimer;

@interface BinOutlineViewController : NSObject <NSOutlineViewDelegate, NSOutlineViewDataSource, NSFilePromiseProviderDelegate>
{
    BinView *m_view;
    BinMAKitOutlineView *m_outlineView;
    BOOL m_isProjectAudioWindow;
    MAKitMenu *m_contextMenu;
    NSScroller *m_outlineViewVerticalScroller;
    float m_outlineViewVerticalScrollerValue;
    NSImage *m_lock_image;
    NSImage *m_unlock_image;
    NSImage *m_followTempo_image;
    NSImage *m_clock_image;
    NSImage *m_metronome_image;
    NSImage *m_stereo_image;
    NSImage *m_stereoSplit_image;
    NSImage *m_mono_image;
    NSImage *m_stereoLoop_image;
    NSImage *m_monoLoop_image;
    NSImage *m_surround_image;
    NSImage *m_followTempoSplit_image;
    NSImage *m_followTempoStereo_image;
    NSImage *m_followTempoMono_image;
    NSImage *m_stereoCompressed_image;
    NSImage *m_monoCompressed_image;
    NSMutableArray *m_binGlyphs;
    NSFont *m_font;
    NSFont *m_font2;
    NSDictionary *m_attributesPlain;
    NSDictionary *m_attributesBold;
    NSMutableDictionary *m_data;
    BOOL m_displayGroups;
    struct CDocumentLogic *m_myDoc;
    BOOL m_updating;
    BOOL m_noExpanding;
    BOOL m_isDrawingPlayhead;
    long long m_scrollRow;
    long long m_clickedRow;
    long long m_clickedCol;
    BOOL m_block_send_UM_CHAURGN;
    int m_regionLengthInfoUnit;
    NSTimer *m_timer;
    NSTimer *m_timer2;
    long long m_playHead;
    double m_RegionRowHeight;
    double m_FileRowHeight;
    double m_GroupRowHeight;
    BOOL m_handlingCMsgs;
    BOOL m_inModalRunLoop;
    BOOL m_needSyncSelectedStates;
    BOOL m_needSyncExpandedStates;
    BOOL m_needAdjustScroller;
    BOOL m_needScrollRowToCurrent;
    NSMutableSet *m_smartTempoModifiedGroupIndexes;
    NSTimer *m_timer3;
    BOOL noWaveformRenderingInWillDisplayCell;
    BOOL _noDraggingFlag;
    BOOL _playBackStopped;
    BOOL _draggingRequestingFirstItem;
    int _firstfileindex;
    int _firstsegindex;
    int _lastFileIndex;
    int _lastRegionIndex;
    NSMutableArray *_regionArray;
    NSMutableString *_regionString;
}

@property int lastRegionIndex; // @synthesize lastRegionIndex=_lastRegionIndex;
@property int lastFileIndex; // @synthesize lastFileIndex=_lastFileIndex;
@property int firstsegindex; // @synthesize firstsegindex=_firstsegindex;
@property int firstfileindex; // @synthesize firstfileindex=_firstfileindex;
@property(retain) NSMutableString *regionString; // @synthesize regionString=_regionString;
@property(retain) NSMutableArray *regionArray; // @synthesize regionArray=_regionArray;
@property BOOL draggingRequestingFirstItem; // @synthesize draggingRequestingFirstItem=_draggingRequestingFirstItem;
@property BOOL playBackStopped; // @synthesize playBackStopped=_playBackStopped;
@property BOOL noDraggingFlag; // @synthesize noDraggingFlag=_noDraggingFlag;
- (void)nibwUserDataWSEQ:(struct WSEQ *)arg1;
- (id)nibwUserData;
- (void)setNibwUserData:(id)arg1;
- (void)checkedMoveColumn:(long long)arg1 toColumn:(long long)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)filePromiseProvider:(id)arg1 writePromiseToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)filePromiseProvider:(id)arg1 fileNameForType:(id)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (void)retargetDropForProposedItem:(id)arg1 inOutlineView:(id)arg2;
- (long long)findChildIndexOfFileForItem:(id)arg1 inOutlineView:(id)arg2 isInGroup:(id *)arg3;
- (id)audioGroupForProposedItem:(id)arg1 inOutlineView:(id)arg2;
- (BOOL)validateDropOfPath:(id)arg1;
- (id)outlineView:(id)arg1 pasteboardWriterForItem:(id)arg2;
- (struct CFileRef)getFileRefForItem:(id)arg1;
- (void)draggingWillStart;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItems:(id)arg4;
- (void)setDraggingImagesForSession:(id)arg1 items:(id)arg2;
- (void)outlineView:(id)arg1 quickHelpForCell:(id)arg2 tableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (void)inPoolExpandAll:(BOOL)arg1 item:(id)arg2;
- (void)inPoolExpand:(BOOL)arg1 item:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)synchLaunchAudioesInArrangeWithRegions;
- (void)outlineView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)binOutlineView:(id)arg1 didClickColumn:(long long)arg2 row:(long long)arg3;
- (void)binOutlineViewDidDoubleClick;
- (void)binOutlineViewEditorNotification:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (void)editFile:(int)arg1 region:(int)arg2 regionEditMode:(long long)arg3 value:(long long)arg4;
- (void)playHeadDrawThread:(id)arg1;
- (void)playHeadDraw;
- (void)updateInformativeText;
- (void)updatePrelistenVolumeSlider;
- (void)setInformativeText:(id)arg1;
- (void)updateData;
- (void)cleanAndUpdateData;
- (void)synchronizeExpandedStates;
- (void)synchronizeExpandedStatesInBin:(id)arg1 collapseSelectedObjects:(BOOL)arg2;
- (void)synchronizeSelectedStates;
- (long long)synchronizeSelectedStatesInBin:(id)arg1 extendSelection:(long long)arg2;
- (id)data;
- (BOOL)displayGroups;
- (void)setDisplayGroups:(BOOL)arg1;
- (void)removeAllMarkedObjectsInBin:(id)arg1;
- (void)markAllObjectsInBin:(id)arg1;
- (id)imageIconForChannelType:(long long)arg1;
- (void)drawSampleFlagsImageToRegionCell:(id)arg1 locked:(BOOL)arg2 timeStamp:(BOOL)arg3;
- (void)drawSampleFlagsImageToFileCell:(id)arg1 tempoFollow:(BOOL)arg2 tempoInformation:(BOOL)arg3 channelType:(int)arg4;
- (void)compositeImage:(id)arg1 toPoint:(struct CGPoint)arg2;
@property(readonly, retain) BinView *view;
- (void)audioFolderSorting;
- (void)nameSorting;
- (void)deleteSelectedItems;
@property BOOL denyExpanding;
- (void)stopAudioPlaybackNotification:(id)arg1;
- (void)stopAudioPlayback;
- (void)audioPlayRedraw;
- (void)setupContextMenu;
- (void)updateContextMenu;
- (void)numberOfSelectedRegions:(unsigned int *)arg1 files:(unsigned int *)arg2;
- (void)menuItem:(id)arg1 setTitle:(id)arg2 setEnabled:(BOOL)arg3;
- (void)contextMenuAction:(id)arg1;
- (void)showHideRegionLengthTableColumn;
@property BOOL isProjectAudioWindow;
- (void)dealloc;
- (void)awakeFromNib;
- (void)setClipViewBackgroundColorToAvoidColoredFrameInInactiveState;
- (id)initWithDocPtr:(struct CDocumentLogic *)arg1 isProjectAudioWindow:(BOOL)arg2;
- (id)init;
-     // Error parsing type: ^{CDocumentLogic=^{CDocumentLogic}{FileRec=C{CFileIO={CFileRef=^{__CFURL}q*{FSRef=[80C]}}iqq*qqCq**iI}}{unique_ptr<CSong, std::__1::default_delete<CSong> >={__compressed_pair<CSong *, std::__1::default_delete<CSong> >=^{CSong}}}sC@@@@{CFileRef=^{__CFURL}q*{FSRef=[80C]}}{CFileRef=^{__CFURL}q*{FSRef=[80C]}}^{__CFDictionary}BB}24@0:8^{CSong={FVARS=IssssIisii{TPureClock=q}ccCc{TPosOneBasedTrackNr=s}{TPosOneBasedTrackNr=s}iiiiiicccciiiiiiiqiiiiiccccCCcccccccccc[12c]scccccccCcccccciccCccccccccccccccccciii{TPosOneBasedTrackNr=s}s{TPosOneBasedTrackNr=s}ssscccccciiicciiissccscccCcCcc[8c]cccCccccssscccccccc{TVolatile<TAbsPureClock>=q}{TVolatile<TAbsPureClock>=q}{TAbsPureClock=q}{TAbsPureClock=q}{TSignedPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}i{TPosOneBasedTrackNr=s}ccfccs{TAbsPureClock=q}{TAbsPureClock=q}{TPureLength=q}c{TAbsPureClock=q}ccccccc{TAbsPureClock=q}ii{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}ccc[54c]SS}{FVARS=IssssIisii{TPureClock=q}ccCc{TPosOneBasedTrackNr=s}{TPosOneBasedTrackNr=s}iiiiiicccciiiiiiiqiiiiiccccCCcccccccccc[12c]scccccccCcccccciccCccccccccccccccccciii{TPosOneBasedTrackNr=s}s{TPosOneBasedTrackNr=s}ssscccccciiicciiissccscccCcCcc[8c]cccCccccssscccccccc{TVolatile<TAbsPureClock>=q}{TVolatile<TAbsPureClock>=q}{TAbsPureClock=q}{TAbsPureClock=q}{TSignedPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}i{TPosOneBasedTrackNr=s}ccfccs{TAbsPureClock=q}{TAbsPureClock=q}{TPureLength=q}c{TAbsPureClock=q}ccccccc{TAbsPureClock=q}ii{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}ccc[54c]SS}[120c]cCcc[170c][16C]cccc{CTFlagSet<_SONG::TSelBasedFlags, unsigned char>=C}c{CTFlagSet<_SONG::TFreeRecordingFlags, unsigned char>=C}ccccCcc[95s]{CTFlagSet<_SONG::TGeneralFlags, unsigned short>=S}SSSS[108i][16i]iiiiiiiii{CTronFlags={CTFlagSet<TTronFlags, int>=i}}i{CTFlagSet<_SONG::TVariousEditorFlags, int>=i}iiiiiiiiiiiIif^{CSongObjects}^{tMapGenData}^{GenDataPointerGroup}^{vector<MAMem2, std::__1::allocator<MAMem2> >}^{CAdjustBeats}^{CTrackConductor}^{CTransientContainer}^{CMovieThumbnailUtility}^{CMovieData}^{CChordTypes}^{CAssessmentController}i{TTrackNr=qi}ii{MORESEQPARS=sssccs{QUAMOD=ss(?=s{?=cc})sss}{TSignedPureLength=q}cccccc{REALS=qq}iccsIiiicccc}{MORESEQPARS=sssccs{QUAMOD=ss(?=s{?=cc})sss}{TSignedPureLength=q}cccccc{REALS=qq}iccsIiiicccc}{TAbsPureClock=q}S[16c]i{CTFlagSet<_SONG::TSongRuntimeFlags, int>=i}^{CEvs}c{CNoteRepeatPars=cccccccccccccccccccccccc[8c]}QiiC^{CUndoManager}BB{atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}B{unique_ptr<CSongCategories, std::__1::default_delete<CSongCategories> >={__compressed_pair<CSongCategories *, std::__1::default_delete<CSongCategories> >=^{CSongCategories}}}}16, name: setDocPtrWithSong:
- (struct CDocumentLogic *)setDocPtr:(struct CDocumentLogic *)arg1;
- (void)queueGroupIndexesForSmartTempoDialog;
- (void)timer3Callback:(id)arg1;
- (void)removeNotifications;
- (void)addNotifications;
- (void)viewVisibilityChange:(BOOL)arg1;
@property(readonly, retain) BinMAKitOutlineView *outlineView;
- (id)visibleItemForFileIndex:(int)arg1 segIndex:(int)arg2 row:(long long *)arg3;
- (void)scrollRowToCurrent;
- (BOOL)row:(long long)arg1 isVisibleInOutlineView:(id)arg2;
- (void)refreshAudioWindowUnilibMessageFileIndex:(int)arg1 segIndex:(int)arg2;
- (void)LogicBinCreateAudioGroup:(id)arg1;
- (void)timerCallback:(id)arg1;
- (void)handleUM_CHTEMPO_id:(id)arg1;
- (void)handleUM_FORMAT_id:(id)arg1;
- (void)handleUM_CHSIGNTIME_id:(id)arg1;
- (void)handleUM_AUDIOPLAY_id:(id)arg1;
- (void)handleUM_AUDIOCYCLE_id:(id)arg1;
- (void)handleUM_SONG_id:(id)arg1;
- (void)handleUM_DELEV_id:(id)arg1;
- (void)handleUM_CHSEL_id:(id)arg1;
- (void)syncSelection;
- (void)handleUM_CHAUSEL_id:(id)arg1;
- (void)handleUM_CHAURGN_id:(id)arg1;
- (void)chaurgnFileIndex:(int)arg1 segIndex:(int)arg2;
- (void)handleUM_NEWAURGN_id:(id)arg1;
- (void)handleUM_CHAUDIODATA_id:(id)arg1;
- (void)handleUM_ELASTICMODE_id:(id)arg1;
- (void)binBefehlNotification:(id)arg1;
- (BOOL)isOwnMessage:(struct CMsg *)arg1;
- (void)handleVQWHILE:(id)arg1;
- (void)handleVQDO:(id)arg1;
- (void)handleDidSendCMsgs:(id)arg1;
- (void)handleWillSendCMsgs:(id)arg1;
- (void)doDeferredUpdates;
- (void)initDeferredUpdateFlags;
- (void)setNoWaveformRenderingInWillDisplayCell:(BOOL)arg1;
- (void)reloadData;
- (void)adjustScroller;
- (void)restoreSongContext:(struct CDocumentLogic *)arg1;
- (struct CDocumentLogic *)setSongContext;
- (id)cLgView;
- (BOOL)songIsValid:(struct CDocumentLogic *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

