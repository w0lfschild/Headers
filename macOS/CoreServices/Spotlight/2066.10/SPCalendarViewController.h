//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Spotlight/SPPreviewController.h>

@class EKEventStore, EKEventViewController, NSArray, NSObject, NSWindow;
@protocol OS_dispatch_queue;

@interface SPCalendarViewController : SPPreviewController
{
    EKEventStore *_store;
    NSObject<OS_dispatch_queue> *_queue;
    NSWindow *_window;
    NSArray *_events;
    long long _index;
    EKEventViewController *_eventViewController;
}

+ (id)sharedPreviewController;
@property(retain) EKEventViewController *eventViewController; // @synthesize eventViewController=_eventViewController;
@property long long index; // @synthesize index=_index;
@property(retain) NSArray *events; // @synthesize events=_events;
@property __weak NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)nextEvent;
- (void)setRepresentedObject:(id)arg1;
- (void)setupForObject:(id)arg1;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

