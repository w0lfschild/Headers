//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCameraClipPlayerDelegate-Protocol.h>
#import <Home/HFCameraLiveStreamControllerDelegate-Protocol.h>
#import <Home/HMCameraClipManagerObserver-Protocol.h>

@class AVPlayer, HFCameraPlaybackPosition, HMCameraClip, HMCameraClipManager, HMCameraProfile, HMCameraSource, HMHome, NADelegateDispatcher, NSArray, NSDate, NSError, NSMapTable, NSString;
@protocol HFCameraClipPlaying, HFCameraClipScrubbing, HFCameraLiveStreamControlling, OS_dispatch_queue;

@interface HFCameraPlaybackEngine : NSObject <HMCameraClipManagerObserver, HFCameraClipPlayerDelegate, HFCameraLiveStreamControllerDelegate>
{
    BOOL _prefersAudioEnabled;
    BOOL _microphoneEnabled;
    BOOL _streamAudioEnabled;
    BOOL _userScrubbing;
    BOOL _pictureInPictureModeActive;
    BOOL _shouldBypassVideoFetchRequest;
    BOOL _wantsToPlay;
    BOOL _scrubbing;
    float _streamAudioVolume;
    HMCameraProfile *_cameraProfile;
    HMCameraClipManager *_clipManager;
    HMCameraSource *_liveCameraSource;
    unsigned long long _timeControlStatus;
    NSError *_playbackError;
    HMHome *_home;
    CDUnknownBlockType _clipPlayerBuilder;
    id <HFCameraLiveStreamControlling> _liveStreamController;
    id <HFCameraClipScrubbing> _clipScrubber;
    NSMapTable *_observerStates;
    NADelegateDispatcher *_observerDispatcher;
    unsigned long long _playbackContentType;
    unsigned long long _engineMode;
    NSDate *_lastRequestedClipPlaybackDate;
    unsigned long long _scrubbingInProgressCount;
    NSObject<OS_dispatch_queue> *_clipQueue;
    long long _lastPlayerTimeControlStatus;
    id <HFCameraClipPlaying> _clipPlayer;
    unsigned long long _timelineState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long timelineState; // @synthesize timelineState=_timelineState;
@property(readonly, nonatomic) id <HFCameraClipPlaying> clipPlayer; // @synthesize clipPlayer=_clipPlayer;
@property(nonatomic) long long lastPlayerTimeControlStatus; // @synthesize lastPlayerTimeControlStatus=_lastPlayerTimeControlStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clipQueue; // @synthesize clipQueue=_clipQueue;
@property(nonatomic, getter=isScrubbing) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic) unsigned long long scrubbingInProgressCount; // @synthesize scrubbingInProgressCount=_scrubbingInProgressCount;
@property(nonatomic) BOOL wantsToPlay; // @synthesize wantsToPlay=_wantsToPlay;
@property(copy, nonatomic) NSDate *lastRequestedClipPlaybackDate; // @synthesize lastRequestedClipPlaybackDate=_lastRequestedClipPlaybackDate;
@property(nonatomic) unsigned long long engineMode; // @synthesize engineMode=_engineMode;
@property(nonatomic) unsigned long long playbackContentType; // @synthesize playbackContentType=_playbackContentType;
@property(readonly, nonatomic) NADelegateDispatcher *observerDispatcher; // @synthesize observerDispatcher=_observerDispatcher;
@property(readonly, nonatomic) NSMapTable *observerStates; // @synthesize observerStates=_observerStates;
@property(readonly, nonatomic) id <HFCameraClipScrubbing> clipScrubber; // @synthesize clipScrubber=_clipScrubber;
@property(readonly, nonatomic) id <HFCameraLiveStreamControlling> liveStreamController; // @synthesize liveStreamController=_liveStreamController;
@property(readonly, copy, nonatomic) CDUnknownBlockType clipPlayerBuilder; // @synthesize clipPlayerBuilder=_clipPlayerBuilder;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSError *playbackError; // @synthesize playbackError=_playbackError;
@property(nonatomic) unsigned long long timeControlStatus; // @synthesize timeControlStatus=_timeControlStatus;
@property(nonatomic) BOOL shouldBypassVideoFetchRequest; // @synthesize shouldBypassVideoFetchRequest=_shouldBypassVideoFetchRequest;
@property(nonatomic, getter=isPictureInPictureModeActive) BOOL pictureInPictureModeActive; // @synthesize pictureInPictureModeActive=_pictureInPictureModeActive;
@property(nonatomic, getter=isUserScrubbing) BOOL userScrubbing; // @synthesize userScrubbing=_userScrubbing;
@property(nonatomic) float streamAudioVolume; // @synthesize streamAudioVolume=_streamAudioVolume;
@property(nonatomic, getter=isStreamAudioEnabled) BOOL streamAudioEnabled; // @synthesize streamAudioEnabled=_streamAudioEnabled;
@property(nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(retain, nonatomic) HMCameraSource *liveCameraSource; // @synthesize liveCameraSource=_liveCameraSource;
@property(retain, nonatomic) HMCameraClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property(retain, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(nonatomic) BOOL prefersAudioEnabled; // @synthesize prefersAudioEnabled=_prefersAudioEnabled;
- (void)dealloc;
- (void)streamControllerStateDidUpdate:(id)arg1;
- (void)clipPlayerDidPlayToEndTime:(id)arg1;
- (void)clipPlayer:(id)arg1 didUpdateMuted:(BOOL)arg2;
- (void)clipPlayer:(id)arg1 didUpdateError:(id)arg2 isFatal:(BOOL)arg3;
- (void)clipPlayer:(id)arg1 didUpdateTimeControlStatus:(long long)arg2;
- (void)clipManager:(id)arg1 didRemoveClipsWithUUIDs:(id)arg2;
- (void)clipManager:(id)arg1 didUpdateClips:(id)arg2;
- (BOOL)isLiveStreaming;
- (void)_setStreamAudioEnabled:(BOOL)arg1 notifyObservers:(BOOL)arg2;
- (void)_setPlayerVolume:(float)arg1 notifyObservers:(BOOL)arg2;
- (void)_setMicrophoneEnabled:(BOOL)arg1 notifyObservers:(BOOL)arg2;
- (void)_updateStateForRequestedPlaybackPosition:(id)arg1 notifyObservers:(BOOL)arg2;
- (void)_updatePlaybackStateNotifyingObservers:(BOOL)arg1 rebuildClipPlayerIfNeeded:(BOOL)arg2;
- (void)_updatePlaybackStateNotifyingObservers:(BOOL)arg1;
- (id)_derivedPlaybackError;
- (unsigned long long)_derivedTimeControlStatus;
- (void)endScrubbing;
- (void)beginScrubbing;
@property(readonly, nonatomic) HMCameraClip *currentClip;
- (void)modifyPlaybackFromSender:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *observers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 withOptions:(id)arg2;
- (void)pause;
- (void)play;
@property(retain, nonatomic) HFCameraPlaybackPosition *playbackPosition;
- (void)updatePlaybackPositionToDate:(id)arg1 usingClip:(id)arg2;
@property(readonly, nonatomic) AVPlayer *player;
- (void)_setupTimeObservationForObserver:(id)arg1;
- (void)_setupClipPlayerWithClipManager:(id)arg1;
- (void)_setupLiveStreamController:(id)arg1;
- (void)updateLiveStreamForCameraProfile:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

