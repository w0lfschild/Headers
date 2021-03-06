//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TCMBEEPProfile.h"

@class NSMutableDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface TCMBEEPManagementProfile : TCMBEEPProfile
{
    BOOL I_firstMessage;
    NSMutableDictionary *I_pendingChannelRequestMessageNumbers;
    NSMutableDictionary *I_channelNumbersByCloseRequests;
    NSMutableDictionary *I_messageNumbersOfCloseRequestsByChannelsNumbers;
    NSTimer *I_keepBEEPTimer;
}

- (void)processBEEPMessage:(id)arg1;
- (BOOL)TCM_processErrorMessage:(id)arg1;
- (BOOL)TCM_processOKMessage:(id)arg1;
- (BOOL)TCM_proccessCloseMessage:(id)arg1 XMLSubTree:(struct __CFTree *)arg2;
- (BOOL)TCM_processProfileMessage:(id)arg1 XMLSubTree:(struct __CFTree *)arg2;
- (BOOL)TCM_proccessStartMessage:(id)arg1 XMLSubTree:(struct __CFTree *)arg2;
- (BOOL)TCM_processGreeting:(id)arg1 XMLTree:(struct __CFTree *)arg2;
- (void)cleanup;
- (void)sendKeepBEEP:(id)arg1;
- (void)acceptCloseRequestForChannelWithNumber:(int)arg1;
- (void)closeChannelWithNumber:(int)arg1 code:(int)arg2;
- (void)startChannelNumber:(int)arg1 withProfileURIs:(id)arg2 andData:(id)arg3;
- (void)sendGreetingWithProfileURIs:(id)arg1 featuresAttribute:(id)arg2 localizeAttribute:(id)arg3;
- (void)dealloc;
- (id)initWithChannel:(id)arg1;

@end

