//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ITMTmuxRequest_SendCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *command; // @dynamic command;
@property(copy, nonatomic) NSString *connectionId; // @dynamic connectionId;
@property(nonatomic) BOOL hasCommand; // @dynamic hasCommand;
@property(nonatomic) BOOL hasConnectionId; // @dynamic hasConnectionId;

@end

