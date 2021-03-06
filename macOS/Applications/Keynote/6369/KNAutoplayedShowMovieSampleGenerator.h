//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KNMovieSampleGenerator.h"
#import "KNMovieTimelineMovieSampleGeneratorDelegate.h"

@class KNAutoplayedShowMovieSampleGeneratorVideoTrack, KNDocumentRoot, KNMovieTimelineMovieSampleGenerator, NSArray, NSError, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface KNAutoplayedShowMovieSampleGenerator : NSObject <KNMovieTimelineMovieSampleGeneratorDelegate, KNMovieSampleGenerator>
{
    KNDocumentRoot *_documentRoot;
    struct CGSize _size;
    double _buildDelay;
    double _transitionDelay;
    BOOL _alwaysLoop;
    struct _NSRange _slideRange;
    CDStruct_1b6d18a9 _videoFrameDuration;
    BOOL _shouldAllowSlideBackgroundAlpha;
    NSObject<OS_dispatch_queue> *_prepareQueue;
    NSMutableDictionary *_soundtrackMediaDataForMovieIdentifiers;
    KNMovieTimelineMovieSampleGenerator *_movieTimelineMovieSampleGenerator;
    KNAutoplayedShowMovieSampleGeneratorVideoTrack *_videoTrack;
    // Error parsing type: Ai, name: _isCancelled
    double _duration;
}

@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (float)movieTimelineMovieSampleGenerator:(id)arg1 audioVolumeForMovieIdentifier:(id)arg2;
- (id)movieTimelineMovieSampleGenerator:(id)arg1 assetForMovieIdentifier:(id)arg2;
@property(readonly, nonatomic) NSError *error;
- (void)cancel;
- (void)willCancel;
@property(readonly, nonatomic) double framesPerSecond;
@property(readonly, nonatomic) NSArray *tracks;
- (void)prepareTracksWithReadTicket:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDocumentRoot:(id)arg1 size:(struct CGSize)arg2 buildDelay:(double)arg3 transitionDelay:(double)arg4 alwaysLoop:(BOOL)arg5 slideRange:(struct _NSRange)arg6 videoFrameDuration:(CDStruct_1b6d18a9)arg7 shouldAllowSlideBackgroundAlpha:(BOOL)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

