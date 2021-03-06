//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HVContentLoadController, NSString, NSTimer;

@interface HVContentLoad : NSObject
{
    double _timeout;
    NSTimer *_timeoutTimer;
    NSString *_loadID;
    HVContentLoadController *_controller;
}

- (void).cxx_destruct;
@property __weak HVContentLoadController *controller; // @synthesize controller=_controller;
@property(retain) NSString *loadID; // @synthesize loadID=_loadID;
@property(retain) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property double timeout; // @synthesize timeout=_timeout;
- (id)description;
- (void)stop;
- (void)_endLoadAfterTimeout;
- (id)initWithID:(id)arg1 timeout:(double)arg2 controller:(id)arg3;

@end

