//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, RCSSavedRecordingAccessToken, VMPlayerItem;

@protocol VMPlaybackController <NSObject>
@property(retain, nonatomic) NSError *playbackError;
@property(retain, nonatomic) RCSSavedRecordingAccessToken *playbackToken;
@property(retain, nonatomic) VMPlayerItem *playerItem;
@property(retain, nonatomic) NSString *recordingID;
@property(nonatomic) double currentTime;
@property(nonatomic) int currentState;
@property(nonatomic) float currentRate;
@property(nonatomic) CDStruct_73a5d3ca playableRange;
@property(nonatomic) double targetTime;
@property(nonatomic) int targetState;
@property(nonatomic) float targetRate;
@end

