//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface LPLayoutBlacklist : NSObject
{
    NSSet *_bundleIDBlacklist;
    unsigned long long _version;
    NSArray *_rulesBasedBlacklist;
}

@property unsigned long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (BOOL)itemBlacklisted:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

