//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTPreferences : NSObject
{
}

+ (BOOL)_copyUserDefaultToSharedContainer:(id)arg1 synchronize:(BOOL)arg2;
+ (id)_defaultSettings;
+ (BOOL)copySettingsToSharedContainer;
+ (void)moveUserDefaultToSharedContainer:(id)arg1;
+ (void)registerDefaults;
+ (id)sharedUserDefaults;

@end

