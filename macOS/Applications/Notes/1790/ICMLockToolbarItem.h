//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICMMenuToolbarItem.h"

@interface ICMLockToolbarItem : ICMMenuToolbarItem
{
}

- (void)updateImage;
- (void)updateAccessibilityValue;
- (void)removeObservers;
- (void)addObservers;
- (void)passwordAuthenticationDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 closeAllLockedNotesAction:(SEL)arg2 lockCurrentNoteAction:(SEL)arg3 enableBindingKeyPath:(id)arg4;

@end

