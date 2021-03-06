//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WBSCredentialMatchCriteria : NSObject
{
    unsigned long long _options;
    NSURL *_URL;
    NSString *_partialUsername;
}

@property(readonly, copy, nonatomic) NSString *partialUsername; // @synthesize partialUsername=_partialUsername;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 partialUsername:(id)arg3;

@end

