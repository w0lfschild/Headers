//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@interface ISyncTCCAccessOperation : NSOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
    BOOL _accessGranted;
}

@property(readonly) BOOL accessGranted; // @synthesize accessGranted=_accessGranted;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)finish:(BOOL)arg1;
- (void)start;

@end

