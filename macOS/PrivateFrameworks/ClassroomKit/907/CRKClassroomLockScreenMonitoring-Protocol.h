//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol CRKClassroomLockScreenMonitoring <NSObject>
+ (id)sharedMonitor;
@property(readonly, nonatomic, getter=isClassroomLockScreenVisible) BOOL classroomLockScreenVisible;
- (void)dismissClassroomLockScreen;
- (void)displayClassroomLockScreenWithLabel:(NSString *)arg1 passcode:(NSString *)arg2;
@end

