//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMenuItem;

@interface MPDebugMenuController : NSObject
{
    NSMenuItem *debugMenuItem;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMenuItem *debugMenuItem; // @synthesize debugMenuItem;
- (id)addItem:(id)arg1;
- (id)addSeparator;
- (id)addItemWithTitle:(id)arg1 action:(SEL)arg2 target:(id)arg3;
- (void)hideMenu;
- (void)showMenu;

@end

