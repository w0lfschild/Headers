//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDAccessoryBrowserInjectedSettings-Protocol.h>

@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings>
{
    NSObject<OS_dispatch_queue> *queue;
}

- (void).cxx_destruct;
- (id)createAuthServerWithDelegate:(id)arg1;
- (id)createRelayAccessoryBrowser;
- (id)createBtleAccessoryBrowser;
- (id)createIpAccessoryBrowser;
- (id)workQueue;
- (id)init;

@end

