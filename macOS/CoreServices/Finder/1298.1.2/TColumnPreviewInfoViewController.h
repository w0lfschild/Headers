//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBaseInfoWindowViewController.h"

@class NSStackView, TButton, TColumnPreviewPropertyTaggingTokenFieldController, TColumnPreviewSpotlightMetaDataController, TPreviewOptions, TPropertyColumnPreviewCreationDateController, TPropertyColumnPreviewLastOpenedDateController, TPropertyColumnPreviewModificationDateController, TPropertyICloudShareOwnerController, TPropertyShortVersionController;

@interface TColumnPreviewInfoViewController : TBaseInfoWindowViewController
{
    TPropertyICloudShareOwnerController *_iCloudShareOwnerController;
    TPropertyColumnPreviewCreationDateController *_createDateController;
    TPropertyColumnPreviewModificationDateController *_modDateController;
    TPropertyColumnPreviewLastOpenedDateController *_lastOpenedDateController;
    TPropertyShortVersionController *_versionController;
    TColumnPreviewSpotlightMetaDataController *_spotightMetaDataController;
    TColumnPreviewPropertyTaggingTokenFieldController *_taggingController;
    NSStackView *_stackView;
    TButton *_expandButton;
    struct TNSRef<TPreviewOptions, void> _previewOptions;
    _Bool _isRetargeting;
    struct TKeyValueObserver _activeOptionsObserver;
    struct TKeyValueObserver _filteredDeltaDidChange;
    struct TKeyValueObserver _arrangedMetadataViewDidChange;
    struct TriStateBool _wasCollapsedBeforeEditing;
    struct TKeyValueObserver _editingOptionsObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)expandToggle:(id)arg1;
- (id)addConstraintsToAvoidOverlapsInStackViewAnimations;
- (void)configureExpandingButton;
- (_Bool)canShowMoreOrLess;
- (long long)possibleHiddenAttributes;
- (void)updateExpandButtonState;
- (void)configureForEditing:(_Bool)arg1;
- (void)refresh;
- (void)targetNodesChanged;
- (void)targetNodesChanging;
- (void)optionsDidChangeEditMode;
- (void)userSelectedKeysDidChange;
@property(retain, nonatomic) TPreviewOptions *previewOptions; // @dynamic previewOptions;
- (void)updateFilters;
- (void)applyPreviewOptions;
- (void)configureMinRowCount:(double)arg1 maxRowCount:(double)arg2;
- (unsigned int)notificationOptionsForNodes:(const struct TFENodeVector *)arg1;
- (void)updateSeparatorsInStackViews;
@property(readonly, nonatomic) _Bool shouldBeVisible;
- (void)aboutToTearDown;
- (void)loadValueControllers;
- (void)viewLoaded;

@end

