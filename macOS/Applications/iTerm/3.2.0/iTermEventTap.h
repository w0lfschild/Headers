//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol iTermEventTapRemappingDelegate;

@interface iTermEventTap : NSObject
{
    struct __CFMachPort *_machPort;
    struct __CFRunLoopSource *_eventSource;
    unsigned long long _types;
    id <iTermEventTapRemappingDelegate> _remappingDelegate;
    NSMutableArray *_observers;
}

@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(nonatomic) id <iTermEventTapRemappingDelegate> remappingDelegate; // @synthesize remappingDelegate=_remappingDelegate;
- (BOOL)startEventTap;
- (void)stopEventTap;
- (BOOL)userIsActive;
- (void)reEnable;
- (void)pruneReleasedObservers;
- (void)postEventToObservers:(struct __CGEvent *)arg1 type:(unsigned int)arg2;
- (struct __CGEvent *)eventTapCallbackWithProxy:(struct __CGEventTapProxy *)arg1 type:(unsigned int)arg2 event:(struct __CGEvent *)arg3;
- (BOOL)shouldBeEnabled;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
- (void)setEnabled:(BOOL)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)runEventTapHandler:(id)arg1;
- (void)dealloc;
- (id)initWithEventTypes:(unsigned long long)arg1;

@end

