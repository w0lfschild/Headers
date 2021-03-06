//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNPresenterDisplayTimerConfiguration, KNTimebasePeriodicTimeObserver;
@protocol KNTimebase;

@interface KNPresenterDisplayTimerController : NSObject
{
    double _displayedTime;
    double _displayedElapsedTime;
    id <KNTimebase> _timebase;
    KNPresenterDisplayTimerConfiguration *_timerConfiguration;
    KNTimebasePeriodicTimeObserver *_timebasePeriodicTimeObserver;
    BOOL _isRunning;
}

- (void).cxx_destruct;
@property(copy, nonatomic) KNPresenterDisplayTimerConfiguration *timerConfiguration; // @synthesize timerConfiguration=_timerConfiguration;
@property(retain, nonatomic) id <KNTimebase> timebase; // @synthesize timebase=_timebase;
@property(nonatomic) double displayedTime; // @synthesize displayedTime=_displayedTime;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_updateDisplayedTime;
- (void)p_updateDisplayedElapsedTime;
- (void)p_stopElapsedTimeUpdatingIfNeeded;
- (void)p_startElapsedTimeUpdatingIfNeededAtDate:(id)arg1;
- (void)stopRunning;
- (void)startRunningAtDate:(id)arg1;
- (id)init;

@end

