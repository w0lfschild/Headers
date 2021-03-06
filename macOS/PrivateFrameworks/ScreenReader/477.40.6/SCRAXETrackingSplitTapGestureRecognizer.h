//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReader/SCRAXETrackingGestureRecognizer-Protocol.h>

@class NSDate, NSString, SCRAXETrackingTouchEvent;
@protocol SCRAXETrackingSplitTapGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface SCRAXETrackingSplitTapGestureRecognizer : NSObject <SCRAXETrackingGestureRecognizer>
{
    double _maximumTapDownDeviation;
    double _maximumTapDownDuration;
    double _maximumTapInterval;
    id <SCRAXETrackingSplitTapGestureRecognizerDelegate> _delegate;
    SCRAXETrackingTouchEvent *__firstTouchStart;
    SCRAXETrackingTouchEvent *__secondTouchStart;
    NSDate *__secondTouchStartTime;
    unsigned long long __currentState;
}

@property(nonatomic) unsigned long long _currentState; // @synthesize _currentState=__currentState;
@property(retain, nonatomic) NSDate *_secondTouchStartTime; // @synthesize _secondTouchStartTime=__secondTouchStartTime;
@property(retain, nonatomic) SCRAXETrackingTouchEvent *_secondTouchStart; // @synthesize _secondTouchStart=__secondTouchStart;
@property(retain, nonatomic) SCRAXETrackingTouchEvent *_firstTouchStart; // @synthesize _firstTouchStart=__firstTouchStart;
@property(nonatomic) __weak id <SCRAXETrackingSplitTapGestureRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double maximumTapInterval; // @synthesize maximumTapInterval=_maximumTapInterval;
@property(readonly, nonatomic) double maximumTapDownDuration; // @synthesize maximumTapDownDuration=_maximumTapDownDuration;
@property(readonly, nonatomic) double maximumTapDownDeviation; // @synthesize maximumTapDownDeviation=_maximumTapDownDeviation;
- (void).cxx_destruct;
- (void)reset;
- (void)processGestureEvent:(id)arg1;
- (id)initWithMaximumTapDownDeviation:(double)arg1 maximumTapDownDuration:(double)arg2 maximumTapInterval:(double)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

