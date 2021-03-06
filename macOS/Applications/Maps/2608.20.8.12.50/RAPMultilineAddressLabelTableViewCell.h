//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSString, RAPAddressLayoutOptions, RAPSeparatorBar, TextViewWithPlaceholderText, UITableView, UITapGestureRecognizer, UITextField, UIView;
@protocol RAPAddressDelegate;

__attribute__((visibility("hidden")))
@interface RAPMultilineAddressLabelTableViewCell : UITableViewCell <UITextViewDelegate>
{
    TextViewWithPlaceholderText *_freeformAddressTextView;
    UITextField *_floorTextField;
    UITextField *_unitTextField;
    UITextField *_buildingTextField;
    RAPSeparatorBar *_topHorizontalHairlineView;
    RAPSeparatorBar *_middleVerticalHairlineView;
    RAPSeparatorBar *_bottomHorizontalHairlineView;
    NSMutableArray *_constraints;
    NSMutableArray *_topToFirstBaselineConstraints;
    NSMutableArray *_lastBaselineToBottomConstraints;
    NSLayoutConstraint *_freeformTopConstraint;
    NSLayoutConstraint *_freeformBottomConstraint;
    NSMutableArray *_detailViews;
    UITapGestureRecognizer *_freeformGestureRecognizer;
    UIView *_containerView;
    BOOL _canEditFreeformAddress;
    BOOL _editableAndTappable;
    int _analyticTarget;
    RAPAddressLayoutOptions *_layoutOptions;
    id <RAPAddressDelegate> _delegate;
    NSString *_freeformAddress;
    UITableView *_parentTableView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UITableView *parentTableView; // @synthesize parentTableView=_parentTableView;
@property(nonatomic, getter=isEditableAndTappable) BOOL editableAndTappable; // @synthesize editableAndTappable=_editableAndTappable;
@property(nonatomic) BOOL canEditFreeformAddress; // @synthesize canEditFreeformAddress=_canEditFreeformAddress;
@property(copy, nonatomic) NSString *freeformAddress; // @synthesize freeformAddress=_freeformAddress;
@property(nonatomic) __weak id <RAPAddressDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) RAPAddressLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(nonatomic) int analyticTarget; // @synthesize analyticTarget=_analyticTarget;
- (void)_recalculateConstraints;
- (void)_updateFonts;
- (void)_contentSizeDidChange;
- (void)_clearSubviews;
- (void)_updateViews;
- (void)_addressChanged;
- (void)_updateFreeformCellHeightIfNeeded;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)_scrollTextViewSelectedRangeVisible:(id)arg1;
- (void)_freeformAddressFieldTapped:(id)arg1;
- (void)_updateConstraints;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

