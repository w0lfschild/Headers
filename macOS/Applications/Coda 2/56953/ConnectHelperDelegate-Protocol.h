//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class ConnectHelper, NSError, PCFSOperation;

@protocol ConnectHelperDelegate
- (void)connectHelper:(ConnectHelper *)arg1 showError:(NSError *)arg2;
- (void)connectHelper:(ConnectHelper *)arg1 operationWasCancelled:(PCFSOperation *)arg2;
- (void)connectHelper:(ConnectHelper *)arg1 requestPassword:(BOOL)arg2 requestUsername:(BOOL)arg3;
@end

