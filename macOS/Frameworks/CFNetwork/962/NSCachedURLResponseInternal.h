//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSURLResponse;

__attribute__((visibility("hidden")))
@interface NSCachedURLResponseInternal : NSObject
{
    NSURLResponse *response;
    NSData *data;
    NSDictionary *userInfo;
    unsigned long long storagePolicy;
    // Error parsing type: ^{_CFCachedURLResponse={__CFRuntimeBase=QAQ}^{__CFCachedURLResponse}}, name: _cachedURLResponse
}

- (void)dealloc;

@end

