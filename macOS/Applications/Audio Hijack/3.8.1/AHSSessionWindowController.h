//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GXWindowController.h"

@class AHSSession, GEGraphController, GEGraphView, GXListView, GXSettingsView;

@interface AHSSessionWindowController : GXWindowController
{
    AHSSession *_session;
    GEGraphController *_graphController;
    GEGraphView *_graphView;
    GXListView *_libraryView;
    GXSettingsView *_graphToolsView;
    GXSettingsView *_navToolsView;
}

@property(readonly, nonatomic) GEGraphController *graphController; // @synthesize graphController=_graphController;
@property(readonly, nonatomic) AHSSession *session; // @synthesize session=_session;
- (void)keyDown:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)exportSessions:(id)arg1;
- (void)toggleLibraryHidden:(id)arg1;
- (void)setLibraryHiddenBtn:(BOOL)arg1;
- (BOOL)libraryHiddenBtn;
- (void)setRecBinBtn:(BOOL)arg1;
- (BOOL)recBinBtn;
- (void)setScheduleBtn:(BOOL)arg1;
- (BOOL)scheduleBtn;
- (id)libraryHiddenText;
- (void)setLibraryHidden:(BOOL)arg1;
- (BOOL)libraryHidden;
- (void)_setLibraryWidth:(float)arg1 animated:(BOOL)arg2;
- (void)_setupLibraryController;
- (void)_loadLibraryAudioUnits;
- (void)updateDisplay;
- (void)updateDisplayWithDuration:(float)arg1;
- (void)raUpdate;
- (void)closeAndUnloadWindow;
- (BOOL)windowShouldClose:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)registrationChanged:(id)arg1;
- (void)modelChangedNotification:(id)arg1;
- (void)setupNewWindow;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end

