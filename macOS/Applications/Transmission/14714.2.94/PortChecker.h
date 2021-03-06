//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData, NSTimer, NSURLConnection;

@interface PortChecker : NSObject
{
    id fDelegate;
    int fStatus;
    NSURLConnection *fConnection;
    NSMutableData *fPortProbeData;
    NSTimer *fTimer;
}

- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancelProbe;
- (int)status;
- (void)dealloc;
- (id)initForPort:(long long)arg1 delay:(BOOL)arg2 withDelegate:(id)arg3;
- (void)callBackWithStatus:(int)arg1;
- (void)startProbe:(id)arg1;

@end

