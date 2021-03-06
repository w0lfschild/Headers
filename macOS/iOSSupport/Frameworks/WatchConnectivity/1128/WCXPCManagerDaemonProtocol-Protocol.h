//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchConnectivity/NSObject-Protocol.h>

@class NSData, NSString, NSURL, WCMessage, WCSessionFileTransfer, WCSessionUserInfoTransfer;

@protocol WCXPCManagerDaemonProtocol <NSObject>
- (void)acknowledgeUserInfoResultIndexWithIdentifier:(NSString *)arg1 clientPairingID:(NSString *)arg2;
- (void)acknowledgeUserInfoIndexWithIdentifier:(NSString *)arg1 clientPairingID:(NSString *)arg2;
- (void)acknowledgeFileResultIndexWithIdentifier:(NSString *)arg1 clientPairingID:(NSString *)arg2;
- (void)acknowledgeFileIndexWithIdentifier:(NSString *)arg1 clientPairingID:(NSString *)arg2;
- (void)cancelAllOutstandingMessages;
- (void)cancelSendWithIdentifier:(NSString *)arg1;
- (void)transferUserInfo:(WCSessionUserInfoTransfer *)arg1 withURL:(NSURL *)arg2 clientPairingID:(NSString *)arg3 errorHandler:(void (^)(NSError *))arg4;
- (void)transferFile:(WCSessionFileTransfer *)arg1 sandboxToken:(NSData *)arg2 clientPairingID:(NSString *)arg3 errorHandler:(void (^)(NSError *))arg4;
- (void)updateApplicationContext:(NSData *)arg1 clientPairingID:(NSString *)arg2 errorHandler:(void (^)(NSError *))arg3;
- (void)sendMessage:(WCMessage *)arg1 clientPairingID:(NSString *)arg2 acceptanceHandler:(void (^)(BOOL, BOOL))arg3;
- (void)sessionReadyForInitialStateForClientPairingID:(NSString *)arg1 supportsActiveDeviceSwitch:(BOOL)arg2 withErrorHandler:(void (^)(NSError *))arg3;
@end

