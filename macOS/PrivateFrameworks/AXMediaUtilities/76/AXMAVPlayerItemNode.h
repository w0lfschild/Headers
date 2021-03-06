//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXMediaUtilities/AXMSourceNode.h>

#import "AVPlayerItemLegibleOutputPushDelegate.h"

@class AVPlayerItem, AXMVisionAnalysisOptions, NSObject<OS_dispatch_queue>, NSString;

@interface AXMAVPlayerItemNode : AXMSourceNode <AVPlayerItemLegibleOutputPushDelegate>
{
    NSObject<OS_dispatch_queue> *_avkit_queue;
    BOOL _triggeringLegibilityEvents;
    AVPlayerItem *_targetPlayerItem;
    AXMVisionAnalysisOptions *_analysisOptions;
}

+ (id)title;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // @synthesize analysisOptions=_analysisOptions;
@property(nonatomic) __weak AVPlayerItem *targetPlayerItem; // @synthesize targetPlayerItem=_targetPlayerItem;
@property(readonly, nonatomic, getter=isTriggeringLegibilityEvents) BOOL triggeringLegibilityEvents; // @synthesize triggeringLegibilityEvents=_triggeringLegibilityEvents;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_198678f7)arg4;
- (void)outputSequenceWasFlushed:(id)arg1;
- (id)axmDescription;
- (void)endAutoTriggerOfLegibilityEvents;
- (void)_mainQueue_endAutoTriggerOfLegibilityEvents;
- (void)autoTriggerLegibilityEventsWithAVPlayerItem:(id)arg1;
- (void)nodeInitialize;
- (void)setShouldProcessRemotely:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

