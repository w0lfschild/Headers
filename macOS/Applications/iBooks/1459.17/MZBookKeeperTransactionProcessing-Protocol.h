//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MZBookKeeperError, MZBookKeeperTransaction, NSArray, NSData, NSString;

@protocol MZBookKeeperTransactionProcessing <NSObject>
- (void)transaction:(MZBookKeeperTransaction *)arg1 mergeData:(NSData *)arg2 forKey:(NSString *)arg3 version:(NSString *)arg4 mismatch:(BOOL)arg5 finishedBlock:(void (^)(BOOL))arg6;
- (NSData *)dataForSetTransaction:(MZBookKeeperTransaction *)arg1 key:(NSString *)arg2 version:(id *)arg3;
- (NSString *)versionForGetTransaction:(MZBookKeeperTransaction *)arg1 key:(NSString *)arg2;

@optional
- (void)transactionDidFinish:(MZBookKeeperTransaction *)arg1 success:(BOOL)arg2 error:(MZBookKeeperError *)arg3;
- (NSArray *)keysForTransaction:(MZBookKeeperTransaction *)arg1;
@end

