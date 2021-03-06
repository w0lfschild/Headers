//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DisclosableInspectorTile.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class CLgView, GroupSettingsViewController, NSString;

@interface GroupInspectorTile : DisclosableInspectorTile <NSTableViewDataSource, NSTableViewDelegate>
{
    GroupSettingsViewController *vc;
    CLgView *_focussedView;
    double disclosedSettingsHeight;
}

- (void)draggedTo:(struct CGRect)arg1;
- (id)quickHelpID;
- (void)changeDisclose:(id)arg1;
- (void)_setTileView:(id)arg1;
- (void)handleUM_MIXGROUP:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFocussedView:(id)arg1;
- (void)updateExpandableViewHeight;
- (void)adjustFromDisclosureChange:(long long)arg1 draw:(BOOL)arg2;
- (void)setScreensetMask:(int)arg1 to:(BOOL)arg2;
- (BOOL)screensetMask:(int)arg1;
- (struct CSong *)song;
- (struct FENSTER *)focussedViewFenster;
- (void)cancelPendingDelayedSelectors;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

