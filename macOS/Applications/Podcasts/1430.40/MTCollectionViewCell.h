//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIScrollViewDelegate-Protocol.h"

@class MTActionButtonContainerView, MTCollectionView, MTUIFocusedTouchGestureRecognizer, NSString, UIButton, UIImageView, UIScrollView, UITapGestureRecognizer, UIView;
@protocol MTCollectionViewCellDelegate;

@interface MTCollectionViewCell : UICollectionViewCell <UIScrollViewDelegate>
{
    UIView *_contentView;
    UIScrollView *_scrollView;
    UIImageView *_editingControl;
    BOOL _editing;
    BOOL _userSwiping;
    BOOL _showsMoreButton;
    id <MTCollectionViewCellDelegate> _delegate;
    unsigned long long _swipeState;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MTUIFocusedTouchGestureRecognizer *_dismissOnTouchRecognizer;
    MTActionButtonContainerView *_actionButtonsContainer;
    UIButton *_deleteButton;
    UIButton *_moreButton;
}

+ (id)_multiSelectNotSelectedImage;
+ (id)_multiSelectCheckmarkImage;
+ (Class)_contentViewClass;
+ (double)maximumContentWidth;
+ (double)estimatedHeight;
- (void).cxx_destruct;
@property(nonatomic) BOOL showsMoreButton; // @synthesize showsMoreButton=_showsMoreButton;
@property(nonatomic) BOOL userSwiping; // @synthesize userSwiping=_userSwiping;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MTActionButtonContainerView *actionButtonsContainer; // @synthesize actionButtonsContainer=_actionButtonsContainer;
@property(retain, nonatomic) MTUIFocusedTouchGestureRecognizer *dismissOnTouchRecognizer; // @synthesize dismissOnTouchRecognizer=_dismissOnTouchRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) unsigned long long swipeState; // @synthesize swipeState=_swipeState;
@property(nonatomic) __weak id <MTCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
- (double)defaultActionButtonsXOriginForScrollFrame:(struct CGRect)arg1 andActionContainerSize:(struct CGSize)arg2;
- (void)scrollViewExposedDelete;
- (void)scrollViewHidDelete;
- (double)targetXOffsetForExposedActions;
- (void)hideActionsAnimated:(BOOL)arg1;
- (void)exposeActionsAnimated:(BOOL)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeDismissRecognizer;
- (void)addDismissRecognizer;
- (void)dismissDelete:(id)arg1;
- (void)setOpen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)moreButtonTapCancelled:(id)arg1;
- (void)moreButtonTapped:(id)arg1;
- (void)deleteButtonTapped:(id)arg1;
- (id)mt_collectionView;
@property(readonly, nonatomic) MTCollectionView *collectionView;
- (id)contentView;
- (id)scrollView;
- (void)layoutSubviews;
- (struct CGRect)editingControlRectInBounds:(struct CGRect)arg1;
- (struct CGRect)contentRectForEditControlWidth:(double)arg1;
@property(readonly, nonatomic) BOOL exposedActions;
@property(nonatomic, getter=isSwipeEnabled) BOOL swipeEnabled;
- (void)setSelected:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)configureSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

