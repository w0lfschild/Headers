//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mondrian/MOLiveUpdateController.h>

#import "PFActionNotificationsReceiver-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface IPXLiveUpdateController : MOLiveUpdateController <PFActionNotificationsReceiver>
{
}

- (void)action:(id)arg1 statusChangedFrom:(int)arg2 to:(int)arg3;
- (BOOL)shouldAnimateChange:(id)arg1;
- (BOOL)isUserAction:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

