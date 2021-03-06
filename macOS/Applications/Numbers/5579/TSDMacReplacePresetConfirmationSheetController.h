//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSImageView, NSTextField, TSUImage;

@interface TSDMacReplacePresetConfirmationSheetController : NSWindowController
{
    TSUImage *mOldPresetSwatch;
    TSUImage *mNewPresetSwatch;
    NSImageView *mOldPresetSwatchView;
    NSImageView *mNewPresetSwatchView;
    BOOL mIsInCollaborationMode;
    unsigned long long mNumberOfObjectsUsingStyle;
    NSTextField *mNumberOfObjectsUsingStyleTextField;
    NSTextField *mAlwaysPreserveAppearanceRadioButtons;
    BOOL mAlwaysPreserveAppearance;
}

@property(nonatomic) BOOL alwaysPreserveAppearance; // @synthesize alwaysPreserveAppearance=mAlwaysPreserveAppearance;
@property(nonatomic) BOOL isInCollaborationMode; // @synthesize isInCollaborationMode=mIsInCollaborationMode;
@property(nonatomic) unsigned long long numberOfObjectsUsingStyle; // @synthesize numberOfObjectsUsingStyle=mNumberOfObjectsUsingStyle;
@property(retain, nonatomic) TSUImage *newPresetSwatch; // @synthesize newPresetSwatch=mNewPresetSwatch;
@property(retain, nonatomic) TSUImage *oldPresetSwatch; // @synthesize oldPresetSwatch=mOldPresetSwatch;
- (void)doReplace:(id)arg1;
- (void)cancelReplace:(id)arg1;
- (void)beginModalForWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) struct CGSize presetSwatchSize;
- (id)windowNibName;
- (void)dealloc;
- (id)init;

@end

