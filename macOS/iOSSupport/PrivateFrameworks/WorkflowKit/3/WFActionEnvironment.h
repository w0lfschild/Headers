//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFActionEnvironment : NSObject
{
}

+ (id)currentEnvironment;
+ (id)environmentForWorkflowType:(id)arg1;
@property(readonly, nonatomic) BOOL isAppExtension;
@property(readonly, nonatomic) BOOL isWatchOS;
@property(readonly, nonatomic) BOOL isMemoryConstrained;

@end

