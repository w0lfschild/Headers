//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AccessibilityElement.h"

@interface Application : AccessibilityElement
{
}

+ (id)appWithProcessIdentifier:(int)arg1;
+ (id)focusedApp;
- (id)elementAtPosition:(struct CGPoint)arg1;
- (id)visibleWindows;
- (id)windows;
- (BOOL)isHidden;

@end

