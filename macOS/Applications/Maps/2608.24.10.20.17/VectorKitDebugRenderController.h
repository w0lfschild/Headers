//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AuxiliaryDebugViewController.h"

@class NSMutableArray;
@protocol MapsDebugViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VectorKitDebugRenderController : AuxiliaryDebugViewController
{
    NSMutableArray *_debugFeatureSwitches;
    id <MapsDebugViewControllerDelegate> _delegate;
}

+ (id)navigationDestinationTitle;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)featureDisableSwitchChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;

@end

