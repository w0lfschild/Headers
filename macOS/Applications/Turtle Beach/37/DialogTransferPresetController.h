//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AppPopupMenuDelegate.h"
#import "DialogViewContentController.h"

@class AppPopupButton, DeviceAsset, DeviceAssetGroup, NSButton, NSMutableArray, NSObject, NSString, NSTextField;

@interface DialogTransferPresetController : NSViewController <DialogViewContentController, AppPopupMenuDelegate>
{
    NSString *returnAction;
    NSString *cancelAction;
    NSObject *returnActionContent;
    NSMutableArray *groupsArray;
    NSMutableArray *assetsArray;
    DeviceAsset *selectedAsset;
    DeviceAssetGroup *selectedGroup;
    AppPopupButton *cbAssets;
    AppPopupButton *cbGroups;
    NSTextField *_dialogTitle;
    NSButton *_btnYes;
    NSButton *_btnNo;
}

- (void).cxx_destruct;
@property NSButton *btnNo; // @synthesize btnNo=_btnNo;
@property NSButton *btnYes; // @synthesize btnYes=_btnYes;
@property NSTextField *dialogTitle; // @synthesize dialogTitle=_dialogTitle;
@property AppPopupButton *cbGroups; // @synthesize cbGroups;
@property AppPopupButton *cbAssets; // @synthesize cbAssets;
- (void)popupMenuSelected:(long long)arg1 andPopupButton:(id)arg2;
@property(retain) DeviceAssetGroup *selectedGroup; // @synthesize selectedGroup;
@property(retain) DeviceAsset *selectedAsset; // @synthesize selectedAsset;
@property(retain) NSMutableArray *assetsArray; // @synthesize assetsArray;
- (void)removeObjectFromAssetsArrayAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inAssetsArrayAtIndex:(unsigned long long)arg2;
@property(retain) NSMutableArray *groupsArray; // @synthesize groupsArray;
- (void)removeObjectFromGroupsArrayAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inGroupsArrayAtIndex:(unsigned long long)arg2;
- (void)yesButtonPressed:(id)arg1;
- (void)noButtonPressed:(id)arg1;
- (void)setButtonsAreEnabled:(BOOL)arg1;
- (void)syncGroupToAssets;
- (void)setMessage:(id)arg1;
- (void)configPopupMenu;
- (void)setColorView;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

