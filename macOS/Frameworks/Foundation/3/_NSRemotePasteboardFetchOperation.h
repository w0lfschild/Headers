//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSData, NSError, NSObject<OS_dispatch_group>, NSObject<UAPasteboardItemProviding>;

__attribute__((visibility("hidden")))
@interface _NSRemotePasteboardFetchOperation : NSOperation
{
    NSObject<UAPasteboardItemProviding> *_provider;
    struct os_unfair_lock_s _dataLock;
    NSData *_data;
    NSError *_error;
    // Error parsing type: Ac, name: _state
    NSObject<OS_dispatch_group> *_completionGroup;
}

@property(readonly) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) NSObject<UAPasteboardItemProviding> *provider; // @synthesize provider=_provider;
@property(retain) NSData *data; // @synthesize data=_data;
- (id)description;
- (void)discardData;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (void)dealloc;
- (id)initWithProvider:(id)arg1;

@end

