//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SmallDialogController.h"

@class MAKitButton, MATextField, SegmentedNumberScrubber;

@interface SEChangeGainController : SmallDialogController
{
    MAKitButton *m_searchMaximumButton;
    MATextField *m_maximumPercent;
    MATextField *m_maximumdB;
    SegmentedNumberScrubber *m_changeRelativePercent;
    SegmentedNumberScrubber *m_changeRelativedB;
    MATextField *m_resultsInAbsolutePercent;
    MATextField *m_resultsInAbsolutedB;
    MAKitButton *m_cancelButton;
    MAKitButton *m_changeButton;
    MATextField *m_clippedTextField;
}

+ (id)show;
+ (id)nibName;
- (void)ui_action:(id)arg1;
- (void)updateUI;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (void)openAction;
- (void)awakeFromNib;

@end

