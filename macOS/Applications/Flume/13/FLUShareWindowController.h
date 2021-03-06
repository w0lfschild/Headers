//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "FLUTextFieldDelegate.h"
#import "FLUUploadCarouselItemTableCellViewDelegate.h"
#import "NSTextViewDelegate.h"
#import "NSTouchBarDelegate.h"
#import "NSWindowDelegate.h"

@class AVURLAsset, FLUBlurView, FLUBorderView, FLUCaptionTextView, FLUHoverButton, FLUImageView, FLUMedia, FLUPlayerView, FLUPopover, FLUSharingOptionsViewController, FLUSmallTransparentButton, FLUTextFieldLabel, FLUView, ITProgressIndicator, NSString, NSTableView, NSTimer, NSView;

@interface FLUShareWindowController : NSWindowController <NSWindowDelegate, NSTextViewDelegate, FLUTextFieldDelegate, NSTouchBarDelegate, FLUUploadCarouselItemTableCellViewDelegate>
{
    BOOL _shareInProgress;
    BOOL _windowAnimationInProgress;
    BOOL _cancelInProgress;
    CDUnknownBlockType _completionBlock;
    FLUMedia *_media;
    unsigned long long _windowIndex;
    FLUSharingOptionsViewController *_sharingOptionsViewController;
    FLUBlurView *_blurView;
    FLUImageView *_imageView;
    FLUPlayerView *_playerView;
    AVURLAsset *_videoAsset;
    FLUCaptionTextView *_captionTextView;
    ITProgressIndicator *_progressIndicatorView;
    FLUSmallTransparentButton *_shareButton;
    FLUHoverButton *_mediaButton;
    NSView *_contentOptionsView;
    FLUHoverButton *_playButton;
    FLUHoverButton *_shareOptionsButton;
    FLUView *_containerView;
    FLUView *_curtainView;
    FLUBorderView *_titleBorderView;
    FLUBorderView *_topBorderView;
    FLUBorderView *_bottomBorderView;
    NSView *_titleBarView;
    FLUImageView *_logoImageView;
    NSView *_contentView;
    NSView *_detailsView;
    NSView *_actionsView;
    FLUView *_carouselView;
    FLUView *_carouselContentView;
    NSTableView *_carouselContentTableView;
    FLUBorderView *_carouselBorderView;
    FLUTextFieldLabel *_progressLabel;
    FLUPopover *_sharingPopover;
    NSTimer *_generalTimer;
}

