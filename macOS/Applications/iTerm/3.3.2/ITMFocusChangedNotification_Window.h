//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ITMFocusChangedNotification_Window : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL hasWindowId; // @dynamic hasWindowId;
@property(nonatomic) BOOL hasWindowStatus; // @dynamic hasWindowStatus;
@property(copy, nonatomic) NSString *windowId; // @dynamic windowId;
@property(nonatomic) int windowStatus; // @dynamic windowStatus;

@end

