//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ACNotificationRebroadcaster : NSObject
{
}

+ (id)sharedRebroadcaster;
- (void)_endObservingAccountStoreDidChangeNotifications;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_beginObservingAccountStoreDidChangeNotifications;
- (void)dealloc;
- (id)init;

@end

