//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>

@class NSOperationQueue, NSURL;

@interface HMHomeManagerConfiguration : NSObject <NSCopying, NSMutableCopying>
{
    unsigned long long _cachePolicy;
    BOOL _shouldConnect;
    unsigned long long _options;
    NSOperationQueue *_delegateQueue;
    NSURL *_cacheURL;
}

+ (id)defaultPrivateConfiguration;
+ (id)defaultConfiguration;
@property(readonly) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(readonly) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) BOOL shouldConnect; // @synthesize shouldConnect=_shouldConnect;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) BOOL canUseCache;
- (id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2;
- (id)init;

@end

