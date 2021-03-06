//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FRAppActivityObserving-Protocol.h"
#import "FROnboardingAnimationEngineDelegate-Protocol.h"
#import "FROnboardingExitAnimatorDelegate-Protocol.h"
#import "FROnboardingFirstAppearanceAnimatorDelegate-Protocol.h"
#import "FROnboardingScrollDriftAnimatorDelegate-Protocol.h"
#import "FROnboardingSubscribableItemCardCellAccessibilityInfoProvider-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FROnboardingAnimationEngine, FROnboardingLayout, FROnboardingSubscribableItemImageCache, FRSpinnerView, NSDate, NSHashTable, NSMapTable, NSMutableArray, NSString, UIActivityIndicatorView, UIScrollView, UIView;
@protocol FROnboardingCardViewControllerDelegate;

@interface FROnboardingCardViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, FROnboardingAnimationEngineDelegate, FROnboardingFirstAppearanceAnimatorDelegate, FROnboardingExitAnimatorDelegate, FROnboardingScrollDriftAnimatorDelegate, FROnboardingSubscribableItemCardCellAccessibilityInfoProvider, FRAppActivityObserving>
{
    struct multimap<float, FROnboardingSubscribableItem *, std::__1::less<float>, std::__1::allocator<std::__1::pair<const float, FROnboardingSubscribableItem *>>> yToSubscribableItems;
    BOOL _eventRecordingDisabled;
    BOOL _initialLayoutMode;
    long long _currentState;
    id <FROnboardingCardViewControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    double _topMargin;
    double _distanceOfLastScrollMoment;
    FROnboardingAnimationEngine *_animationEngine;
    FROnboardingLayout *_currentLayout;
    NSMutableArray *_subscribableItems;
    NSHashTable *_selectedItems;
    struct CGColor *_currentSystemBackgroundColor;
    NSMapTable *_subscribableItemsToOnScreenCells;
    NSMutableArray *_cellReuseQueue;
    FROnboardingSubscribableItemImageCache *_imageCache;
    NSDate *_lastTimeBumpedIntoBottomOfScrollView;
    UIActivityIndicatorView *_spinner;
    UIView *_spinnerBackground;
    FRSpinnerView *_spinnerView;
    struct CGPoint _lastContentOffsetOnScroll;
}

@property(retain, nonatomic) FRSpinnerView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) UIView *spinnerBackground; // @synthesize spinnerBackground=_spinnerBackground;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) BOOL initialLayoutMode; // @synthesize initialLayoutMode=_initialLayoutMode;
@property(retain, nonatomic) NSDate *lastTimeBumpedIntoBottomOfScrollView; // @synthesize lastTimeBumpedIntoBottomOfScrollView=_lastTimeBumpedIntoBottomOfScrollView;
@property(retain, nonatomic) FROnboardingSubscribableItemImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableArray *cellReuseQueue; // @synthesize cellReuseQueue=_cellReuseQueue;
@property(retain, nonatomic) NSMapTable *subscribableItemsToOnScreenCells; // @synthesize subscribableItemsToOnScreenCells=_subscribableItemsToOnScreenCells;
@property(nonatomic) struct CGColor *currentSystemBackgroundColor; // @synthesize currentSystemBackgroundColor=_currentSystemBackgroundColor;
@property(retain, nonatomic) NSHashTable *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(retain, nonatomic) NSMutableArray *subscribableItems; // @synthesize subscribableItems=_subscribableItems;
@property(retain, nonatomic) FROnboardingLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(retain, nonatomic) FROnboardingAnimationEngine *animationEngine; // @synthesize animationEngine=_animationEngine;
@property(nonatomic) double distanceOfLastScrollMoment; // @synthesize distanceOfLastScrollMoment=_distanceOfLastScrollMoment;
@property(nonatomic) struct CGPoint lastContentOffsetOnScroll; // @synthesize lastContentOffsetOnScroll=_lastContentOffsetOnScroll;
@property(nonatomic) BOOL eventRecordingDisabled; // @synthesize eventRecordingDisabled=_eventRecordingDisabled;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <FROnboardingCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGPoint)_contentOffsetForNewFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2 newContentSize:(struct CGSize)arg3 andOldContentSize:(struct CGSize)arg4;
- (void)_setBlurred:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)_updateScrollViewContentSizeWithWidth:(double)arg1;
- (void)_updateScrollViewContentSize;
- (void)_enqueueCell:(id)arg1;
- (id)_dequeueCell;
- (void)_sendFeedCellExposureEventWithCell:(id)arg1 subscribableItem:(id)arg2;
- (void)_setUpCell:(id)arg1 forItem:(id)arg2;
- (void)cancelCacheOperations;
- (void)prewarmCacheForItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clearOnScreenCells;
- (void)_updateVisibleCellsInRect:(struct CGRect)arg1;
- (void)_updateVisibleCellsForSize:(struct CGSize)arg1;
- (void)_updateVisibleCells;
- (id)_cellContainingPoint:(struct CGPoint)arg1;
- (id)_itemContainingPoint:(struct CGPoint)arg1;
- (void)enumerateItemsInRect:(struct CGRect)arg1 enumerator:(CDUnknownBlockType)arg2;
- (unsigned long long)accessibilityIndexOfSubscribableCardCell:(id)arg1;
- (unsigned long long)accessibilityTotalNumberOfSubscribableCardCells;
- (CDStruct_c3b9c2ee)scrollDriftAnimatorDataForItem:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)checkIfCloseToBottomRespectingTimer:(BOOL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)animationEngineDidFinishAnimationSession:(id)arg1;
- (void)animationEngineDidTick:(id)arg1;
- (void)_beginZoomingOutCardsMode;
- (void)_showNewCellsWithAnimationIfNeeded;
- (void)_showResultsForFirstSelection;
- (void)_readyForFirstSelectionState;
- (void)_isRunningFirstAppearAnimationState;
- (void)sendFeedCellExposureAnlayticsEventForAlreadySetUpCells;
- (struct CGPoint)exitAnimatorWantsAnchorPoint:(id)arg1;
- (struct CGPoint)firstAppearanceAnimatorWantsAnchorPoint:(id)arg1;
- (struct CGPoint)firstAppearanceAnchorPointForCurrentLayout;
- (void)transitionToState:(long long)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_selectItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_cellAlreadyHasSelectionAnimatorRunning:(id)arg1;
- (id)_selectionAnimatorForCell:(id)arg1;
- (void)_undimpleCell:(id)arg1;
- (void)_dimpleCell:(id)arg1 quickPress:(BOOL)arg2;
- (void)_dimpleCell:(id)arg1;
- (void)selectionGestureFired:(id)arg1;
- (void)_setLayout:(id)arg1 clearCells:(BOOL)arg2;
- (id)_layoutForGivenSize:(struct CGSize)arg1;
@property(readonly, nonatomic) long long numberOfRowsForInitialLayout;
@property(readonly, nonatomic) long long numberOfColumnsPermitted;
@property(readonly, nonatomic) struct CGSize cardSize;
- (long long)selectionCount;
- (BOOL)itemIsSelected:(id)arg1;
- (void)setItem:(id)arg1 selected:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_addItems:(id)arg1 withPreselectedItems:(id)arg2;
- (void)unlockAdditonalCards;
- (void)addItems:(id)arg1 withPreselectedItems:(id)arg2;
- (id)itemVisibleAtPoint:(struct CGPoint)arg1;
- (void)setBlurred:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)setBlurred:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBlurred:(BOOL)arg1;
- (void)setBottomSpinnerHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSpinnerHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutorotate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)recordExposureEventWithStartDate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

