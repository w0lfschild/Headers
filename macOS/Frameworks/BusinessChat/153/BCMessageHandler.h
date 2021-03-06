//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BCApplePayManagerDelegate.h"
#import "BCAuthenticationViewControllerDelegate.h"

@class BCApplePayManager, BCAuthenticationManager, BCInternalAuthenticationManager, BCMessage, NSString;

@interface BCMessageHandler : NSObject <BCApplePayManagerDelegate, BCAuthenticationViewControllerDelegate>
{
    BCMessage *_message;
    id <BCMessageHandlerDelegate> _delegate;
    BCAuthenticationManager *_authManager;
    BCInternalAuthenticationManager *_internalAuthManager;
    BCApplePayManager *_applePayManager;
    NSString *_recipientID;
}

+ (id)appIconForWindow:(id)arg1;
+ (id)appIcon;
@property(retain, nonatomic) NSString *recipientID; // @synthesize recipientID=_recipientID;
@property(retain, nonatomic) BCApplePayManager *applePayManager; // @synthesize applePayManager=_applePayManager;
@property(retain, nonatomic) BCInternalAuthenticationManager *internalAuthManager; // @synthesize internalAuthManager=_internalAuthManager;
@property(retain, nonatomic) BCAuthenticationManager *authManager; // @synthesize authManager=_authManager;
@property(nonatomic) __weak id <BCMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BCMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)showHandoffAlert:(id)arg1;
- (void)sendAuthenticationMessage:(id)arg1;
- (BOOL)recipientIsWhitelistedForInternalAuthentication;
- (void)performAuthenticationWithWindow:(id)arg1;
- (void)performInternalAuthentication;
- (void)paymentRequestDidUpdate:(id)arg1;
- (id)presentationProperties;
- (void)handleActionWithWindow:(id)arg1;
- (void)initializeManagers;
- (id)initWithMessage:(id)arg1 recipientID:(id)arg2 andDelegate:(id)arg3;
- (id)initWithMessage:(id)arg1 andDelegate:(id)arg2;

@end

