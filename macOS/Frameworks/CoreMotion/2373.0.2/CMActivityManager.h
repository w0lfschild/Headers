//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMActivityManager : NSObject
{
    id _internal;
}

- (long long)simulateMotionState:(BOOL)arg1 withState:(long long)arg2;
- (long long)overrideOscarSideband:(BOOL)arg1 withState:(long long)arg2;
@property(readonly, nonatomic, getter=isActivityAvailable) BOOL activityAvailable;
@property(copy) CDUnknownBlockType activityHandler;
- (void)dealloc;
- (id)init;

@end

