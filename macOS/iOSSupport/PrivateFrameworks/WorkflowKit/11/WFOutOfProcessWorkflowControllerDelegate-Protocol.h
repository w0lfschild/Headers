//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSError, WFOutOfProcessWorkflowController;

@protocol WFOutOfProcessWorkflowControllerDelegate <NSObject>

@optional
- (void)outOfProcessWorkflowController:(WFOutOfProcessWorkflowController *)arg1 didFinishWithError:(NSError *)arg2 cancelled:(BOOL)arg3;
- (void)outOfProcessWorkflowControllerDidStart:(WFOutOfProcessWorkflowController *)arg1;
@end

