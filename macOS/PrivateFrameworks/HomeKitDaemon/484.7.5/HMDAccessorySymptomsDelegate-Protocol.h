//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDSymptomManager, NSSet, NSUUID;

@protocol HMDAccessorySymptomsDelegate <NSObject>
- (void)symptomManager:(HMDSymptomManager *)arg1 didChangeSFDeviceIdentifier:(NSUUID *)arg2;
- (void)symptomManager:(HMDSymptomManager *)arg1 didChangeLocalSymptoms:(NSSet *)arg2;
- (void)symptomManager:(HMDSymptomManager *)arg1 didChangeBroadcastedSymptoms:(NSSet *)arg2;
@end

