//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKLocationManagerObserver-Protocol.h"
#import "MSPMapsPushDaemonProxyObserver-Protocol.h"
#import "MapsDebugViewControllerDelegate-Protocol.h"
#import "NSApplicationDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSUserNotificationCenterDelegate-Protocol.h"

@class FavoritesSpotlightIndexingClient, FavoritesiCloudSyncClient, NSArray, NSMenu, NSMenuItem, NSString, NVMainWindowController, NVSharingController, RAPSubmitter;

__attribute__((visibility("hidden")))
@interface NVAppDelegate : NSObject <MapsDebugViewControllerDelegate, MSPMapsPushDaemonProxyObserver, NSApplicationDelegate, NSMenuDelegate, NSUserNotificationCenterDelegate, MKLocationManagerObserver>
{
    NSMenuItem *alwayShowLabelsMenuItem;
    NSMenuItem *pppTestMenuItem;
    NVSharingController *_currentSharingController;
    BOOL _displayingLocationErrorMessage;
    FavoritesiCloudSyncClient *_favoritesSyncClient;
    FavoritesSpotlightIndexingClient *_favoritesSpotlightIndexingClient;
    BOOL _hasVisibleReportAProblemSheet;
    BOOL _showDebugMenu;
    RAPSubmitter *_reportAProblemSubmitter;
    NSMenu *_navigoMenu;
    NSMenu *_viewMenu;
    NSMenuItem *_usesMilesForDistanceMenuItem;
    NSMenuItem *_usesKmForDistanceMenuItem;
    NSMenuItem *_reportAProblemMenuItem;
    NSMenuItem *_reportAProblemEmailPreferencesMenuItem;
    NSMenuItem *_preferDrivingMenuItem;
    NSMenuItem *_preferWalkingMenuItem;
    NSMenuItem *_preferTransitMenuItem;
    NSMenuItem *_directionsMenuItem;
    NSArray *_transitModeMenuItems;
    NSArray *_transitSortMenuItems;
    NSArray *_availableSortOptions;
}

+ (id)keyPathsForValuesAffectingMainWindowController;
@property(retain, nonatomic) NSArray *availableSortOptions; // @synthesize availableSortOptions=_availableSortOptions;
@property(retain, nonatomic) NSArray *transitSortMenuItems; // @synthesize transitSortMenuItems=_transitSortMenuItems;
@property(retain, nonatomic) NSArray *transitModeMenuItems; // @synthesize transitModeMenuItems=_transitModeMenuItems;
@property(nonatomic) __weak NSMenuItem *directionsMenuItem; // @synthesize directionsMenuItem=_directionsMenuItem;
@property __weak NSMenuItem *preferTransitMenuItem; // @synthesize preferTransitMenuItem=_preferTransitMenuItem;
@property __weak NSMenuItem *preferWalkingMenuItem; // @synthesize preferWalkingMenuItem=_preferWalkingMenuItem;
@property __weak NSMenuItem *preferDrivingMenuItem; // @synthesize preferDrivingMenuItem=_preferDrivingMenuItem;
@property __weak NSMenuItem *reportAProblemEmailPreferencesMenuItem; // @synthesize reportAProblemEmailPreferencesMenuItem=_reportAProblemEmailPreferencesMenuItem;
@property __weak NSMenuItem *reportAProblemMenuItem; // @synthesize reportAProblemMenuItem=_reportAProblemMenuItem;
@property __weak NSMenuItem *usesKmForDistanceMenuItem; // @synthesize usesKmForDistanceMenuItem=_usesKmForDistanceMenuItem;
@property __weak NSMenuItem *usesMilesForDistanceMenuItem; // @synthesize usesMilesForDistanceMenuItem=_usesMilesForDistanceMenuItem;
@property __weak NSMenu *viewMenu; // @synthesize viewMenu=_viewMenu;
@property __weak NSMenu *navigoMenu; // @synthesize navigoMenu=_navigoMenu;
@property(readonly, nonatomic) FavoritesiCloudSyncClient *favoritesSyncClient; // @synthesize favoritesSyncClient=_favoritesSyncClient;
@property(readonly, nonatomic) FavoritesSpotlightIndexingClient *favoritesSpotlightIndexingClient; // @synthesize favoritesSpotlightIndexingClient=_favoritesSpotlightIndexingClient;
@property(readonly, nonatomic) RAPSubmitter *reportAProblemSubmitter; // @synthesize reportAProblemSubmitter=_reportAProblemSubmitter;
@property(nonatomic) BOOL showDebugMenu; // @synthesize showDebugMenu=_showDebugMenu;
@property(nonatomic) BOOL hasVisibleReportAProblemSheet; // @synthesize hasVisibleReportAProblemSheet=_hasVisibleReportAProblemSheet;
- (void).cxx_destruct;
- (void)historyDidChange;
- (void)favoritesDidChange;
- (void)updateTransitMenus;
- (void)_updateMenuItemsForSelectedSortOption:(int)arg1;
- (void)_selectSortOption:(id)arg1;
- (id)_localizedTitleForSortOption:(int)arg1;
- (id)_menuItemForTransitSortOption:(int)arg1;
- (void)_updateEnabledTransitModes:(long long)arg1;
- (void)_toggleTransitMode:(id)arg1;
- (void)setDisabledTransitModes:(long long)arg1;
- (id)_localizedTitleForTransportMode:(long long)arg1;
- (id)_menuItemForMapsTransitMode:(long long)arg1;
- (void)_buildTransitOptionsMenuItems;
- (id)allVisibleMapViewsForDebugController:(id)arg1;
- (id)allMainWindowControllers;
@property BOOL alwaysShowToolbar;
- (void)toggleAlwaysShowToolbar:(id)arg1;
- (void)closeAllWindows:(id)arg1;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (void)menuDidClose:(id)arg1;
- (void)_updatePreferredTransportTypeMenuItems;
@property(nonatomic) BOOL avoidHighways;
@property(nonatomic) BOOL avoidTolls;
- (void)updatePreferredTransportType:(id)arg1;
- (void)_updateDistanceUnitMenuItems;
- (void)_updateDistanceUnits;
- (void)updateDistancesUnit:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (long long)numberOfItemsInMenu:(id)arg1;
- (BOOL)isShareMenu:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)newDocumentInTab:(id)arg1;
- (void)openNewMapWindow:(id)arg1;
- (id)createNewMapDocumentAsTab:(BOOL)arg1 sourceIsURL:(BOOL)arg2;
- (id)createNewMapDocument:(BOOL)arg1;
- (id)sharedApplication;
@property(readonly) NVMainWindowController *mainWindowController;
- (id)currentMainWindowControllerCreateIfNeeded:(BOOL)arg1 sourceIsURL:(BOOL)arg2;
- (id)currentMainWindowControllerCreateIfNeeded:(BOOL)arg1;
@property(readonly) NVMainWindowController *currentMainWindowController;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)receivedGEOAnnouncement:(id)arg1;
- (void)runPPTTestFromMenuItem:(id)arg1;
- (void)runPPTTestFromURL:(id)arg1;
- (id)allPPTTests;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)handleURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)checkLocationServicesState;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)locationActionsShouldBeEnabled;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)application:(id)arg1 didDecodeRestorableState:(id)arg2;
- (void)application:(id)arg1 willEncodeRestorableState:(id)arg2;
- (id)init;
- (id)_testWithName:(id)arg1 application:(id)arg2 options:(id)arg3;
- (BOOL)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;
- (void)_didFinishLaunchTest;
- (void)doPostLaunchTestSetup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

