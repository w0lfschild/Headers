//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNRecordingOffscreenEventPlayer.h"

@class KNRecordingLaserEvent;
@protocol KNLaserOverlayController;

@interface KNRecordingOffscreenLaserEventPlayer : KNRecordingOffscreenEventPlayer
{
    id <KNLaserOverlayController> mLaserOverlayController;
    KNRecordingLaserEvent *mLastPlayedEvent;
}

- (void)playEvent:(id)arg1 atTime:(double)arg2;
- (void)dealloc;
- (id)initWithEventTrack:(id)arg1;
- (id)initWithEventTrack:(id)arg1 laserOverlayController:(id)arg2;

@end

