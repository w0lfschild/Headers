//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPPublishUserPasswordAuthenticator.h"

@class NSString;

@interface TPPublishSessionAuthenticator : TPPublishUserPasswordAuthenticator
{
    NSString *_sessionSecret;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *sessionSecret; // @synthesize sessionSecret=_sessionSecret;
- (BOOL)isAuthenticated;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

