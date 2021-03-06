//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CXCallObserverDelegate-Protocol.h>
#import <CoreUtils/FMFSessionDelegate-Protocol.h>

@class CUBluetoothClient, CUNetInterfaceMonitor, CUSystemMonitor, CUWiFiManager, CXCallObserver, NSArray, NSData, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CUSystemMonitorImp : NSObject <FMFSessionDelegate, CXCallObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct NSMutableSet *_monitors;
    CDStruct_83abfce7 _bluetoothAddress48;
    NSData *_bluetoothAddressData;
    CUBluetoothClient *_bluetoothClient;
    CXCallObserver *_callObserver;
    int _activeCallCount;
    unsigned int _consoleUserID;
    NSString *_consoleUserName;
    struct __SCDynamicStore *_consoleUserStore;
    BOOL _familyFailed;
    NSArray *_familyMembers;
    BOOL _familyObserving;
    CUSystemMonitor *_familyPrimaryIPMonitor;
    int _familyUpdatedToken;
    int _fmfDevicesChangedToken;
    int _meDeviceChangedToken;
    int _meDeviceRetryToken;
    NSString *_meDeviceFMFDeviceID;
    NSString *_meDeviceIDSDeviceID;
    NSString *_meDeviceName;
    BOOL _meDeviceValid;
    CUNetInterfaceMonitor *_netInterfaceMonitor;
    unsigned int _netFlags;
    CDUnion_fab80606 _primaryIPv4Addr;
    CDUnion_fab80606 _primaryIPv6Addr;
    int _powerSourceToken;
    BOOL _powerUnlimited;
    BOOL _primaryAppleIDIsHSA2;
    BOOL _primaryAppleIDObserving;
    CDStruct_83abfce7 _rotatingIdentifier48;
    NSData *_rotatingIdentifierData;
    CUSystemMonitor *_rotatingIdentifierBluetoothAddressMonitor;
    NSObject<OS_dispatch_source> *_rotatingIdentifierTimer;
    BOOL _screenLocked;
    int _screenLockedToken;
    int _screenUnlockedToken;
    BOOL _screenOn;
    struct IONotificationPort *_screenNotificationPort;
    unsigned int _screenNotification;
    BOOL _screenSaverActive;
    BOOL _firstUnlocked;
    int _firstUnlockToken;
    CUWiFiManager *_wifiManager;
    unsigned int _wifiFlags;
    int _wifiState;
}

- (void).cxx_destruct;
- (void)_wifiMonitorStateChanged:(BOOL)arg1;
- (void)_wifiMonitorStop;
- (void)_wifiMonitorStart;
- (void)_firstUnlockMonitorCheck:(BOOL)arg1;
- (void)_firstUnlockMonitorStop;
- (void)_firstUnlockMonitorStart;
- (void)_screenSaverMonitorStop;
- (void)_screenSaverMonitorStart;
- (void)_screenChanged:(BOOL)arg1;
- (void)_screenOnMonitorStop;
- (void)_screenOnMonitorStart;
- (void)_screenLockedChanged;
- (void)_screenLockedMonitorStop;
- (void)_screenLockedMonitorStart;
- (void)_rotatingIdentifierTimerReset:(BOOL)arg1;
- (void)_rotatingIdentifierTimerFired;
- (void)_rotatingIdentifierBTUpdated;
- (void)_rotatingIdentifierMonitorStop;
- (void)_rotatingIdentifierMonitorStart;
- (void)_primaryAppleIDChanged:(id)arg1;
- (void)_primaryAppleIDMonitorStop;
- (void)_primaryAppleIDMonitorStart;
- (void)_powerUnlimitedMonitorStop;
- (void)_powerUnlimitedMonitorStart;
- (void)_netInterfaceMonitorStop;
- (void)_netInterfaceMonitorStart;
- (void)_meDeviceCheckCompletion:(id)arg1 error:(id)arg2 firstCheck:(BOOL)arg3;
- (void)_meDeviceCheckStart:(BOOL)arg1;
- (void)_meDeviceMonitorStop;
- (void)_meDeviceMonitorStart;
- (void)_familyUpdated:(id)arg1;
- (void)_familyNetworkChanged;
- (void)_familyGetMembers:(BOOL)arg1;
- (void)_familyMonitorStop;
- (void)_familyMonitorStart;
- (void)_consoleUserChanged;
- (void)_consoleUserMonitorStop;
- (void)_consoleUserMonitorStart;
- (int)_activeCallCountUnached;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)_callMonitorStop;
- (void)_callMonitorStart;
- (void)_bluetoothAddressMonitorStop;
- (void)_bluetoothAddressMonitorStart;
- (void)_update;
- (void)updateWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invokeBlock:(CDUnknownBlockType)arg1 passingTest:(CDUnknownBlockType)arg2;
- (BOOL)_hasMonitorPassingTest:(CDUnknownBlockType)arg1;
- (void)removeMonitor:(id)arg1;
- (void)addMonitor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

