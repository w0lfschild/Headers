//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppSSO/SOExtensionContextProtocol-Protocol.h>

@class NSXPCListenerEndpoint, SOAuthorizationRequestParameters;

@protocol SORemoteExtensionContextProtocol <SOExtensionContextProtocol>
- (void)cancelAuthorizationWithCompletion:(void (^)(SOAuthorizationCredential *, NSError *))arg1;
- (void)beginAuthorizationWithServiceXPCEndpoint:(NSXPCListenerEndpoint *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)beginAuthorizationWithRequestParameters:(SOAuthorizationRequestParameters *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

