//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _NSTouchBarLogger : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

+ (void)addLogInfo:(id)arg1 type:(id)arg2;
+ (void)addLogMessage:(id)arg1;
+ (id)sharedTouchBarLogger;
+ (void)listenForHotKey;
- (void)addLogInfo:(id)arg1 type:(id)arg2;
- (id)connection;
- (void)dealloc;
- (id)init;

@end

