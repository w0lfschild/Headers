//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenu.h"

@class AppPopupButton;

@interface AppPopupMenu : NSMenu
{
    id <AppPopupMenuDelegate> _menuDelegate;
    AppPopupButton *_popupButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AppPopupButton *popupButton; // @synthesize popupButton=_popupButton;
@property(nonatomic) __weak id <AppPopupMenuDelegate> menuDelegate; // @synthesize menuDelegate=_menuDelegate;
- (void)performActionForItemAtIndex:(long long)arg1;
- (id)insertItemWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 atIndex:(long long)arg4;
- (id)addItemWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;

@end

