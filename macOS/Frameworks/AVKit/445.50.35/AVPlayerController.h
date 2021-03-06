//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

#import <AVKit/AVFunctionBarPlaybackControlsControlling-Protocol.h>
#import <AVKit/AVTouchBarPlaybackControlsControlling-Protocol.h>
#import <AVKit/NSUserInterfaceValidations-Protocol.h>

@class AVAsset, AVFragmentedMovieMinder, AVFunctionBarMediaSelectionOption, AVObservationController, AVOutputContextController, AVPlayer, AVTouchBarMediaSelectionOption, AVValueTiming, NSArray, NSDate, NSDictionary, NSError, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVPlayerController : NSResponder <AVFunctionBarPlaybackControlsControlling, AVTouchBarPlaybackControlsControlling, NSUserInterfaceValidations>
{
    BOOL _jKeyDown;
    BOOL _kKeyDown;
    BOOL _lKeyDown;
    NSArray *_audioMediaSelectionOptions;
    NSArray *_legibleMediaSelectionOptions;
    long long _savedCaptionAppearanceDisplayType;
    float _rate;
    BOOL _isResumed;
    NSObject<OS_dispatch_source> *_seekTimer;
    double _timeOfLastUpdate;
    BOOL _playbackSuspended;
    BOOL _dontScrubBecauseOfJump;
    double _deltaX;
    double _deltaY;
    double _eventBeginTime;
    double _momentumEndTime;
    double _rateAtEventBegan;
    NSObject<OS_dispatch_queue> *_seekQueue;
    BOOL _ignoreRateKeyValueChange;
    void *_observationInfo;
    BOOL _inspectionSuspended;
    id _updateAtMinMaxTimePeriodicObserverToken;
    CDUnknownBlockType _listenerBlock;
    CDUnknownBlockType _retryPlayingImmediatelyBlock;
    BOOL _shouldPlayImmediately;
    BOOL _looping;
    long long _actionAtItemEnd;
    BOOL _pendingSeek;
    CDStruct_1b6d18a9 _toleranceBefore;
    CDStruct_1b6d18a9 _toleranceAfter;
    BOOL _isScanningForward;
    BOOL _isScanningBackward;
    unsigned long long _scanningCount;
    double _preScanningRate;
    AVValueTiming *_liveStreamMinTiming;
    AVValueTiming *_liveStreamMaxTiming;
    BOOL _liveStreamEventModePossible;
    long long _canUseNetworkResourcesForLiveStreamingWhilePausedCount;
    BOOL _previousValueOfCanUseNetworkResourcesForLiveStreamingWhilePaused;
    AVFragmentedMovieMinder *_fragmentedMovieMinder;
    BOOL _shouldPlayWhenLikelyToKeepUp;
    AVOutputContextController *_outputContextController;
    BOOL _setOutputContextPending;
    BOOL _forceScanning;
    double _rateBeforeForceScanning;
    BOOL _atMaxTime;
    BOOL _atMinTime;
    BOOL _scrubbing;
    BOOL _pictureInPictureSupported;
    BOOL _seekingInternal;
    BOOL _seeking;
    BOOL _composable;
    BOOL _hasProtectedContent;
    BOOL _compatibleWithAirPlayVideo;
    BOOL _preventingIdleSystemSleep;
    BOOL _preventingIdleDisplaySleep;
    BOOL _disablingAutomaticTermination;
    AVPlayer *_player;
    AVObservationController *_observationController;
    AVAsset *_currentAssetIfReady;
    NSObject<OS_dispatch_queue> *_assetInspectionQueue;
    AVAsset *_assetBeingPrepared;
    AVValueTiming *_timing;
    AVValueTiming *_minTiming;
    AVValueTiming *_maxTiming;
    double _seekToTime;
    NSDictionary *_metadata;
    NSArray *_contentChapters;
    NSArray *_availableMetadataFormats;
    double _rateBeforeScrubBegan;
    struct CGSize _presentationSize;
    CDStruct_1b6d18a9 _seekToTimeInternal;
}

