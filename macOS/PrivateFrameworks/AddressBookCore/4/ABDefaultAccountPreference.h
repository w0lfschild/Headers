//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAccountRepository, ABUserDefaults;

@interface ABDefaultAccountPreference : NSObject
{
    ABAccountRepository *_repository;
    ABUserDefaults *_preferences;
}

+ (id)os_log;
- (void).cxx_destruct;
- (void)defaultAccountChangedExternally:(id)arg1;
- (void)postLocalNotification;
- (void)postDistributedNotification;
- (void)postDidChangeNotifications;
- (void)registerForNotifications;
- (id)fallbackAccount;
- (void)setDefaultAccount:(id)arg1;
- (id)sanityCheckDefaultAccount:(id)arg1;
- (id)sanityCheckDefaultAcountIdentifier:(id)arg1;
- (id)defaultAccount;
- (void)dealloc;
- (id)initWithAccountRepository:(id)arg1 defaults:(id)arg2;
- (id)initWithAccountRepository:(id)arg1;

@end

