//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CWTetherDevice, NSString;

@protocol CWAutoHotspotInterfaceActionDelegate <NSObject>
- (void)turnOnAutoHotspot;
- (void)receivedAutoHotspotNotificationResponse:(BOOL)arg1 updateMode:(long long)arg2 tetherDevice:(CWTetherDevice *)arg3 interfaceName:(NSString *)arg4;
- (void)disconnectFromNetworkCurrentlyAssociatedToOnInterfaceWithName:(NSString *)arg1;
@end

