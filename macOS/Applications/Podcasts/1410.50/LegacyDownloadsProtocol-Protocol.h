//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSSet, NSString;

@protocol LegacyDownloadsProtocol <NSObject>
- (void)removeDownload:(NSString *)arg1;
- (void)removeZombieDownloads;
- (NSString *)episodeUuidForDownloadWithAdamID:(NSNumber *)arg1;
- (void)cancelAllDownloads;
- (void)cancelDownloadsForEpisodeUuid:(NSString *)arg1;
- (BOOL)resumeOrPauseEpisodeDownloadWithUuid:(NSString *)arg1;
- (void)downloadEpisode:(NSString *)arg1;
- (void)restoreDownloadedEpisodes:(NSSet *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)addEpisodeAutoDownloads:(NSSet *)arg1 completion:(void (^)(NSSet *))arg2;
@end

