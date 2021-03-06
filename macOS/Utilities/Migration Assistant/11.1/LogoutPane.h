//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MigrationAssistantPane.h"

@class LAContext, NSData, NSDictionary, NSMutableArray, NSNumber, NSObject, NSString, NSWindow, OBTemplateView;
@protocol OS_dispatch_semaphore;

@interface LogoutPane : MigrationAssistantPane
{
    BOOL _logoutSucceeded;
    OBTemplateView *_templateView;
    NSString *_status;
    NSString *_secretPassword;
    NSString *_intendedBuddyStartingPane;
    NSString *_remoteComputerName;
    struct AuthorizationOpaqueRef *_authRef;
    LAContext *_laCtx;
    NSData *_pwOfAuthenticatingAdminInExternalizedContext;
    NSNumber *_uidOfAuthenticatingAdmin;
    NSMutableArray *_shieldWindows;
    NSObject<OS_dispatch_semaphore> *_buddyIsReadySem;
    NSObject<OS_dispatch_semaphore> *_logoutIsCompleteSem;
    NSDictionary *_buddyScreenshotData;
    NSWindow *_fakeBuddyWindow;
    double _buddyStartUpDuration;
}

- (void).cxx_destruct;
@property double buddyStartUpDuration; // @synthesize buddyStartUpDuration=_buddyStartUpDuration;
@property(retain) NSWindow *fakeBuddyWindow; // @synthesize fakeBuddyWindow=_fakeBuddyWindow;
@property(retain) NSDictionary *buddyScreenshotData; // @synthesize buddyScreenshotData=_buddyScreenshotData;
@property BOOL logoutSucceeded; // @synthesize logoutSucceeded=_logoutSucceeded;
@property(retain) NSObject<OS_dispatch_semaphore> *logoutIsCompleteSem; // @synthesize logoutIsCompleteSem=_logoutIsCompleteSem;
@property(retain) NSObject<OS_dispatch_semaphore> *buddyIsReadySem; // @synthesize buddyIsReadySem=_buddyIsReadySem;
@property(retain) NSMutableArray *shieldWindows; // @synthesize shieldWindows=_shieldWindows;
@property(retain) NSNumber *uidOfAuthenticatingAdmin; // @synthesize uidOfAuthenticatingAdmin=_uidOfAuthenticatingAdmin;
@property(retain) NSData *pwOfAuthenticatingAdminInExternalizedContext; // @synthesize pwOfAuthenticatingAdminInExternalizedContext=_pwOfAuthenticatingAdminInExternalizedContext;
@property(retain) LAContext *laCtx; // @synthesize laCtx=_laCtx;
@property struct AuthorizationOpaqueRef *authRef; // @synthesize authRef=_authRef;
@property(retain) NSString *remoteComputerName; // @synthesize remoteComputerName=_remoteComputerName;
@property(retain) NSString *intendedBuddyStartingPane; // @synthesize intendedBuddyStartingPane=_intendedBuddyStartingPane;
@property(retain) NSString *secretPassword; // @synthesize secretPassword=_secretPassword;
@property(retain) NSString *status; // @synthesize status=_status;
- (void)displayAuthorizationDetailsExtractionFailedAlert;
- (id)getAuthenticatingUserName:(id *)arg1;
- (BOOL)obtainAuthenticatingUserUIDFromUsername:(id)arg1 error:(id *)arg2;
- (BOOL)obtainAuthenticatingUserUID:(id *)arg1;
- (BOOL)obtainAuthenticatingUserPassword:(id *)arg1;
- (BOOL)obtainAuthorization;
- (BOOL)authorizationRequired;
- (id)_desktopImageForScreen:(id)arg1;
- (void)makeShieldWindows;
- (void)completeBuddySwitch;
- (void)startBuddySession;
- (void)logoutFailed;
- (void)performTransition;
- (void)startTransition;
- (void)didDisplayPane;
- (void)willDisplayPane;
- (id)previousPaneIdentifier;
- (id)templateView;
- (void)dealloc;
- (id)init;

@end

