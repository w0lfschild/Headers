//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXPhotoCaptionCell.h"

#import "IPXPhotoPickerCellSelectionProtocol-Protocol.h"

@class NSButton, NSString;

__attribute__((visibility("hidden")))
@interface IPXPhotoPickerCaptionCell : IPXPhotoCaptionCell <IPXPhotoPickerCellSelectionProtocol>
{
    BOOL _isPreselected;
    BOOL _isSelectable;
    NSButton *_checkmarkButton;
}

- (void).cxx_destruct;
@property __weak NSButton *checkmarkButton; // @synthesize checkmarkButton=_checkmarkButton;
- (id)accessibilityValueDescription;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (void)setAccessibilitySelected:(BOOL)arg1;
- (id)newModalSelectionIndicatorView;
- (BOOL)isSelectable;
- (BOOL)isPreselected;
- (void)setSelectable:(BOOL)arg1 andPreselected:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

