//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSArray, NSString, PasswordsDetailSheetController;

@protocol PasswordsDetailSheetControllerDecisionHandler <NSObject>
- (void)passwordsDetailSheetControllerDoesNotWantLockPolicyDeferral:(PasswordsDetailSheetController *)arg1;
- (void)passwordsDetailSheetControllerWantsLockPolicyDeferral:(PasswordsDetailSheetController *)arg1;
- (void)passwordsDetailSheetController:(PasswordsDetailSheetController *)arg1 didRemoveSites:(NSArray *)arg2;
- (BOOL)passwordsDetailSheetController:(PasswordsDetailSheetController *)arg1 canSaveUserName:(NSString *)arg2 password:(NSString *)arg3;

@optional
- (void)passwordsDetailSheetController:(PasswordsDetailSheetController *)arg1 didDismissSheetWithUserName:(NSString *)arg2 password:(NSString *)arg3;
@end

