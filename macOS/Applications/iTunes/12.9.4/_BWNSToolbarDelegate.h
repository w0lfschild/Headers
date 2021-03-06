//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSToolbarDelegate-Protocol.h"

@class NSString;

@interface _BWNSToolbarDelegate : NSObject <NSToolbarDelegate>
{
    weak_ptr_e5ab5608 _owner;
}

@property(nonatomic) weak_ptr_e5ab5608 owner; // @synthesize owner=_owner;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (void)toolbarDidRemoveItem:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)setMinMaxForItem:(id)arg1 withConfig:(const struct ViewConfig *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

