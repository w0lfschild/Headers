//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface iTermSessionTitleProvider : NSObject
{
    NSString *_displayName;
    NSString *_invocation;
    NSString *_uniqueIdentifier;
}

@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSString *invocation; // @synthesize invocation=_invocation;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)invocationOfRegistrationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;

@end

