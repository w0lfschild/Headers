//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMenu, NSSet, VOUWindowController, _TtC17VoiceOver_Utility20ExportViewController;

@interface AppDelegate : NSObject
{
    VOUWindowController *_voiceOverOptions;
    NSSet *_prefSelectorSet;
    NSMenu *_viewMenu;
    _TtC17VoiceOver_Utility20ExportViewController *__exportViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC17VoiceOver_Utility20ExportViewController *_exportViewController; // @synthesize _exportViewController=__exportViewController;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)handleAssignCustomOpenWithCommandForMenuItem:(id)arg1;
- (void)handleReassignFactoryCommandForMenuItem:(id)arg1;
- (void)handleUnassignCommandForMenuItem:(id)arg1;
- (void)handleAssignCommandForMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)moveToSearchField:(id)arg1;
- (void)showRecognitionPane:(id)arg1;
- (void)showActivitiesPane:(id)arg1;
- (void)showBraillePane:(id)arg1;
- (void)showCommanderPane:(id)arg1;
- (void)showAudioPane:(id)arg1;
- (void)showVisualsPane:(id)arg1;
- (void)showWebPane:(id)arg1;
- (void)showNavigationPane:(id)arg1;
- (void)showSpeechPane:(id)arg1;
- (void)showVerbosityPane:(id)arg1;
- (void)showGeneralPane:(id)arg1;
- (void)resetActivitiesPreferences:(id)arg1;
- (void)resetPronunciationPreferences:(id)arg1;
- (void)resetBraillePreferences:(id)arg1;
- (void)resetTouchPreferences:(id)arg1;
- (void)resetQuickNavPreferences:(id)arg1;
- (void)resetKeyboardPreferences:(id)arg1;
- (void)resetNumpadPreferences:(id)arg1;
- (void)resetAllPreferences:(id)arg1;
- (void)resetBasicPreferences:(id)arg1;
- (void)resetHotspots:(id)arg1;
- (void)resetWebspots:(id)arg1;
- (void)resetCustomLabels:(id)arg1;
- (void)stopPortablePreferences:(id)arg1;
- (void)startPortablePreferences:(id)arg1;
- (void)createPortablePreferences:(id)arg1;
- (void)_showExportFailedAlertForURL:(id)arg1;
- (void)export:(id)arg1;
- (void)_tellUserImportFailedWithMessage:(id)arg1;
- (void)_importWarningDidEnd:(id)arg1 returnCode:(long long)arg2 filename:(id)arg3;
- (void)_warnUserBeforeImport:(id)arg1;
- (void)import:(id)arg1;
- (void)showQuickNavCommands:(id)arg1;
- (void)showGestureCommands:(id)arg1;
- (void)showKeyCommands:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)showAboutPanel:(id)arg1;
- (void)application:(id)arg1 openFile:(id)arg2;
- (void)bailIfCacheBuilderLaunchedAccidentalyForFile:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (id)init;

@end

