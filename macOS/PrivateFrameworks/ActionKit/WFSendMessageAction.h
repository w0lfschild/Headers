//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFSendMessageAction : WFHandleSystemIntentAction
{
}

- (id)serializedParametersForDonatedIntent:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)getContentFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getRecipients:(CDUnknownBlockType)arg1;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)supportedAppIdentifiers;
- (unsigned long long)minimumSupportedClientVersion;
- (BOOL)skipsProcessingHiddenParameters;
- (BOOL)opensInApp;

@end

