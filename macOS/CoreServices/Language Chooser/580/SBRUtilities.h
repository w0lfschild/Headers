//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBRUtilities : NSObject
{
}

+ (void)releasePowerAssertion:(unsigned int)arg1;
+ (unsigned int)createPowerAssertionWithDescription:(id)arg1 timeout:(double)arg2;
+ (id)alertIcon;
+ (id)bridgeVersionStringFromBinaryRepresentation:(id)arg1;
+ (BOOL)clearContentsOfDirectory:(id)arg1;
+ (BOOL)isAppleInternalBuild;
+ (BOOL)_shouldShutdownOrRestart;
+ (BOOL)restart;
+ (BOOL)shutdown;
+ (BOOL)quit;
+ (BOOL)systemSupportsTRBX;
+ (BOOL)systemHasBridgeOS;

@end

