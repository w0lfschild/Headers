//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSACModel.h"
#import "MSACSerializableObject.h"

@class MSACAppExtension, MSACDeviceExtension, MSACLocExtension, MSACMetadataExtension, MSACNetExtension, MSACOSExtension, MSACProtocolExtension, MSACSDKExtension, MSACUserExtension;

@interface MSACCSExtensions : NSObject <MSACSerializableObject, MSACModel>
{
    MSACMetadataExtension *_metadataExt;
    MSACProtocolExtension *_protocolExt;
    MSACUserExtension *_userExt;
    MSACDeviceExtension *_deviceExt;
    MSACOSExtension *_osExt;
    MSACAppExtension *_appExt;
    MSACNetExtension *_netExt;
    MSACSDKExtension *_sdkExt;
    MSACLocExtension *_locExt;
}

@property(retain, nonatomic) MSACLocExtension *locExt; // @synthesize locExt=_locExt;
@property(retain, nonatomic) MSACSDKExtension *sdkExt; // @synthesize sdkExt=_sdkExt;
@property(retain, nonatomic) MSACNetExtension *netExt; // @synthesize netExt=_netExt;
@property(retain, nonatomic) MSACAppExtension *appExt; // @synthesize appExt=_appExt;
@property(retain, nonatomic) MSACOSExtension *osExt; // @synthesize osExt=_osExt;
@property(retain, nonatomic) MSACDeviceExtension *deviceExt; // @synthesize deviceExt=_deviceExt;
@property(retain, nonatomic) MSACUserExtension *userExt; // @synthesize userExt=_userExt;
@property(retain, nonatomic) MSACProtocolExtension *protocolExt; // @synthesize protocolExt=_protocolExt;
@property(retain, nonatomic) MSACMetadataExtension *metadataExt; // @synthesize metadataExt=_metadataExt;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)serializeToDictionary;

@end

