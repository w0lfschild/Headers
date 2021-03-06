//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface IMNetworkObserver : NSObject
{
    NSString *_dataStatusIndicator;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned int _networkReachabilityFlags;
    long long _networkType;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_operatorName;
    struct __SCNetworkReachability *_reachability;
    struct __CTServerConnection *_telephonyServer;
}

+ (id)_networkObserverLogConfig;
+ (BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned int)arg1;
+ (id)sharedInstance;
- (long long)_setNetworkType:(long long)arg1;
- (void)_reloadNetworkTypeWithReachabilityFlags:(unsigned int)arg1;
- (void)_reloadNetworkType;
- (void)_reloadDataStatusIndicator;
- (void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2;
- (void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned int)arg1 toValue:(unsigned int)arg2;
- (long long)_networkTypeForReachabilityFlags:(unsigned int)arg1;
- (long long)_networkTypeFromDataIndicator:(id)arg1;
- (id)_dataStatusIndicator;
- (unsigned int)_currentNetworkReachabilityFlags;
- (void)_copyConnectionDataStatus:(CDUnknownBlockType)arg1;
- (void)_handleTelephonyNotificationWithName:(struct __CFString *)arg1 userInfo:(struct __CFDictionary *)arg2;
- (void)_applicationForegroundNotification:(id)arg1;
@property long long networkType;
- (void)reloadNetworkType;
- (id)operatorName;
- (id)dataStatusIndicator;
@property(readonly) unsigned int networkReachabilityFlags;
- (id)stringForNetworkType:(long long)arg1;
- (BOOL)networkTypeIsCellularType:(long long)arg1;
@property(readonly) NSString *connectionTypeHeader;
- (void)dealloc;
- (id)init;

@end

