//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OSSystemExtensionClient : NSObject
{
}

- (BOOL)setDeveloperMode:(BOOL)arg1 withAuthorization:(const struct AuthorizationOpaqueRef *)arg2 error:(id *)arg3;
- (BOOL)developerMode:(id *)arg1;
- (BOOL)willDeleteAppAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)willMoveAppToTrash:(id)arg1 error:(id *)arg2;
- (BOOL)willReplaceAppAtURL:(id)arg1 with:(id)arg2 error:(id *)arg3;
- (BOOL)willMoveAppAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (unsigned long long)shouldDeleteAppAtURL:(id)arg1;
- (unsigned long long)shouldMoveAppToTrash:(id)arg1;
- (unsigned long long)shouldReplaceAppAtURL:(id)arg1 with:(id)arg2;
- (unsigned long long)shouldMoveAppAtURL:(id)arg1 toURL:(id)arg2;
- (void)testing__routine:(id)arg1 withAuthorization:(struct AuthorizationOpaqueRef *)arg2 error:(id *)arg3;
- (void)testing__routine:(id)arg1 error:(id *)arg2;
- (BOOL)resetExtensionDatabase:(struct AuthorizationOpaqueRef *)arg1 error:(id *)arg2;
- (BOOL)checkExtension:(id)arg1 teamID:(id)arg2 teamIDPlatformBinary:(BOOL)arg3 teamIDNone:(BOOL)arg4 error:(id *)arg5;
- (id)updateExtensions:(id)arg1;
- (BOOL)uninstallExtension:(id)arg1 withAuthorization:(const struct AuthorizationOpaqueRef *)arg2 error:(id *)arg3;
- (id)listPendingApprovalExtensions:(id *)arg1;
- (id)listPendingApprovalExtensionsWithCategory:(id)arg1 error:(id *)arg2;
- (id)listEnabledExtensions:(id *)arg1;
- (id)listEnabledExtensionsWithCategory:(id)arg1 error:(id *)arg2;
- (id)listActiveExtensions:(id *)arg1;
- (id)listActiveExtensionsWithCategory:(id)arg1 error:(id *)arg2;
- (id)listAllExtensions:(id *)arg1;
- (id)listAllExtensionsWithCategory:(id)arg1 error:(id *)arg2;

@end

