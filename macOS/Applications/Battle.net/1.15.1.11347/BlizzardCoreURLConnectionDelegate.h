//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BlizzardCoreURLConnectionDelegate : NSObject
{
    shared_ptr_eb78e6be callback;
    _Bool receivedData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connectOnThread:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)initWithCallback:(shared_ptr_eb78e6be *)arg1;

@end

