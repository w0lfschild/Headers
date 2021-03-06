//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCUserNotification : NSObject
{
    struct __CFUserNotification *_cfUserNotification;
    struct __CFRunLoopSource *_source;
    NSObject<OS_dispatch_source> *_displaySource;
    unsigned long long _nextDisplayBeginTime;
    id _progressSubscriber;
    NSMutableDictionary *_dialogInfo;
}

- (void).cxx_destruct;
- (id)_localizationKey:(id)arg1 forOSAndDocumentKindOfApplication:(id)arg2;
- (id)_localizationKey:(id)arg1 forDocumentKindOfApplication:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateUndeterminedProgressCancelBlock:(CDUnknownBlockType)arg1;
- (void)showShareDownloadingProgressForDocument:(id)arg1 withUserCancelReplyBlock:(CDUnknownBlockType)arg2;
- (void)showShareDownloadingUndeterminedProgressWithUserCancelReplyBlock:(CDUnknownBlockType)arg1;
- (void)showShareOpenDialogForShareURL:(id)arg1 shareInfo:(id)arg2 userReplyBlock:(CDUnknownBlockType)arg3;
- (void)showShareConnectingUndeterminedProgressWithUserCancelReplyBlock:(CDUnknownBlockType)arg1;
- (void)showErrorItemIsNoLongerSharedForShareURL:(id)arg1 userReplyBlock:(CDUnknownBlockType)arg2;
- (void)showErroriCloudNotReachableForShareURL:(id)arg1 userReplyBlock:(CDUnknownBlockType)arg2;
- (void)showErrorDeviceOfflineForShareURL:(id)arg1 userReplyBlock:(CDUnknownBlockType)arg2;
- (void)showErrorSaveShareForShareURL:(id)arg1 userReplyBlock:(CDUnknownBlockType)arg2;
- (void)showErrorParticipantLimitReachedForShareURL:(id)arg1 userReplyBlock:(CDUnknownBlockType)arg2;
- (void)showErrorApplicationNotInstalledForShareURL:(id)arg1 userReplyBlock:(CDUnknownBlockType)arg2;
- (void)showErrorTurnOniCloudDriveForShareURL:(id)arg1 userReplyBlock:(CDUnknownBlockType)arg2;
- (void)showErrorSetupiCloudForShareURL:(id)arg1 userReplyBlock:(CDUnknownBlockType)arg2;
- (void)showErrorApplicationProfileDisabledForShareURL:(id)arg1 userReplyBlock:(CDUnknownBlockType)arg2;
- (void)showGenericErrorForURL:(id)arg1 userReplyBlock:(CDUnknownBlockType)arg2;
- (void)close;
- (id)_iCloudDriveIconURL;
- (void)_updateDialogWithType:(unsigned long long)arg1 dict:(id)arg2 userReplyBlock:(CDUnknownBlockType)arg3;
- (void)_updateDialogWithType:(unsigned long long)arg1 dict:(id)arg2;
- (void)_displayDialogWithType:(unsigned long long)arg1 dict:(id)arg2 options:(id)arg3 userReplyBlock:(CDUnknownBlockType)arg4;
- (void)_displayDialogWithType:(unsigned long long)arg1 dict:(id)arg2 userReplyBlock:(CDUnknownBlockType)arg3;
- (void)_hideCurrentDialog;
- (void)dealloc;
- (id)init;

@end

