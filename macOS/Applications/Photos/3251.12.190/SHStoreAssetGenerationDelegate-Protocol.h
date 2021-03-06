//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSProgress, NSString, SHStoreClient;

@protocol SHStoreAssetGenerationDelegate <NSObject>
- (unsigned long long)numberOfResourcesThatRequireGenerationForStoreClient:(SHStoreClient *)arg1 withIdentifier:(NSString *)arg2;
- (NSString *)storeClient:(SHStoreClient *)arg1 buildAssetThumbnailWithIdentifier:(NSString *)arg2 progress:(NSProgress *)arg3 error:(id *)arg4;
- (NSString *)storeClient:(SHStoreClient *)arg1 buildAssetWithIdentifier:(NSString *)arg2 progress:(NSProgress *)arg3 error:(id *)arg4;

@optional
- (void)storeClient:(SHStoreClient *)arg1 tearDownAssetWithPath:(NSString *)arg2;
@end

