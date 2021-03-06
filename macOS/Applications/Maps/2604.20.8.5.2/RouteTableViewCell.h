//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RoutePickingCell.h"

@class MapsLargerHitTargetButton, NSLayoutAnchor, NSLayoutConstraint, Route, RouteTableViewCellButtonConstraintsController, _MKUILabel;
@protocol RouteTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface RouteTableViewCell : RoutePickingCell
{
    _MKUILabel *_primaryLabel;
    _MKUILabel *_secondaryLabel;
    NSLayoutConstraint *_leftPaddingConstraint;
    NSLayoutConstraint *_secondaryLabelToContentViewConstraint;
    NSLayoutConstraint *_primaryToTopViewConstraint;
    NSLayoutConstraint *_secondaryToPrimaryConstraint;
    NSLayoutConstraint *_secondaryLabelToBottomConstraint;
    BOOL _useRoutePreviewDescription;
    BOOL __maps_shouldHaveFullLengthBottomSeparator;
    BOOL _showDisclosureButton;
    Route *_route;
    MapsLargerHitTargetButton *_disclosureButton;
    RouteTableViewCellButtonConstraintsController *_buttonConstraintsController;
    id <RouteTableViewCellDelegate> _delegate;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (double)estimatedHeight;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <RouteTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) RouteTableViewCellButtonConstraintsController *buttonConstraintsController; // @synthesize buttonConstraintsController=_buttonConstraintsController;
@property(nonatomic) BOOL showDisclosureButton; // @synthesize showDisclosureButton=_showDisclosureButton;
@property(readonly, nonatomic) MapsLargerHitTargetButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(nonatomic) BOOL _maps_shouldHaveFullLengthBottomSeparator; // @synthesize _maps_shouldHaveFullLengthBottomSeparator=__maps_shouldHaveFullLengthBottomSeparator;
@property(nonatomic) BOOL useRoutePreviewDescription; // @synthesize useRoutePreviewDescription=_useRoutePreviewDescription;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
- (void)_disclosureButtonTapped:(id)arg1;
@property(readonly, nonatomic) RouteTableViewCellButtonConstraintsController *_buttonConstraintsController;
- (id)_disclosureButtonFont;
- (id)_disclosureButton;
- (void)setSeparatorInset:(struct UIEdgeInsets)arg1;
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1;
- (void)_updateCellLabels;
- (void)_updateFonts;
- (void)_localeDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
@property(readonly, nonatomic) double _distanceToPositionPrimaryLabelFirstBaseline;
@property(readonly, nonatomic) NSLayoutAnchor *_anchorFromWhichToPositionPrimaryLabelFirstBaseline;
- (void)_updateConstraintValues;
- (id)_autolayoutConstraints;
- (void)didMoveToWindow;
- (void)_createSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;

@end