@property(retain, nonatomic) NSTimer *generalTimer; // @synthesize generalTimer=_generalTimer;
@property(retain, nonatomic) FLUPopover *sharingPopover; // @synthesize sharingPopover=_sharingPopover;
@property(nonatomic) BOOL cancelInProgress; // @synthesize cancelInProgress=_cancelInProgress;
@property(nonatomic) BOOL windowAnimationInProgress; // @synthesize windowAnimationInProgress=_windowAnimationInProgress;
@property(nonatomic) BOOL shareInProgress; // @synthesize shareInProgress=_shareInProgress;
@property(nonatomic) __weak FLUTextFieldLabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) __weak FLUBorderView *carouselBorderView; // @synthesize carouselBorderView=_carouselBorderView;
@property(nonatomic) __weak NSTableView *carouselContentTableView; // @synthesize carouselContentTableView=_carouselContentTableView;
@property(nonatomic) __weak FLUView *carouselContentView; // @synthesize carouselContentView=_carouselContentView;
@property(nonatomic) __weak FLUView *carouselView; // @synthesize carouselView=_carouselView;
@property(nonatomic) __weak NSView *actionsView; // @synthesize actionsView=_actionsView;
@property(nonatomic) __weak NSView *detailsView; // @synthesize detailsView=_detailsView;
@property(nonatomic) __weak NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak FLUImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) __weak NSView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(nonatomic) __weak FLUBorderView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(nonatomic) __weak FLUBorderView *topBorderView; // @synthesize topBorderView=_topBorderView;
@property(nonatomic) __weak FLUBorderView *titleBorderView; // @synthesize titleBorderView=_titleBorderView;
@property(nonatomic) __weak FLUView *curtainView; // @synthesize curtainView=_curtainView;
@property(nonatomic) __weak FLUView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak FLUHoverButton *shareOptionsButton; // @synthesize shareOptionsButton=_shareOptionsButton;
@property(nonatomic) __weak FLUHoverButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak NSView *contentOptionsView; // @synthesize contentOptionsView=_contentOptionsView;
@property(nonatomic) __weak FLUHoverButton *mediaButton; // @synthesize mediaButton=_mediaButton;
@property(nonatomic) __weak FLUSmallTransparentButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) __weak ITProgressIndicator *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
@property(nonatomic) FLUCaptionTextView *captionTextView; // @synthesize captionTextView=_captionTextView;
@property(retain, nonatomic) AVURLAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(nonatomic) __weak FLUPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak FLUImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak FLUBlurView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) FLUSharingOptionsViewController *sharingOptionsViewController; // @synthesize sharingOptionsViewController=_sharingOptionsViewController;
@property(nonatomic) unsigned long long windowIndex; // @synthesize windowIndex=_windowIndex;
@property(retain, nonatomic) FLUMedia *media; // @synthesize media=_media;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (double)windowHeightForScreen:(id)arg1;
- (double)previewHeightForScreen:(id)arg1;
- (BOOL)stopVideoWithAnimation:(BOOL)arg1;
- (void)preparePlayerViewForPlayback;
- (void)preparePlayerViewForPause;
- (void)highlightEntitiesInText;
- (id)linkAttributes:(id)arg1;
- (id)usernameAttributes:(id)arg1 duplicate:(BOOL)arg2;
- (id)hashtagAttributes:(id)arg1 duplicate:(BOOL)arg2;
- (id)captionAttributes;
- (void)saveSharingOptions;
- (void)showSharingOptions;
- (void)updatePreviewForCarouselItem;
- (void)selectCarouselItemAtIndex:(unsigned long long)arg1;
- (void)reloadCarouselTableViewMaintainingSelection:(BOOL)arg1;
- (void)showCarouselView;
- (void)hideCurtainViewWithProgressIndicator:(BOOL)arg1;
- (void)showCurtainViewWithProgressIndicator:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showCurtainViewWithProgressIndicator:(BOOL)arg1;
- (void)refreshContentOptionsView;
- (void)updateWindowLevel;
- (void)showSharingOptionsWindow;
- (void)resizePreviewToHeight:(double)arg1;
- (void)updatePreviewImage:(id)arg1 video:(id)arg2 resizePreview:(BOOL)arg3;
- (void)refreshView;
- (BOOL)blockingOperationInProgress;
- (void)didPressShareButton:(id)arg1;
- (void)didPressPlayButton:(id)arg1;
- (void)didPressShareOptionsButton:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)flu_uploadCarouselItemTableCellViewSelectItem:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (long long)numberOfSections;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)flu_textViewTextDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)didPressTouchBarShareSendItem:(id)arg1;
- (void)didPressTouchBarShareOdnoklassnikiItem:(id)arg1;
- (void)didPressTouchBarShareVKontakteItem:(id)arg1;
- (void)didPressTouchBarShareMixiItem:(id)arg1;
- (void)didPressTouchBarShareAmebaItem:(id)arg1;
- (void)didPressTouchBarShareWeiboItem:(id)arg1;
- (void)didPressTouchBarShareSwarmItem:(id)arg1;
- (void)didPressTouchBarShareFlickrItem:(id)arg1;
- (void)didPressTouchBarShareTumblrItem:(id)arg1;
- (void)didPressTouchBarShareTwitterItem:(id)arg1;
- (void)didPressTouchBarShareFacebookItem:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)refreshTouchBar;
- (void)playerItemDidReachEnd:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)didToggleLinkedAccountSharingAccountNotification:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowLevelStatusWillChange:(id)arg1;
- (void)didChangeLanguage:(id)arg1;
- (void)didChangeCurrentLocale:(id)arg1;
- (void)updateFrames;
- (void)setupCarouselView;
- (void)setupAccessibility;
- (void)dealloc;
- (void)setupWindowController;
- (void)localizeUserInterface;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

