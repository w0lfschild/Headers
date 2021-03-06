//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EOSDeviceType, NSString, PKBundleComponentVersion;

@interface EOSDevice : NSObject
{
    BOOL _securityMode;
    BOOL _productionMode;
    unsigned int _boardID;
    unsigned int _chipID;
    unsigned int _locationID;
    long long _mode;
    NSString *_buildVersion;
    PKBundleComponentVersion *_bundleVersion;
    struct __AMDFUModeDevice *_dfuModeDeviceRef;
    struct __AMRecoveryModeDevice *_recoveryModeDeviceRef;
    struct __AMRestoreModeDevice *_restoreModeDeviceRef;
}

@property(nonatomic) BOOL productionMode; // @synthesize productionMode=_productionMode;
@property struct __AMRestoreModeDevice *restoreModeDeviceRef; // @synthesize restoreModeDeviceRef=_restoreModeDeviceRef;
@property struct __AMRecoveryModeDevice *recoveryModeDeviceRef; // @synthesize recoveryModeDeviceRef=_recoveryModeDeviceRef;
@property struct __AMDFUModeDevice *dfuModeDeviceRef; // @synthesize dfuModeDeviceRef=_dfuModeDeviceRef;
@property(retain) PKBundleComponentVersion *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property BOOL securityMode; // @synthesize securityMode=_securityMode;
@property unsigned int locationID; // @synthesize locationID=_locationID;
@property unsigned int chipID; // @synthesize chipID=_chipID;
@property unsigned int boardID; // @synthesize boardID=_boardID;
@property long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)_populateRunningModeDeviceInfo;
- (id)fetchPreflightDictionary;
@property(readonly) EOSDeviceType *type;
@property(readonly) void *deviceRef;
- (id)description;
- (void)dealloc;
- (id)initWithUnresponsiveDevice;
- (id)initWithRunningDevice;
- (id)initWithRestoreModeDevice:(struct __AMRestoreModeDevice *)arg1;
- (id)initWithRecoveryModeDevice:(struct __AMRecoveryModeDevice *)arg1;
- (id)initWithDFUModeDevice:(struct __AMDFUModeDevice *)arg1;
- (id)_initWithRunningModeDeviceOfType:(id)arg1 productionMode:(BOOL)arg2 buildVersion:(id)arg3 bundleVersion:(id)arg4;
- (id)_initWithDFUModeDeviceWithBoardID:(unsigned int)arg1 chipID:(unsigned int)arg2;

@end

