//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface iTermBuriedSessions : NSObject
{
    NSMutableArray *_array;
    NSArray *_menus;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *menus; // @synthesize menus=_menus;
- (void)tmuxWindowCacheDidChange:(id)arg1;
- (void)disinterTmuxWindow:(id)arg1;
- (void)disinter:(id)arg1;
- (void)updateMenu:(id)arg1;
- (void)updateMenus;
- (void)restoreFromState:(id)arg1;
- (id)restorableState;
- (id)buriedSessions;
- (void)restoreSession:(id)arg1;
- (void)addBuriedSession:(id)arg1;
- (id)init;

@end

