//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DXSettings, DXStatusItemMenu, NSMenu, NSStatusItem;

@interface DXStatusItemController : NSObject
{
    BOOL _isTrackingMenu;
    DXSettings *_settings;
    NSMenu *_menu;
    NSStatusItem *_statusItem;
    DXStatusItemMenu *_menuHandler;
}

- (void).cxx_destruct;
@property BOOL isTrackingMenu; // @synthesize isTrackingMenu=_isTrackingMenu;
@property(retain) DXStatusItemMenu *menuHandler; // @synthesize menuHandler=_menuHandler;
@property(retain) NSStatusItem *statusItem; // @synthesize statusItem=_statusItem;
@property(retain) NSMenu *menu; // @synthesize menu=_menu;
@property __weak DXSettings *settings; // @synthesize settings=_settings;
- (void)popUpMenuAt:(struct CGPoint)arg1 withConfig:(id)arg2;
- (void)removeStatusItem;
- (void)addStatusItem;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithMonitor:(id)arg1 services:(id)arg2 menuBuilder:(id)arg3 settings:(id)arg4;

@end

