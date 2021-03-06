//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMKeyValueSyncProvider-Protocol.h"

@class NSString;

@protocol MTKeyValueSyncStorageProviding <IMKeyValueSyncProvider>
@property(retain, nonatomic) NSString *podcastsDomainVersion;
- (void)setCloudSyncVersion:(NSString *)arg1 for:(NSString *)arg2;
- (NSString *)cloudSyncVersionFor:(NSString *)arg1;
- (void)setCloudSyncIsDirty:(BOOL)arg1 for:(NSString *)arg2;
- (BOOL)cloudSyncIsDirtyFor:(NSString *)arg1;
- (void)saveObjectLocally:(id)arg1 for:(NSString *)arg2;
- (void)setVersion:(long long)arg1 forKey:(NSString *)arg2;
- (long long)versionFor:(NSString *)arg1;
- (unsigned long long)syncMergePolicyForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectFor:(NSString *)arg1;
- (void)resetToInitialState;
- (BOOL)containsData;
@end

