//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GenInstDrummer_TrackModelProtocol.h"

@class GenInstDrummerLibrary, GenInstDrummerModel, GenInstDrummerPresetManager, NSArray, NSString;

@interface GenInstDrummer_TrackModel : NSObject <GenInstDrummer_TrackModelProtocol>
{
    struct CSong *mSong;
    GenInstDrummerModel *mGenInstDrummerModel;
    GenInstDrummerLibrary *mLibrary;
    id <GenInstGenreCharacterDatabase> mGenreCharacterDatabase;
    id <GenInstPatches> mGenInstPatches;
    id <GenInstDownload> mGenInstDownload;
    GenInstDrummerPresetManager *mPresetManager;
    struct CVirtualTrack *mAssociatedDrumTrack;
    BOOL mLoadProducerKitIfAvailable;
    BOOL mKeepSettingsWhenChangingDrummer;
    BOOL mParametersWhereChangedAfterCharacterRecall;
    BOOL mKeepDrumKitWhenChangingDrummer;
    BOOL mIsUsingProducerKit;
    NSString *mSelectedGenreIdentifier;
    NSString *mSelectedCharacterIdentifier;
    NSString *mCharacterTypeIdentifier;
    NSString *_alternativeSelectedCharacterIdentifier;
    NSArray *_keepSettingsWhenChangingDrummerForKeys;
}

