//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ShortcutActionHandling-Protocol.h"

@protocol MenuBarActionHandling <ShortcutActionHandling>
- (void)requestNewTab:(id)arg1;
- (void)requestNewWindow:(id)arg1;
- (void)presentAddToFavorites;
- (void)presentAddToCollection:(id)arg1;
- (void)presentAddNewCollection;
- (void)_share:(id)arg1;
- (void)printCurrentState;
- (void)toggleDirections;
- (void)toggleSidebar;
- (void)copyLink;
- (void)selectAll:(id)arg1;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)copy:(id)arg1;
- (void)find:(id)arg1;
@end

