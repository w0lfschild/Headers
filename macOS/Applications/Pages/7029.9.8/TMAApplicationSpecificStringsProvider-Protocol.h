//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSAApplicationSpecificStringsProvider-Protocol.h"

@class NSString;
@protocol TSKSharingService;

@protocol TMAApplicationSpecificStringsProvider <TSAApplicationSpecificStringsProvider>
@property(readonly, nonatomic) NSString *stringForExportDocumentWithUnmaterializedDataTitle;
@property(readonly, nonatomic) NSString *stringForFontReplacementWindowTitle;
@property(readonly, nonatomic) NSString *stringForMoveInlineToFloatingButtonToolTip;
@property(readonly, nonatomic) NSString *stringForMoveInlineToFloatingButtonTitle;
@property(readonly, nonatomic) NSString *stringForCollaborationOfflineDetailsMessage;
@property(readonly, nonatomic) NSString *stringForUserEditedOfflineDocumentAlertTitle;
@property(readonly, nonatomic) NSString *stringForUpdateRequiredForCollaborationTitleWithDisabledCollaboration;
@property(readonly, nonatomic) NSString *stringForUpdateRequiredForCollaborationMessageWithDisabledCollaboration;
@property(readonly, nonatomic) NSString *stringForUpdateRequiredForCollaborationMessageReadWrite;
@property(readonly, nonatomic) NSString *stringForUpdateRequiredForCollaborationMessageAllowingDisableCollaboration;
@property(readonly, nonatomic) NSString *stringForEmptySyncActivityExplanationiCloud;
@property(readonly, nonatomic) NSString *stringForSyncActivityWindowTitle;
@property(readonly, nonatomic) NSString *stringForSyncActivityNoItemsSyncingLabel;
@property(readonly, nonatomic) NSString *stringForReviewButtonWhenQuittingWithOfflineEdits;
@property(readonly, nonatomic) NSString *stringForOwnerHasCollabEnabledTitle;
@property(readonly, nonatomic) NSString *stringForConnectingSharedDocumentAlertMessage;
@property(readonly, nonatomic) NSString *stringForCollaborationOpenErrorRetryTitle;
@property(readonly, nonatomic) NSString *stringForCollaborationInvalidFileFormat;
@property(readonly, nonatomic) NSString *stringForCollaborationDocumentSizeTooLargeMessage;
@property(readonly, nonatomic) NSString *stringForCollaborationDocumentSizeTooLargeCollaboratorInformativeTextReadOnly;
@property(readonly, nonatomic) NSString *stringForCollaborationDocumentSizeTooLargeCollaboratorInformativeText;
@property(readonly, nonatomic) NSString *stringForCollaborationDocumentBlocklisted;
@property(readonly, nonatomic) NSString *stringForCollaborationDisabledBehaviorAlertTitle;
@property(readonly, nonatomic) NSString *stringForCollaborationDisabledBehaviorAlertMessage;
@property(readonly, nonatomic) NSString *stringForCollaborationAlreadyDisabledForGenericOfflineErrorMessage;
@property(readonly, nonatomic) NSString *stringForSharingMoveToiCloudAlertTitle;
@property(readonly, nonatomic) NSString *stringForSharingMoveToiCloudAlertMessage;
@property(readonly, nonatomic) NSString *stringForSharingLockedDocumentTitle;
@property(readonly, nonatomic) NSString *stringForSharingLockedDocumentMessage;
@property(readonly, nonatomic) NSString *stringForRemoveSelfAlertConfirmationTitle;
@property(readonly, nonatomic) NSString *stringForRemoveSelfAlertConfirmationMessage;
@property(readonly, nonatomic) NSString *sharedReadOnlyAlertMessage;
@property(readonly, nonatomic) NSString *stringForDocumentShareeVersionIncompatibleOnJoin;
@property(readonly, nonatomic) NSString *stringForDocumentShareeVersionIncompatible;
@property(readonly, nonatomic) NSString *sharedAlertMessage;
@property(readonly, nonatomic) NSString *recoveryErrorDescriptionForMovingWillStopSharing;
@property(readonly, nonatomic) NSString *stringForTouchIDPreferenceToolTip;
@property(readonly, nonatomic) NSString *stringForTouchIDLockoutMessage;
@property(readonly, nonatomic) NSString *stringForTouchIDLocalizedReason;
@property(readonly, nonatomic) NSString *stringForRememberPasswordWithTouchIDMessage;
@property(readonly, nonatomic) NSString *stringForPasswordChangedCloseButton;
@property(readonly, nonatomic) NSString *stringForPasswordChanged;
@property(readonly, nonatomic) NSString *stringForEnterPasswordMessage;
@property(readonly, nonatomic) NSString *stringForEnterPasswordGenerationStore;
@property(readonly, nonatomic) NSString *stringForDowngradeOnSaveAlertMessage;
@property(readonly, nonatomic) NSString *stringForDowngradeOnSaveAlertTitle;
@property(readonly, nonatomic) NSString *stringForDowngradeOnEditAlertMessage;
@property(readonly, nonatomic) NSString *stringForDowngradeOnEditAlertTitle;
@property(readonly, nonatomic) NSString *stringForWarningsInspectorTitleForNoWarnings;
@property(readonly, nonatomic) NSString *stringForWarningsInspectorTitleForNoDocument;
@property(readonly, nonatomic) NSString *stringForWarningsInspectorDisplayCheckboxTitle;
@property(readonly, nonatomic) NSString *stringForSageUpgradeAlertMessage;
@property(readonly, nonatomic) NSString *stringForSageUpgradeAlertTitle;
@property(readonly, nonatomic) NSString *stringForOpeningLockedDocumentMessage;
@property(readonly, nonatomic) NSString *stringForOpeningLockedDocumentTitle;
@property(readonly, nonatomic) NSString *stringForFileIsDamagedTryRestoringMessage;
@property(readonly, nonatomic) NSString *stringForFileIsDamagedReceivedFromSomeoneElseMessage;
@property(readonly, nonatomic) NSString *stringForFileCannotBeReadMessage;
@property(readonly, nonatomic) NSString *stringForFileCannotBeOpenedTryRestoringMessage;
@property(readonly, nonatomic) NSString *stringForDuplicateDocumentWithUnmaterializedDataTitle;
@property(readonly, nonatomic) NSString *stringForCloseDocumentConfirmationWillContinueToUpdateInformativeText;
@property(readonly, nonatomic) NSString *stringForCloseDocumentConfirmationAlertMessage;
@property(readonly, nonatomic) NSString *formatStringForDocumentInTheTrashTitle;
- (NSString *)stringForQuittingWithOfflineEditsAlertInformativeTextWithItemCount:(unsigned long long)arg1;
- (NSString *)stringForQuittingWithOfflineEditsAlertMessageText;
- (NSString *)stringForCollaborationOfflineDetailsMessageForSharingService:(id <TSKSharingService>)arg1;
- (NSString *)stringForUserEditedOfflineDocumentAlertMessageAllowingDisableCollaboration:(BOOL)arg1;
- (NSString *)stringForUserEditedConnectingSharedDocumentAlertTitleForSharingService:(id <TSKSharingService>)arg1;
- (NSString *)stringForUpdateRequiredForCollaborationMessageReadOnlyForSharingService:(id <TSKSharingService>)arg1;
- (NSString *)stringForInjectingCollaborationCacheIntoVersionsMessageBoxForSharingService:(id <TSKSharingService>)arg1;
- (NSString *)stringForGenericSharingConnectivityErrorTitleForSharingService:(id <TSKSharingService>)arg1;
- (NSString *)stringForGenericServerConnectivityErrorMessageAllowingDisableCollaboration:(BOOL)arg1;
- (NSString *)stringForCollaborationSageDocumentSizeTooLargeMessageWithLimit:(NSString *)arg1;
- (NSString *)stringForCollaborationSageDocumentSizeTooLargeInformativeTextWithSize:(NSString *)arg1;
- (NSString *)stringForCollaborationDocumentSizeTooLargeWithDisabledCollaborationInformativeTextWithLimit:(NSString *)arg1;
- (NSString *)stringForCollaborationDocumentSizeTooLargeSharedFolderInformativeTextWithLimit:(NSString *)arg1;
- (NSString *)stringForCollaborationDocumentSizeTooLargeSharedFolderCollaboratorViewOnlyInformativeTextWithLimit:(NSString *)arg1;
- (NSString *)stringForCollaborationDocumentSizeTooLargeMessageWithSize:(NSString *)arg1;
- (NSString *)stringForCollaborationDocumentNotFoundWithSharingService:(id <TSKSharingService>)arg1;
- (NSString *)sharedReadOnlyAlertTitleWithUserName:(NSString *)arg1;
- (NSString *)sharedAlertTitleWithUserName:(NSString *)arg1;
- (NSString *)stringForErrorSyncActivityForStatus:(unsigned long long)arg1;
- (NSString *)stringForInactiveSyncActivityForStatus:(unsigned long long)arg1;
- (NSString *)stringForActiveSyncActivityForStatus:(unsigned long long)arg1;
- (NSString *)stringForTouchIDPreferenceIsEnrolled:(BOOL)arg1;
- (NSString *)stringForWarningsInspectorTitleForDocumentSource:(unsigned long long)arg1;
- (NSString *)stringForWarningsInspectorSubitleForDocumentSource:(unsigned long long)arg1;
- (NSString *)stringForCloseDocumentConfirmationWillContinueToUpdateInformativeTextForSharingService:(id <TSKSharingService>)arg1;
@end

