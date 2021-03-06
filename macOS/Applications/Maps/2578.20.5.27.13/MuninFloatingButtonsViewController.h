//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class HairlineView, NSLayoutConstraint, UIButton, UIColor, UIVisualEffectView;
@protocol MuninFloatingButtonsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MuninFloatingButtonsViewController : UIViewController
{
    BOOL _alternateButtonEnabled;
    BOOL _groupButtonsIfNeeded;
    BOOL _showsMinimizedButton;
    UIVisualEffectView *_alternateButtonBackgroundView;
    NSLayoutConstraint *_alternateButtonLeadingConstraintGrouped;
    NSLayoutConstraint *_alternateButtonLeadingConstraintSeparated;
    UIButton *_alternateButton;
    HairlineView *_separator;
    UIVisualEffectView *_doneButtonBackgroundView;
    NSLayoutConstraint *_doneButtonLeadingContraintGrouped;
    NSLayoutConstraint *_doneButtonLeadingContraintSeparated;
    UIButton *_doneButton;
    UIColor *_highlightedButtonBackgroundViewColor;
    UIButton *_menuButton;
    NSLayoutConstraint *_menuButtonVisibleConstraint;
    NSLayoutConstraint *_menuButtonHiddenConstraint;
    BOOL _hidingLabels;
    id <MuninFloatingButtonsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hidingLabels; // @synthesize hidingLabels=_hidingLabels;
@property(nonatomic) BOOL showsMinimizedButton; // @synthesize showsMinimizedButton=_showsMinimizedButton;
@property(nonatomic) __weak id <MuninFloatingButtonsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapDoneButton:(id)arg1;
- (void)didTapButton:(id)arg1;
- (void)_updateButtonLayoutToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 animated:(BOOL)arg3;
- (void)_setCornerRadii;
- (void)_updateButtonLayoutToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updateButtonLayoutAnimated:(BOOL)arg1;
- (void)_setupConstraints;
- (id)optionsMenu;
- (void)_setupViews;
- (void)updateTheme;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setMinimizedButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isMinimizedButtonEnabled) BOOL minimizedButtonEnabled;
- (void)setMaximizedButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isMaximizedButtonEnabled) BOOL maximizedButtonEnabled;
- (void)_setAlternateButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setAlternateButtonEnabled:(BOOL)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithShowsMinimizeButton:(BOOL)arg1 groupButtonsIfNeeded:(BOOL)arg2;
- (BOOL)_canShowWhileLocked;

@end

