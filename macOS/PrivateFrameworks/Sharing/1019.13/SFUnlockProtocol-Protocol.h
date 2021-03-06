//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSString, SFAutoUnlockDevice;
@protocol SFUnlockClientProtocol;

@protocol SFUnlockProtocol <NSObject>

@optional
- (void)unlockStateForDevice:(NSString *)arg1 completionHandler:(void (^)(SFUnlockState *, NSError *))arg2;
- (void)establishStashBagWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (void)unlockEnabledWithDevice:(NSString *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)disableUnlockWithDevice:(NSString *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)enableUnlockWithDevice:(NSString *)arg1 fromKey:(BOOL)arg2 withPasscode:(NSString *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)authPromptInfoWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)autoUnlockStateWithCompletionHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)cancelAutoUnlock;
- (void)attemptAutoUnlockWithClientProxy:(id <SFUnlockClientProtocol>)arg1;
- (void)disableAutoUnlockForDevice:(SFAutoUnlockDevice *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)cancelEnablingAutoUnlockForDevice:(SFAutoUnlockDevice *)arg1;
- (void)enableAutoUnlockWithDevice:(SFAutoUnlockDevice *)arg1 passcode:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)enableAutoUnlockWithDevice:(SFAutoUnlockDevice *)arg1 passcode:(NSString *)arg2 clientProxy:(id <SFUnlockClientProtocol>)arg3;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(void (^)(NSSet *, NSError *))arg1;
- (void)repairCloudPairing;
@end

