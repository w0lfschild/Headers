//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRE/IDSSessionDelegate-Protocol.h>

@class IDSSession, NSData, NSSet, NSString;

@protocol IDSSessionDelegatePrivate <IDSSessionDelegate>

@optional
- (void)session:(IDSSession *)arg1 invitationSentToTokens:(NSSet *)arg2 shouldBreakBeforeMake:(BOOL)arg3;
- (void)session:(IDSSession *)arg1 invitationSentToTokens:(NSSet *)arg2;
- (void)session:(IDSSession *)arg1 receivedSessionEndFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)session:(IDSSession *)arg1 receivedSessionMessageFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)session:(IDSSession *)arg1 receivedInvitationCancelFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)session:(IDSSession *)arg1 receivedInvitationDeclineFromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)session:(IDSSession *)arg1 receivedInvitationAcceptFromID:(NSString *)arg2 withData:(NSData *)arg3;
@end

