//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DFRTouchBar;

__attribute__((visibility("hidden")))
@interface DFRTouchBarSimulator : NSObject
{
    struct os_unfair_lock_s _lock;
    long long _style;
    DFRTouchBar *_touchBar;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 properties:(id)arg2;

@end

