//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@interface HMDDeviceSetupManager : HMFObject
{
    id <HMFLocking> _lock;
    int _proxSetupNotificationToken;
    BOOL _running;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)stopAdvertising;
- (void)startAdvertising;
@property(readonly, getter=isRunning) BOOL running; // @synthesize running=_running;
- (void)dealloc;
- (id)init;

@end

