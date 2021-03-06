//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SUWorkspaceViewController.h"

@class SUDiskUsageView, SUInfoTableView;

@interface SUDeviceWorkspaceViewController : SUWorkspaceViewController
{
    SUInfoTableView *_infoTable;
    SUDiskUsageView *_usageView;
    unsigned long long _diskTotalSpace;
}

- (void).cxx_destruct;
@property unsigned long long diskTotalSpace; // @synthesize diskTotalSpace=_diskTotalSpace;
@property __weak SUDiskUsageView *usageView; // @synthesize usageView=_usageView;
@property __weak SUInfoTableView *infoTable; // @synthesize infoTable=_infoTable;
- (void)diskChanged;
- (void)viewDidLoad;
- (void)_updateUsageView;
- (id)initWithDisk:(id)arg1;

@end

