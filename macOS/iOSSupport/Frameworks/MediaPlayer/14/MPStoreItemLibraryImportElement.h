//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MPStoreItemLibraryImportElement : NSObject
{
    long long _storeItemID;
    NSDictionary *_additionalTrackMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *additionalTrackMetadata; // @synthesize additionalTrackMetadata=_additionalTrackMetadata;
@property(readonly, nonatomic) long long storeItemID; // @synthesize storeItemID=_storeItemID;
- (id)initWithStoreItemID:(long long)arg1 additionalTrackMetadata:(id)arg2;

@end

