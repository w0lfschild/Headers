//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "InfoViewController.h"
#import "NSAnimationDelegate.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, NSTableView, NSTextField, WebSeedTableView;

@interface InfoPeersViewController : NSViewController <InfoViewController, NSAnimationDelegate>
{
    NSArray *fTorrents;
    BOOL fSet;
    NSMutableArray *fPeers;
    NSMutableArray *fWebSeeds;
    NSTableView *fPeerTable;
    WebSeedTableView *fWebSeedTable;
    NSTextField *fConnectedPeersField;
    double fViewTopMargin;
    NSLayoutConstraint *fWebSeedTableTopConstraint;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)clearView;
- (void)saveViewSize;
- (void)updateInfo;
- (void)setInfoForTorrents:(id)arg1;
- (void)awakeFromNib;
- (id)init;
- (id)peerSortDescriptors;
- (void)setWebSeedTableHidden:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setupInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

