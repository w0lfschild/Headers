//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KNRecordingOffscreenEventPlayer.h"

@class KNAnimatedOffscreenPlaybackController, KNRecordingNavigationEvent;

@interface KNRecordingOffscreenNavigationEventPlayer : KNRecordingOffscreenEventPlayer
{
    KNAnimatedOffscreenPlaybackController *_playbackController;
    KNRecordingNavigationEvent *_currentEvent;
    BOOL _isPlayingCurrentEvent;
}

- (void).cxx_destruct;
- (void)playEvent:(id)arg1 atTime:(double)arg2;
- (id)initWithEventTrack:(id)arg1 offscreenPlaybackController:(id)arg2;

@end

