//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UBPreferencesController;

@interface UBKeyHandler : NSObject
{
    UBPreferencesController *preferences;
    id listener;
}

- (void).cxx_destruct;
- (void)modifierKeyPressed;
- (void)modifierKeyReleased;
- (id)preferences;
- (id)initWithPreferences:(id)arg1 listener:(id)arg2;

@end

