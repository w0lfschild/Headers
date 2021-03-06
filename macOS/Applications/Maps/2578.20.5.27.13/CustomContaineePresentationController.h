//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFormSheetPresentationController.h>

#import "_UISheetPresentationControllerDelegate-Protocol.h"

@class ContaineeViewController, ContainerViewController, NSString;

__attribute__((visibility("hidden")))
@interface CustomContaineePresentationController : _UIFormSheetPresentationController <_UISheetPresentationControllerDelegate>
{
    long long _presentationStyle;
    BOOL _containerContentShown;
    BOOL _containeeViewControllerConformsToCustomPresentationContaineeViewController;
    BOOL _containerViewControllerSupportsUpdateViewsForCustomPresentationTransition;
    BOOL _containerViewControllerSupportsUpdateViewsForCustomDismissalTransition;
    ContaineeViewController *_containeeViewController;
    ContainerViewController *_containerViewController;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL containerViewControllerSupportsUpdateViewsForCustomDismissalTransition; // @synthesize containerViewControllerSupportsUpdateViewsForCustomDismissalTransition=_containerViewControllerSupportsUpdateViewsForCustomDismissalTransition;
@property(nonatomic) BOOL containerViewControllerSupportsUpdateViewsForCustomPresentationTransition; // @synthesize containerViewControllerSupportsUpdateViewsForCustomPresentationTransition=_containerViewControllerSupportsUpdateViewsForCustomPresentationTransition;
@property(nonatomic) BOOL containeeViewControllerConformsToCustomPresentationContaineeViewController; // @synthesize containeeViewControllerConformsToCustomPresentationContaineeViewController=_containeeViewControllerConformsToCustomPresentationContaineeViewController;
@property(nonatomic) __weak ContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak ContaineeViewController *containeeViewController; // @synthesize containeeViewController=_containeeViewController;
- (void)dismissContaineeViewController;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (void)containerViewWillLayoutSubviews;
- (long long)adaptivePresentationStyleForTraitCollection:(id)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

