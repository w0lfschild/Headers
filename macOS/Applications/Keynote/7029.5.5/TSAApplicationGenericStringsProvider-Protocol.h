//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol TSKSharingService;

@protocol TSAApplicationGenericStringsProvider <NSObject>
@property(readonly, nonatomic) NSString *stringForCollaborationPrivacyMessage;
@property(readonly, nonatomic) NSString *stringForViewUpdatedVersion;
@property(readonly, nonatomic) NSString *stringForServerErrorCollaboratorListTitle;
@property(readonly, nonatomic) NSString *stringForServerErrorCollaboratorListMessage;
@property(readonly, nonatomic) NSString *stringForSaveACopy;
@property(readonly, nonatomic) NSString *stringForOpenWebApp;
@property(readonly, nonatomic) NSString *stringForOK;
@property(readonly, nonatomic) NSString *stringForOfflineCollaboratorListTitle;
@property(readonly, nonatomic) NSString *stringForOfflineCollaboratorListMessage;
@property(readonly, nonatomic) NSString *stringForLaunchAppStore;
@property(readonly, nonatomic) NSString *stringForEditOfflineHUD;
@property(readonly, nonatomic) NSString *stringForDiscardEdits;
- (NSString *)stringForMediaNotFoundWithTypeClass:(long long)arg1;
- (NSString *)stringForCollaborationOptInTitleForSharingService:(id <TSKSharingService>)arg1;
- (NSString *)stringForCollaborationOptInLearnMoreHTMLForSharingService:(id <TSKSharingService>)arg1;
- (NSString *)stringForUpdatingDocumentForSharingService:(id <TSKSharingService>)arg1;
- (NSString *)stringForSyncActivityErrorForSharingService:(id <TSKSharingService>)arg1;
- (NSString *)stringForSyncActivitySyncingForSharingService:(id <TSKSharingService>)arg1;
- (NSString *)stringForFileProviderNotSyncingInfoForSharingService:(id <TSKSharingService>)arg1;
- (NSString *)stringForCollaborationStagingForSharingService:(id <TSKSharingService>)arg1;
- (NSString *)stringForCollaborationOfflinePlacardWithServerErrorCode:(unsigned long long)arg1 readOnlyUserPermissions:(BOOL)arg2;
- (NSString *)stringForUserActivityTitleForFilename:(NSString *)arg1;
@end

