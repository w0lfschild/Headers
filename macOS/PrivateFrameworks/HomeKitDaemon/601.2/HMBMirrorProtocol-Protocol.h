//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBLocalZone, HMBProcessingOptions, NAFuture;
@protocol HMBLocalZoneID;

@protocol HMBMirrorProtocol <NSObject>
@property(readonly, nonatomic) NAFuture *startUp;
@property(readonly, nonatomic) id <HMBLocalZoneID> zoneID;
- (NAFuture *)shutdown;
- (NAFuture *)flush;
- (NAFuture *)triggerOutputForOutputRow:(unsigned long long)arg1 options:(HMBProcessingOptions *)arg2;
- (NAFuture *)destroy;
- (void)startUpWithLocalZone:(HMBLocalZone *)arg1;
@end

