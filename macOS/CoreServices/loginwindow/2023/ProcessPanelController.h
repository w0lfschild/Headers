//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ForceQuitPanel, LowMemoryPanel;

@interface ProcessPanelController : NSObject
{
    ForceQuitPanel *_forceQuitPanel;
    LowMemoryPanel *_lowMemoryPanel;
}

+ (id)sharedProcessPanelController;
- (void)application:(id)arg1 isHung:(BOOL)arg2;
- (void)killFrontMostApp;
- (void)closeProcessPanel;
- (BOOL)panelIsVisible;
- (void)showLowMemoryPanel;
- (void)showForceQuitPanel;

@end

