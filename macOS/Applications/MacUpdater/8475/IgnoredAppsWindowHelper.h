//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IgnoredAppScanDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class ITProgressIndicator, NSImage, NSMenu, NSMutableArray, NSString, NSTableView;

__attribute__((visibility("hidden")))
@interface IgnoredAppsWindowHelper : NSObject <NSTableViewDelegate, NSTableViewDataSource, IgnoredAppScanDelegate>
{
    int _isScanning;
    NSTableView *_tableView;
    NSImage *_scanArrowImage;
    NSMutableArray *_allIgnoredAppInfos;
    ITProgressIndicator *_animatedScanArrow;
    NSMenu *_contextMenu;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(nonatomic) __weak ITProgressIndicator *animatedScanArrow; // @synthesize animatedScanArrow=_animatedScanArrow;
@property(retain, nonatomic) NSMutableArray *allIgnoredAppInfos; // @synthesize allIgnoredAppInfos=_allIgnoredAppInfos;
@property(retain, nonatomic) NSImage *scanArrowImage; // @synthesize scanArrowImage=_scanArrowImage;
@property(nonatomic) int isScanning; // @synthesize isScanning=_isScanning;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void)removeAppFromIgnoreList:(id)arg1;
- (void)showInFinder:(id)arg1;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)scanDidFinish;
- (void)scanDidFoundApp:(id)arg1;
- (void)scanDidBegin;
- (void)scanArrowsChanged:(id)arg1;
- (void)scanAllIgnoredApps;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

