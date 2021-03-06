//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDInspectorSectionViewController.h"

#import "RDDroppableViewProtocol.h"

@class NSButton, NSImageView, NSSegmentedControl, NSString, NSTextField, RDAssetReference;

@interface RDBoxImageInspector : RDInspectorSectionViewController <RDDroppableViewProtocol>
{
    NSTextField *_filenameTextField;
    NSButton *_chooseImageButton;
    NSButton *_removeImageButton;
    NSImageView *_imageWellView;
    NSImageView *_imageView;
    NSTextField *_imageInfoLabel;
    NSButton *_revealButton;
    NSButton *_syncCheckbox;
    NSButton *_stretchCheckbox;
    NSSegmentedControl *_stretchSegmentedControl;
    NSSegmentedControl *_horizontalSegmentedControl;
    NSSegmentedControl *_verticalSegmentedControl;
    RDAssetReference *_lastImageRef;
}

@property(retain, nonatomic) RDAssetReference *lastImageRef; // @synthesize lastImageRef=_lastImageRef;
@property(nonatomic) __weak NSSegmentedControl *verticalSegmentedControl; // @synthesize verticalSegmentedControl=_verticalSegmentedControl;
@property(nonatomic) __weak NSSegmentedControl *horizontalSegmentedControl; // @synthesize horizontalSegmentedControl=_horizontalSegmentedControl;
@property(nonatomic) __weak NSSegmentedControl *stretchSegmentedControl; // @synthesize stretchSegmentedControl=_stretchSegmentedControl;
@property(nonatomic) __weak NSButton *stretchCheckbox; // @synthesize stretchCheckbox=_stretchCheckbox;
@property(nonatomic) __weak NSButton *syncCheckbox; // @synthesize syncCheckbox=_syncCheckbox;
@property(nonatomic) __weak NSButton *revealButton; // @synthesize revealButton=_revealButton;
@property(nonatomic) __weak NSTextField *imageInfoLabel; // @synthesize imageInfoLabel=_imageInfoLabel;
@property(nonatomic) __weak NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak NSImageView *imageWellView; // @synthesize imageWellView=_imageWellView;
@property(nonatomic) __weak NSButton *removeImageButton; // @synthesize removeImageButton=_removeImageButton;
@property(nonatomic) __weak NSButton *chooseImageButton; // @synthesize chooseImageButton=_chooseImageButton;
@property(nonatomic) __weak NSTextField *filenameTextField; // @synthesize filenameTextField=_filenameTextField;
- (void).cxx_destruct;
- (void)imagesDropped:(id)arg1 inView:(id)arg2;
- (void)loadImageAtPath:(id)arg1 withSettingsStore:(id)arg2;
- (void)handleImage:(id)arg1;
- (BOOL)validBookmarkWithSettingStore:(id)arg1;
- (BOOL)haveImage;
- (void)sectionSetupWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