@property(retain) NSArray *keepSettingsWhenChangingDrummerForKeys; // @synthesize keepSettingsWhenChangingDrummerForKeys=_keepSettingsWhenChangingDrummerForKeys;
@property(retain) NSString *alternativeSelectedCharacterIdentifier; // @synthesize alternativeSelectedCharacterIdentifier=_alternativeSelectedCharacterIdentifier;
- (id)state;
- (void)setStateFromTrackCopy:(id)arg1;
- (void)setState:(id)arg1;
- (id)initialDrumRegionParameterValues;
- (BOOL)loadPatchForURLIntern:(id)arg1 options:(id)arg2;
- (BOOL)loadPatchForSelectedCharacterAtIndex:(unsigned long long)arg1;
- (BOOL)loadPatchForURL:(id)arg1 options:(id)arg2;
- (BOOL)loadDefaultPatchForSelectedCharacterIdentifier;
- (BOOL)isContentBeingDownloadedForPatchWithURL:(id)arg1;
- (BOOL)contentWasDownloadedForPatchWithURL:(id)arg1;
- (void)downloadContentForPatchWithURL:(id)arg1 groupInfo:(id)arg2;
- (BOOL)isDefaultContentBeingDownloadedForGenreIdentifier:(id)arg1 characterIdentifier:(id)arg2;
- (BOOL)defaultContentWasDownloadedForGenreIdentifier:(id)arg1 characterIdentifier:(id)arg2;
- (void)downloadDefaultContentForGenreIdentifier:(id)arg1 characterIdentifier:(id)arg2;
- (id)patchURLsForGenreIdentifier:(id)arg1 characterIdentifier:(id)arg2;
- (id)patchURLForSelectedCharacterAtIndex:(unsigned long long)arg1;
- (void)disableTransposeOnMainAndSubTracksForTrack:(struct CVirtualTrack)arg1;
- (void)generateEventsWithSameSeedsForRegions:(vector_e75b7d21)arg1;
- (void)generateEventsWithSeedModeAndOption:(int)arg1 seedMode:(int)arg2 generateWhat:(int)arg3;
- (void)generateEventsWithZeroSeedsAndOption:(int)arg1;
- (void)generateEventsWithSameSeedsAndOption:(int)arg1;
- (void)generateEventsWithNewSeedsAndOption:(int)arg1;
- (void)prepareGenerateToSpeedUpFirstPlayOnTrack:(struct CVirtualTrack)arg1;
- (struct CGenGenerator *)generator;
- (void)updateRegionsToCurrentParameterSetVersion;
- (BOOL)isLibraryValid;
- (void)loadLibrary;
- (void)loadLibraryIfNotAlreadyLoaded;
- (id)knownDrumRegionParameterIDs;
- (void)selectFirstRegionOnDrummerTrack;
- (void)resetPresetManager;
- (void)setupPresetManager;
- (void)setupGenInstDownload;
- (void)setupGenInstPatches;
- (void)setupGenreCharacterDatabase;
- (id)genreCharacterDatabase;
- (void)setCharacterTypeIdentifierIntern:(id)arg1;
- (void)setSelectedCharacterIdentifierIntern:(id)arg1;
- (void)setSelectedGenreIdentifierIntern:(id)arg1;
- (void)setInitialCharacterIdentifier;
- (void)setInitialGenreIdentifier;
- (BOOL)parametersWhereChangedAfterCharacterRecall;
- (void)setParametersWhereChangedAfterCharacterRecallIntern:(BOOL)arg1;
- (void)setParametersWhereChangedAfterCharacterRecall:(BOOL)arg1;
- (BOOL)keepDrumKitWhenChangingDrummer;
- (void)setKeepDrumKitWhenChangingDrummerIntern:(BOOL)arg1;
- (void)setKeepDrumKitWhenChangingDrummer:(BOOL)arg1;
- (BOOL)keepSettingsWhenChangingDrummer;
- (void)setKeepSettingsWhenChangingDrummerIntern:(BOOL)arg1;
- (void)setKeepSettingsWhenChangingDrummer:(BOOL)arg1;
- (void)setKeepSettingsWhenChangingDrummer:(BOOL)arg1 parameterKeysToKeep:(id)arg2;
- (id)drummerModel;
- (id)modelUICoordinator;
- (void)_pstLoaded:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)recallDefaultPresetForSelectedRegions;
- (BOOL)saveNewPresetForRegion:(struct CRegion *)arg1 outPresetUniqueIdentifier:(id *)arg2;
- (BOOL)loadPresetWithUniqueIdentifier:(id)arg1 forRegions:(const vector_e75b7d21 *)arg2;
- (BOOL)loadPresetWithUniqueIdentifier:(id)arg1 forRegion:(struct CRegion *)arg2;
- (id)presetManager;
- (void)_internSetSelectedGenre:(id)arg1 characterIdentifier:(id)arg2 options:(id)arg3;
- (void)setSelectedGenre:(id)arg1 characterIdentifier:(id)arg2 options:(id)arg3;
- (void)iterateTrackAlternativesWithBlock:(CDUnknownBlockType)arg1;
- (void)updatePatchForCharacterChangeFromOldCharacter:(id)arg1 toNewCharacter:(id)arg2;
- (void)updateRegionParametersForCharacterChangeFromOldCharacter:(id)arg1 toNewCharacter:(id)arg2 regionIterator:(struct iterator)arg3;
- (void)updateRegionParametersForCharacterChangeFromOldCharacter:(id)arg1 toNewCharacter:(id)arg2;
- (void)setSelectedGenre:(id)arg1 characterIdentifier:(id)arg2;
- (id)characterTypeIdentifier;
- (id)selectedCharacterIdentifier;
- (id)selectedGenreDict;
- (id)selectedCharacterDict;
- (id)characterForGenreIdentifier:(id)arg1 characterIdentifier:(id)arg2;
- (id)charactersForGenreIdentifier:(id)arg1;
- (id)selectedGenreIdentifier;
- (id)genreForIdentifier:(id)arg1;
- (id)genres;
- (struct CGenDrumMap *)drumMap;
- (auto_ptr_9f8f0b23)noteNrHelper;
- (void)deleteEventsFromAllDrummerRegionsOnTrack:(struct CVirtualTrack)arg1;
- (void)convertTrackAndItsRegionsToMidi:(struct CVirtualTrack)arg1;
- (void)convertRegionToMidiRegion:(struct CEvLaunch *)arg1;
- (void)convertSelectedRegionsToMidiRegions;
- (void)convertSelectedRegionsToDrummerRegions;
- (void)populateDrummerTrack;
- (void)resetRegionParametersForRegion:(struct CRegion *)arg1;
- (void)initializeNewDrummerRegion:(struct CRegion *)arg1 options:(id)arg2;
- (BOOL)initializeDrumTrackWithOptions:(id)arg1;
- (void)createDefaultRegions;
- (id)proposedClaveTrackUUIDForRegion:(const struct CRegion *)arg1;
- (vector_e94a763c)claveCandidateTracks;
- (struct CSong *)song;
- (unsigned long long)drummerTrackPatchType;
- (id)drumKitDesignerPresetName;
- (void)togglePlugInEditor;
- (void)togglePlugInEditorForEDrummerTrack;
- (void)togglePlugInEditorForDrummerTrack;
- (const struct CTrack *)currentEDrummerMetaPluginTrack;
- (const struct CTrack *)currentDrumKitDesignerTrack;
- (struct CVirtualTrack)associatedDrumTrack;
- (void)setAssociatedDrumTrack:(const struct CVirtualTrack *)arg1;
- (id)genInstModel;
- (void)dealloc;
- (id)initWithDrummerModel:(id)arg1 drumTrack:(struct CVirtualTrack)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

