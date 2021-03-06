//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KNRecordingEvent.h"

@class KNSlideNode, NSUUID, TSPObjectContext;

@interface KNRecordingNavigationEvent : KNRecordingEvent
{
    TSPObjectContext *_targetSlideNodeContextReference;
    NSUUID *_targetSlideNodeUUID;
    unsigned long long _targetEventIndex;
    long long _animationPhase;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long animationPhase; // @synthesize animationPhase=_animationPhase;
@property(readonly, nonatomic) unsigned long long targetEventIndex; // @synthesize targetEventIndex=_targetEventIndex;
- (BOOL)canPrecedeDiscontinuity;
- (BOOL)isIgnoredWhenSeeking;
@property(readonly, nonatomic) KNSlideNode *targetSlideNode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartTime:(double)arg1 targetSlideNode:(id)arg2 targetEventIndex:(unsigned long long)arg3 animationPhase:(long long)arg4;
-     // Error parsing type: v32@0:8^{RecordingEventArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{RecordingNavigationEventArchive}^{RecordingLaserEventArchive}^{RecordingPauseEventArchive}^{RecordingMovieEventArchive}d}16@24, name: saveToMessage:archiver:
-     // Error parsing type: v40@0:8r^{RecordingEventArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{RecordingNavigationEventArchive}^{RecordingLaserEventArchive}^{RecordingPauseEventArchive}^{RecordingMovieEventArchive}d}16@24@32, name: loadFromMessage:unarchiver:parentEventTrack:

@end

