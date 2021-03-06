//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImageView, NSTextField, NSURL;

@interface GarageBandDownloadDialogController : NSWindowController
{
    long long _windowMode;
    BOOL _cancelled;
    NSTextField *_progressTextField;
    NSButton *_fullDrummerCheckButton;
    NSURL *_documentURL;
    long long _returnValue;
    NSImageView *_imageView;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    NSButton *_okButton;
    NSButton *_cancelButton;
}

+ (BOOL)hasEnoughFreeDiskSpaceForMode:(long long)arg1 andDrummer:(BOOL)arg2;
+ (BOOL)packageIsPremiumPackage:(id)arg1;
+ (id)contentPackageIdsBase:(BOOL)arg1 drummer:(BOOL)arg2;
+ (id)contentPackageIDsForMode:(long long)arg1 excludeDrummer:(BOOL)arg2;
+ (long long)showPurchaseWindowWithMode:(long long)arg1;
- (void).cxx_destruct;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *okButton; // @synthesize okButton=_okButton;
@property __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property __weak NSImageView *imageView; // @synthesize imageView=_imageView;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(readonly) long long returnValue; // @synthesize returnValue=_returnValue;
@property(retain) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(readonly) NSButton *fullDrummerCheckButton; // @synthesize fullDrummerCheckButton=_fullDrummerCheckButton;
@property(readonly) NSTextField *progressTextField; // @synthesize progressTextField=_progressTextField;
- (void)updateContent;
- (void)continueToDownload;
- (void)okAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)_closeButtonAction:(id)arg1;
- (BOOL)_shouldOpenDialogForMode:(long long)arg1;
- (id)_okButtonTitleForMode:(long long)arg1;
- (id)_descriptionLabelForMode:(long long)arg1;
- (id)_titleLabelForMode:(long long)arg1;
- (void)_updateUIWithMode:(long long)arg1;
- (void)setEnableCancel:(BOOL)arg1;
- (void)awakeFromNib;
- (id)initWithWindowNibName:(id)arg1;

@end

