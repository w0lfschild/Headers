//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSScreenConfiguration : NSObject
{
}

+ (double)latestGreatestBackingScaleFactor;
+ (BOOL)latestZeroScreenIsNew;
+ (double)latestZeroScreenHeight;
+ (id)latestScreens;
+ (BOOL)invalidateConfigurationIfNeededForReason:(unsigned long long)arg1;
+ (void)invalidateConfigurationForReason:(unsigned long long)arg1;
+ (void)prepare;

@end

