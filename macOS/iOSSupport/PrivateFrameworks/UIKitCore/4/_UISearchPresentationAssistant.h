//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDimmingViewDelegate-Protocol.h>

@class UIDimmingView, UIPresentationController, UIView;
@protocol UIViewControllerTransitionCoordinator, _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate>
{
    UIPresentationController *_searchPresentationController;
    UIView *_searchBarContainerView;
    UIDimmingView *_dimmingView;
    BOOL _isFormSheetPresentation;
    BOOL _presentationWasAnimated;
    UIPresentationController<_UISearchControllerPresenting> *_adaptivePresentationController;
    id <UIViewControllerTransitionCoordinator> _transitioningToSizeCoordinator;
}

@property(retain, nonatomic) id <UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator; // @synthesize transitioningToSizeCoordinator=_transitioningToSizeCoordinator;
@property(nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController; // @synthesize adaptivePresentationController=_adaptivePresentationController;
@property(nonatomic) BOOL presentationWasAnimated; // @synthesize presentationWasAnimated=_presentationWasAnimated;
- (void)dimmingViewWasTapped:(id)arg1;
- (BOOL)searchBarWillResizeForScopeBar;
- (double)resultsControllerContentOffset;
- (BOOL)searchBarToBecomeTopAttached;
- (id)locateNavigationController;
- (BOOL)shouldAccountForStatusBar;
- (double)statusBarAdjustment;
- (BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(long long)arg1;
- (BOOL)_statusBarPreferredHidden;
- (id)dimmingView;
- (struct CGSize)updateSearchBarContainerFrame;
- (double)_statusBarHeightChangeDueToRotation;
- (BOOL)_currentTransitionIsRotating;
- (void)removeContainerViewFromSuperview;
- (id)searchBarContainerView;
- (id)_searchBarContainerSuperview;
- (struct CGRect)_containerFrame;
- (void)ensureAppropriatelySizedSearchBar:(id)arg1;
- (struct CGRect)optimalFrameForSearchBar:(id)arg1;
- (BOOL)presentationIsPopoverToOverFullScreenAdaptation;
- (id)_searchControllerPresenting;
- (void)dealloc;
- (id)initWithSearchPresentationController:(id)arg1;

@end

