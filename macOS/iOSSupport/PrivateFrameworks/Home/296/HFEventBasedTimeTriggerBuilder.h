//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFConcreteTimeTriggerBuilder.h>

@class NSSet;

@interface HFEventBasedTimeTriggerBuilder : HFConcreteTimeTriggerBuilder
{
    NSSet *_stagedEvents;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *stagedEvents; // @synthesize stagedEvents=_stagedEvents;
- (id)_updateExecuteOnce;
- (id)_updateRecurrences;
- (id)_updateEvents;
- (id)commitEditTrigger;
- (id)commitCreateTrigger;
- (void)_setupWithExistingTrigger:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end

