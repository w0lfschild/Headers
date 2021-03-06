//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessoryProfile.h>

#import "HMFLocking.h"

@class HMDMediaSession, HMFUnfairLock;

@interface HMDMediaProfile : HMDAccessoryProfile <HMFLocking>
{
    HMFUnfairLock *_lock;
    HMDMediaSession *_mediaSession;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)uniqueIdentifierFromAccessory:(id)arg1;
+ (id)sessionNamespace;
+ (id)namespace;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)messageReceiverChildren;
- (void)sessionAudioControlUpdated:(id)arg1;
- (void)handleSessionVolumeUpdatedNotification:(id)arg1;
- (void)handleSessionPlaybackStateUpdatedNotification:(id)arg1;
- (void)handleSessionUpdatedNotification:(id)arg1;
- (void)_handleSetPower:(id)arg1;
- (void)_handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_sessionPlaybackStateUpdated:(id)arg1 notifyXPCClients:(BOOL)arg2;
- (void)updateWithResponses:(id)arg1 message:(id)arg2;
- (void)_handleMediaResponses:(id)arg1 message:(id)arg2;
- (void)_handleMediaSessionSetAudioControl:(id)arg1;
- (BOOL)_updateAudioControl:(id)arg1;
- (void)_handleRefreshPlayback:(id)arg1;
- (BOOL)_updateRefreshPlayback:(id)arg1;
- (void)_handleSetPlayback:(id)arg1;
- (BOOL)_updatePlayback:(id)arg1;
@property(retain) HMDMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property(readonly, nonatomic) unsigned long long capability;
- (void)registerForNotifications;
- (void)registerForMessages;
- (void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2;
- (id)initWithAccessory:(id)arg1;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)unlock;
- (void)lock;
- (id)assistantObject;
- (id)url;

@end

