//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NUAdStore : NSObject
{
    NSMutableDictionary *_ads;
}

@property(readonly, nonatomic) NSMutableDictionary *ads; // @synthesize ads=_ads;
- (void).cxx_destruct;
- (void)removeAd:(id)arg1;
- (void)addAd:(id)arg1;
- (id)adsForState:(unsigned long long)arg1;
- (id)allAds;
- (id)init;

@end

