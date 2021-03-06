//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@class NSArray, NSSet, WFRemoteServerPermissionState;

@interface WFRemoteServerAccessResource : WFAccessResource
{
    NSArray *_requestedURLs;
    WFRemoteServerPermissionState *_stateForRequestedURLs;
    WFRemoteServerPermissionState *_combinedState;
}

+ (Class)permissionStateClass;
+ (BOOL)isSystemResource;
@property(retain, nonatomic) WFRemoteServerPermissionState *combinedState; // @synthesize combinedState=_combinedState;
@property(retain, nonatomic) WFRemoteServerPermissionState *stateForRequestedURLs; // @synthesize stateForRequestedURLs=_stateForRequestedURLs;
@property(copy, nonatomic) NSArray *requestedURLs; // @synthesize requestedURLs=_requestedURLs;
- (void).cxx_destruct;
- (id)localizedInsufficientPermissionsMessage;
- (id)localizedAccessPermissionPromptMessage;
- (id)localizedAccessPermissionPromptTitle;
- (id)updatedPermissionStateForPermissionGranted:(BOOL)arg1;
- (unsigned long long)workflowLevelStatus;
- (void)setCurrentPermissionState:(id)arg1;
- (unsigned long long)globalLevelStatus;
- (id)icon;
- (id)name;
@property(readonly, nonatomic) NSSet *domainsWithNotDeterminedAccess;
- (void)updateInternalStates;
@property(readonly, nonatomic) WFRemoteServerPermissionState *currentState;

@end

