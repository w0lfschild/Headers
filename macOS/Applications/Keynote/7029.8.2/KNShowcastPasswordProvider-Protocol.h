//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol KNShowcastPasswordReceiver;

@protocol KNShowcastPasswordProvider <NSObject>
- (void)cancelProvidingPassword;
- (void)didApplyPassword:(unsigned long long)arg1;
- (void)requirePassword:(id <KNShowcastPasswordReceiver>)arg1 trialCount:(long long)arg2 hint:(NSString *)arg3 networkDisconnected:(BOOL)arg4;
@end

