//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreUI/NSURLConnectionDelegate-Protocol.h>

@class NSError, NSMutableData, NSString, NSTimer, NSURL, NSURLConnection;

@interface FRServerGETRequest : NSObject <NSURLConnectionDelegate>
{
    NSURLConnection *_urlConnection;
    NSTimer *_timeoutTimer;
    NSMutableData *_receivedData;
    NSError *_serverError;
    NSURL *_url;
    unsigned long long _cachePolicy;
    double _timeoutInterval;
}

@property double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(copy) NSURL *url; // @synthesize url=_url;
@property(retain) NSError *serverError; // @synthesize serverError=_serverError;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)handleServerError:(id)arg1;
- (void)handleServerResponse:(id)arg1;
- (void)stop;
- (BOOL)start;
- (void)dealloc;
- (id)init;
- (void)_cleanupURLConnection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