+ (id)keyPathsForValuesAffectingShouldDisableAutomaticTermination;
+ (id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+ (id)keyPathsForValuesAffectingShouldPreventIdleSystemSleep;
+ (id)keyPathsForValuesAffectingOutputContext;
+ (id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+ (id)keyPathsForValuesAffectingExternalPlaybackType;
+ (id)keyPathsForValuesAffectingExternalPlaybackActive;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+ (id)keyPathsForValuesAffectingAllowsExternalPlayback;
+ (id)keyPathsForValuesAffectingCanSeekChapterBackward;
+ (id)keyPathsForValuesAffectingCanSeekChapterForward;
+ (id)keyPathsForValuesAffectingCanSeekFrameBackward;
+ (id)keyPathsForValuesAffectingCanSeekFrameForward;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanScanBackward;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeek;
+ (id)keyPathsForValuesAffectingTimeControlStatus;
+ (id)keyPathsForValuesAffectingHasShareableContent;
+ (id)keyPathsForValuesAffectingHasTrimmableContent;
+ (id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingStreaming;
+ (id)keyPathsForValuesAffectingHasContentChapters;
+ (id)keyPathsForValuesAffectingHasEnabledVideo;
+ (id)keyPathsForValuesAffectingHasVideo;
+ (id)keyPathsForValuesAffectingHasEnabledAudio;
+ (id)keyPathsForValuesAffectingLoadedTimeRanges;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingForwardPlaybackEndTime;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingReversePlaybackEndTime;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingHasContent;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)keyPathsForValuesAffectingCanTogglePlayback;
+ (id)keyPathsForValuesAffectingCanPause;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingCanPlay;
+ (id)keyPathsForValuesAffectingCompletelySeekable;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingReadyToPlay;
+ (id)keyPathsForValuesAffectingStatus;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCurrentLegibleFunctionBarMediaSelectionOption;
+ (id)keyPathsForValuesAffectingHasLegibleFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCurrentAudioFunctionBarMediaSelectionOption;
+ (id)keyPathsForValuesAffectingHasAudioFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCurrentLegibleTouchBarMediaSelectionOption;
+ (id)keyPathsForValuesAffectingHasLegibleTouchBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCurrentAudioTouchBarMediaSelectionOption;
+ (id)keyPathsForValuesAffectingHasAudioTouchBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasTouchBarMediaSelectionOptions;
@property(readonly) AVOutputContextController *outputContextController; // @synthesize outputContextController=_outputContextController;
@property(getter=isDisablingAutomaticTermination) BOOL disablingAutomaticTermination; // @synthesize disablingAutomaticTermination=_disablingAutomaticTermination;
@property(getter=isPreventingIdleDisplaySleep) BOOL preventingIdleDisplaySleep; // @synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep;
@property(getter=isPreventingIdleSystemSleep) BOOL preventingIdleSystemSleep; // @synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep;
@property double rateBeforeScrubBegan; // @synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan;
@property(getter=isCompatibleWithAirPlayVideo) BOOL compatibleWithAirPlayVideo; // @synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo;
@property(retain) NSArray *availableMetadataFormats; // @synthesize availableMetadataFormats=_availableMetadataFormats;
@property BOOL hasProtectedContent; // @synthesize hasProtectedContent=_hasProtectedContent;
@property(getter=isComposable) BOOL composable; // @synthesize composable=_composable;
@property(retain) NSArray *contentChapters; // @synthesize contentChapters=_contentChapters;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property double seekToTime; // @synthesize seekToTime=_seekToTime;
@property CDStruct_1b6d18a9 seekToTimeInternal; // @synthesize seekToTimeInternal=_seekToTimeInternal;
@property(getter=isSeeking) BOOL seeking; // @synthesize seeking=_seeking;
@property(getter=isSeekingInternal) BOOL seekingInternal; // @synthesize seekingInternal=_seekingInternal;
@property(retain) AVValueTiming *maxTiming; // @synthesize maxTiming=_maxTiming;
@property(retain) AVValueTiming *minTiming; // @synthesize minTiming=_minTiming;
@property(retain) AVValueTiming *timing; // @synthesize timing=_timing;
@property(getter=isPictureInPictureSupported) BOOL pictureInPictureSupported; // @synthesize pictureInPictureSupported=_pictureInPictureSupported;
@property(retain) AVAsset *assetBeingPrepared; // @synthesize assetBeingPrepared=_assetBeingPrepared;
@property(retain) NSObject<OS_dispatch_queue> *assetInspectionQueue; // @synthesize assetInspectionQueue=_assetInspectionQueue;
@property(retain) AVAsset *currentAssetIfReady; // @synthesize currentAssetIfReady=_currentAssetIfReady;
@property struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(readonly) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(getter=isScrubbing) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property(getter=isAtMinTime) BOOL atMinTime; // @synthesize atMinTime=_atMinTime;
@property(getter=isAtMaxTime) BOOL atMaxTime; // @synthesize atMaxTime=_atMaxTime;
@property(retain) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (BOOL)shouldDisableAutomaticTermination;
- (BOOL)shouldPreventIdleDisplaySleep;
- (BOOL)shouldPreventIdleSystemSleep;
- (BOOL)preventsIdleSleep;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)_prepareAssetForInspectionIfNeeded;
- (id)scanningDelays;
- (void)_cancelPendingSeeksIfNeeded;
- (void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)arg1;
- (BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
- (void)stopUsingNetworkResourcesForLiveStreamingWhilePaused;
- (void)startUsingNetworkResourcesForLiveStreamingWhilePaused;
- (void)togglePictureInPicture:(id)arg1;
@property(readonly) BOOL canTogglePictureInPicture;
@property(getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property(readonly) BOOL allowsPictureInPicturePlayback;
- (id)outputContext;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (long long)externalPlaybackType;
- (BOOL)isExternalPlaybackActive;
- (BOOL)isPlayingOnSecondScreen;
- (BOOL)isPlayingOnExternalScreen;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (BOOL)allowsExternalPlayback;
- (void)updateMinMaxTiming;
- (void)updateTiming;
- (void)seekChapterBackward:(id)arg1;
- (BOOL)canSeekChapterBackward;
- (void)seekChapterForward:(id)arg1;
- (BOOL)canSeekChapterForward;
- (void)seekToChapter:(id)arg1;
- (void)endScrubbing:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)seekOrStepByFrameCount:(long long)arg1;
- (void)seekFrameBackward:(id)arg1;
- (BOOL)canSeekFrameBackward;
- (void)seekFrameForward:(id)arg1;
- (BOOL)canSeekFrameForward;
- (void)seekToEnd:(id)arg1;
- (BOOL)canSeekToEnd;
- (void)seekToBeginning:(id)arg1;
- (BOOL)canSeekToBeginning;
- (void)endScanningBackward:(id)arg1;
- (void)_updateScanningBackwardRate;
- (void)beginScanningBackward:(id)arg1;
- (void)scanBackward:(id)arg1;
- (BOOL)canScanBackward;
- (void)endScanningForward:(id)arg1;
- (void)_updateScanningForwardRate;
- (void)beginScanningForward:(id)arg1;
- (void)scanForward:(id)arg1;
- (BOOL)canScanForward;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekByTimeInterval:(double)arg1;
- (void)actuallySeekToTime;
- (void)throttledSeekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToCMTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)seekToTime:(double)arg1;
- (BOOL)canSeek;
- (long long)timeControlStatus;
- (BOOL)_isMarkedNotSerializablePlayerItem:(id)arg1;
- (BOOL)_isRestrictedFromSavingPlayerItem:(id)arg1;
- (BOOL)hasShareableContent;
- (BOOL)hasTrimmableContent;
- (BOOL)hasSeekableLiveStreamingContent;
- (BOOL)hasLiveStreamingContent;
- (BOOL)isStreaming;
- (BOOL)hasContentChapters;
@property(readonly) BOOL hasEnabledVideo;
- (BOOL)hasVideo;
@property(readonly) BOOL hasEnabledAudio;
- (id)loadedTimeRanges;
@property(readonly) NSArray *seekableTimeRanges;
- (double)currentTimeWithinEndTimes;
@property(readonly) NSDate *currentOrEstimatedDate;
@property(readonly) NSDate *currentDate;
- (double)contentDurationWithinEndTimes;
- (void)_setMinTiming:(id)arg1 maxTiming:(id)arg2;
- (void)setForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)forwardPlaybackEndTime;
- (void)setMaxTime:(double)arg1;
- (double)maxTime;
- (void)setReversePlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)reversePlaybackEndTime;
- (void)setMinTime:(double)arg1;
- (double)minTime;
- (double)currentTime;
- (struct CGSize)contentDimensions;
- (float)nominalFrameRate;
@property(readonly) double contentDuration;
- (BOOL)hasContent;
- (void)setInspectionSuspended:(BOOL)arg1;
- (BOOL)isInspectionSuspended;
- (void)toggleMuted:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (BOOL)isMuted;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (void)decreaseVolume:(id)arg1;
- (void)increaseVolume:(id)arg1;
- (void)setVolume:(double)arg1;
- (double)volume;
- (void)updateAtMinMaxTime;
- (void)setLooping:(BOOL)arg1;
- (BOOL)isLooping;
- (void)togglePlayback:(id)arg1;
@property(readonly) BOOL canTogglePlayback;
- (void)pause:(id)arg1;
- (BOOL)canPause;
- (void)autoplay:(id)arg1;
- (void)play:(id)arg1;
@property(getter=isPlaying) BOOL playing;
- (BOOL)canPlay;
- (void)_handleSeekTimerEvent;
@property(readonly) NSObject<OS_dispatch_source> *seekTimer;
- (BOOL)canPlayImmediately;
- (void)_retryPlayImmediatelyIfNeeded;
- (void)setRate:(double)arg1;
- (double)rate;
- (void)_observeValueForKeyPath:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3;
- (BOOL)isCompletelySeekable;
@property(readonly) NSError *error;
@property(readonly, getter=isReadyToPlay) BOOL readyToPlay;
@property(readonly) long long status;
- (id)_queuePlayer;
- (void)setObservationInfo:(void *)arg1;
- (void *)observationInfo;
- (void)startKVO;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (id)init;
@property(retain) AVFunctionBarMediaSelectionOption *currentLegibleFunctionBarMediaSelectionOption;
@property(readonly) NSArray *legibleFunctionBarMediaSelectionOptions;
- (BOOL)hasLegibleFunctionBarMediaSelectionOptions;
@property(retain) AVFunctionBarMediaSelectionOption *currentAudioFunctionBarMediaSelectionOption;
@property(readonly) NSArray *audioFunctionBarMediaSelectionOptions;
- (BOOL)hasAudioFunctionBarMediaSelectionOptions;
- (BOOL)hasFunctionBarMediaSelectionOptions;
- (void)cancelThumbnailAndAudioAmplitudeSampleGenerationForRequestTypeLegacy:(long long)arg1;
- (void)generateFunctionBarAudioAmplitudeSamples:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isFunctionBarWaveformGeneratorLoaded;
- (id)functionBarWaveformGenerator;
- (void)generateFunctionBarThumbnailsForTimes:(id)arg1 size:(struct CGSize)arg2 requestType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)isFunctionBarThumbnailGeneratorLoaded;
- (id)functionBarThumbnailGenerator;
- (void)endFunctionBarScrubbing;
- (void)beginFunctionBarScrubbing;
@property(readonly) BOOL canBeginFunctionBarScrubbing;
- (id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1;
- (void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2;
- (void)_enableAutoMediaSelection:(id)arg1;
- (void)_disableLegibleMediaSelectionOptions:(id)arg1;
- (id)legibleOptions;
- (id)audioOptions;
- (void)reloadLegibleOptions;
- (void)reloadAudioOptions;
- (void)reloadOptions;
- (id)_optionsForGroup:(id)arg1;
- (void)toggleCaptions;
- (void)setSavedCaptionAppearanceDisplayType:(long long)arg1;
- (long long)savedCaptionAppearanceDisplayType;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
- (id)currentLegibleMediaSelectionOption;
- (void)setLegibleMediaSelectionOptions:(id)arg1;
- (id)legibleMediaSelectionOptions;
- (BOOL)hasLegibleMediaSelectionOptions;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
- (id)currentAudioMediaSelectionOption;
- (void)setAudioMediaSelectionOptions:(id)arg1;
- (id)audioMediaSelectionOptions;
- (BOOL)hasAudioMediaSelectionOptions;
- (BOOL)hasMediaSelectionOptions;
- (BOOL)canHandleSelector:(SEL)arg1 withEvent:(id)arg2 shouldIgnoreSpaceKey:(BOOL)arg3;
- (BOOL)_shouldHandleSwipeWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (BOOL)_shouldHandleScrollWheelWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (long long)_handleJKLWithEvent:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (long long)_typeForMediaSelectionOption:(id)arg1;
- (void)controlsViewDidDisappear;
- (void)controlsViewWillAppear;
@property(retain) AVTouchBarMediaSelectionOption *currentLegibleTouchBarMediaSelectionOption;
@property(readonly) NSArray *legibleTouchBarMediaSelectionOptions;
- (BOOL)hasLegibleTouchBarMediaSelectionOptions;
@property(retain) AVTouchBarMediaSelectionOption *currentAudioTouchBarMediaSelectionOption;
@property(readonly) NSArray *audioTouchBarMediaSelectionOptions;
- (BOOL)hasAudioTouchBarMediaSelectionOptions;
- (BOOL)hasTouchBarMediaSelectionOptions;
- (void)cancelThumbnailAndAudioAmplitudeSampleGenerationForRequestType:(long long)arg1;
- (void)generateTouchBarAudioAmplitudeSamples:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isTouchBarWaveformGeneratorLoaded;
- (id)touchBarWaveformGenerator;
- (void)generateTouchBarThumbnailsForTimes:(id)arg1 tolerance:(double)arg2 size:(struct CGSize)arg3 requestType:(long long)arg4 thumbnailHandler:(CDUnknownBlockType)arg5;
- (BOOL)isTouchBarThumbnailGeneratorLoaded;
- (id)touchBarThumbnailGenerator;
- (void)endTouchBarScrubbing;
- (void)beginTouchBarScrubbing;
@property(readonly) BOOL canBeginTouchBarScrubbing;

// Remaining properties
@property(readonly) NSURL *assetURL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

