//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSProgress;

@protocol SUOSUMacBuddyDelegate <NSObject>

@optional
- (void)installDidFinishWithError:(NSError *)arg1 forUpdates:(NSArray *)arg2;
- (void)installDidFinishSuccessfullyForUpdates:(NSArray *)arg1;
- (void)installDidBeginForUpdates:(NSArray *)arg1 progress:(NSProgress *)arg2;
@end

