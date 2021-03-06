//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "NSUserNotificationCenterDelegate.h"
#import "SFXPCInterface.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, NSUserNotification, NSUserNotificationCenter, NSXPCConnection, SDXPCServer;

@interface SFUserAlert : NSObject <NSUserNotificationCenterDelegate, NSSecureCoding, SFXPCInterface>
{
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct __CFUserNotification *_cfNotif;
    NSUserNotification *_bannerNotification;
    NSUserNotificationCenter *_notificationCenter;
    NSXPCConnection *_xpcCnx;
    struct __CFRunLoopSource *_runLoopSrc;
    BOOL _asBanner;
    BOOL _textInput;
    BOOL _hasDefaultButton;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _responseHandler;
    CDUnknownBlockType _textResponseHandler;
    CDUnknownBlockType _dictionaryResponseHandler;
    NSDictionary *_additionalInfo;
    NSURL *_iconURL;
    NSString *_message;
    NSURL *_soundURL;
    NSString *_textInputTitle;
    double _timeout;
    NSString *_title;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    NSString *_otherButtonTitle;
    SDXPCServer *_server;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) SDXPCServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(retain, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(retain, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(nonatomic) BOOL hasDefaultButton; // @synthesize hasDefaultButton=_hasDefaultButton;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *textInputTitle; // @synthesize textInputTitle=_textInputTitle;
@property(nonatomic) BOOL textInput; // @synthesize textInput=_textInput;
@property(retain, nonatomic) NSURL *soundURL; // @synthesize soundURL=_soundURL;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) BOOL asBanner; // @synthesize asBanner=_asBanner;
@property(retain, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(copy, nonatomic) CDUnknownBlockType dictionaryResponseHandler; // @synthesize dictionaryResponseHandler=_dictionaryResponseHandler;
@property(copy, nonatomic) CDUnknownBlockType textResponseHandler; // @synthesize textResponseHandler=_textResponseHandler;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)userNotificationDictionaryResponse:(id)arg1;
- (void)userNotificationTextResponse:(id)arg1;
- (void)userNotificationResponse:(int)arg1;
- (void)userNotificationError:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (id)createNotificationBanner;
- (void)_updateNotification;
- (id)_mergedDict;
- (struct __CFUserNotification *)createNotification;
- (id)_defaultDictionary;
- (void)_presentBanner;
- (void)_postNotification:(struct __CFUserNotification *)arg1;
- (void)_handleResponseForNotification:(struct __CFUserNotification *)arg1 flags:(unsigned long long)arg2;
- (void)_present;
- (void)present;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

