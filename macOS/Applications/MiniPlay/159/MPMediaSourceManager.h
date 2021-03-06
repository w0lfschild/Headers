//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPMediaSourceDelegate.h"

@class MPMediaSource, MPNowPlayingItem, MPSpotifySource, MPiTunesSource, NSString;

@interface MPMediaSourceManager : NSObject <MPMediaSourceDelegate>
{
    id <MPMediaSourceManagerDelegate> _delegate;
    MPMediaSource *_currentSource;
    MPiTunesSource *_iTunesSource;
    MPSpotifySource *_spotifySource;
}

@property(retain, nonatomic) MPSpotifySource *spotifySource; // @synthesize spotifySource=_spotifySource;
@property(retain, nonatomic) MPiTunesSource *iTunesSource; // @synthesize iTunesSource=_iTunesSource;
@property(retain, nonatomic) MPMediaSource *currentSource; // @synthesize currentSource=_currentSource;
@property(nonatomic) __weak id <MPMediaSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshCurrentSource;
- (void)mediaSourceDidUpdatePlayerArtwork:(id)arg1;
- (void)mediaSourceDidUpdatePlayerVolume:(id)arg1;
- (void)mediaSourceDidUpdatePlayerState:(id)arg1;
- (void)mediaSourceDidTerminate:(id)arg1;
- (void)mediaSourceDidActivate:(id)arg1;
- (void)skipToNext;
- (void)skipToPrevious;
- (void)togglePlayback;
@property(nonatomic) double volumeLevel;
@property(nonatomic) double playerPosition;
- (id)lastActiveSource;
@property(readonly, nonatomic) NSString *lastActiveApplication;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
@property(readonly, nonatomic) MPNowPlayingItem *nowPlayingItem;
@property(readonly, nonatomic, getter=isAnyApplicationRunning) BOOL anyApplicationRunning;
- (void)chooseCurrentSource;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

