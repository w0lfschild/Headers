//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SmallModalDialogController.h"

#import "NSTextFieldDelegate-Protocol.h"

@class NSButton, NSMatrix, NSPopUpButton, NSString, NSTextField;

@interface RepeatObjectsController : SmallModalDialogController <NSTextFieldDelegate>
{
    NSTextField *numberOfCopiesLabel;
    NSTextField *numberOfCopies;
    NSPopUpButton *changeLengthMenu;
    NSTextField *adjustmentLabel;
    NSPopUpButton *adjustment;
    NSTextField *asLabel;
    NSMatrix *as;
    NSButton *okButton;
    struct TRepeatData *_data;
}

+ (id)nibName;
@property struct TRepeatData *data; // @synthesize data=_data;
- (void)click_OK:(id)arg1;
- (void)chooseLength:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)updateUI;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

