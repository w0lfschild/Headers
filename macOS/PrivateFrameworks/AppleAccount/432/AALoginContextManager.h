//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AAStorableLoginContext;

@interface AALoginContextManager : NSObject
{
    AAStorableLoginContext *_stashedContext;
    struct os_unfair_lock_s _stashedContextLock;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)persistStashedContext;
@property(retain, nonatomic) AAStorableLoginContext *stashedContext;
- (id)init;

@end

