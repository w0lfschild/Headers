//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SmallDocumentDialogController.h"

@class CLgUnilibSubView, CrossView, MAKitBox, MAKitButton, MAKitPopUpButton, MAKitSegmentedScrubber, MAKitTabView, MATextField, MapView, NSPopUpButton, NSTextField;

@interface TransformerController : SmallDocumentDialogController
{
    MAKitTabView *tabView;
    MAKitSegmentedScrubber *sysexLength;
    MAKitPopUpButton *checksum;
    MAKitBox *sysexNSView;
    MAKitButton *filterNonMatching;
    MAKitButton *filterDuplicateEvents;
    MAKitPopUpButton *transformMode;
    MAKitPopUpButton *selectStatus;
    MAKitPopUpButton *selectStatus1;
    MAKitPopUpButton *selectChannel;
    MAKitSegmentedScrubber *selectChannel1;
    MAKitSegmentedScrubber *selectChannel2;
    MAKitPopUpButton *selectByte1;
    MAKitSegmentedScrubber *selectByte1_1;
    MAKitSegmentedScrubber *selectByte1_2;
    MAKitPopUpButton *selectByte2;
    MAKitSegmentedScrubber *selectByte2_1;
    MAKitSegmentedScrubber *selectByte2_2;
    CrossView *crossView;
    MapView *mapView;
    NSTextField *textByte1;
    NSTextField *textByte2;
    MAKitPopUpButton *operationStatus;
    MAKitPopUpButton *operationStatus1;
    MAKitPopUpButton *operationChannel;
    MAKitSegmentedScrubber *operationChannel1;
    MAKitSegmentedScrubber *operationChannel2;
    MAKitPopUpButton *operationByte1;
    MAKitSegmentedScrubber *operationByte1_1;
    MAKitSegmentedScrubber *operationByte1_2;
    MAKitPopUpButton *operationByte2;
    MAKitSegmentedScrubber *operationByte2_1;
    MAKitSegmentedScrubber *operationByte2_2;
    MAKitBox *mMapBox;
    MAKitSegmentedScrubber *mappedValue;
    MATextField *mMappedToText;
    MAKitSegmentedScrubber *mappedTo;
    MAKitButton *mInitializeMap;
    MAKitButton *mReverseMap;
    MAKitButton *mInvertMap;
    MAKitButton *mSmoothMap;
    NSPopUpButton *mNoteScaleInitializationForMap;
    MATextField *universalMapText;
    CLgUnilibSubView *uniView;
    int mInstID;
    struct tColumn mColumns[7];
    struct CGRect mOrigFrame;
}

+ (id)show:(id)arg1 withTransform:(int)arg2;
+ (id)nibName;
- (void)transformModeChanged:(id)arg1;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)sysexAction:(id)arg1;
- (void)mapAction:(id)arg1;
- (BOOL)editableMapShown;
- (void)updateUI;
- (void)setMinAndMaxValuesForOperationFields;
- (void)changeValue:(id)arg1;
- (void)flipChange:(id)arg1;
- (struct CInstTransformer *)transInst;
- (int)transInstID;
- (void)makeColumns:(struct CInstTransformer *)arg1;
- (void)setMappedValue:(BOOL)arg1 mappedTo:(BOOL)arg2;
- (void)initUniView;
- (void)awakeFromNib;
- (id)windowTitle;
- (id)windowRightTitle;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)willBecomeVisible;
- (void)handleUM_BLINK:(id)arg1;
- (void)tf_mapChanged;
- (unsigned short)parentViewClass;

@end

