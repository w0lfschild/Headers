//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class ContaineeViewController, ContainerViewController, NSArray, NSString;
@protocol MacPopoverPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface MacPopoverPresentationController : NSObject <UIPopoverPresentationControllerDelegate>
{
    BOOL _isPresented;
    BOOL _isDismissing;
    ContaineeViewController *_containeeViewController;
    ContainerViewController *_containerViewController;
    id <MacPopoverPresentationControllerDelegate> _delegate;
    struct CLLocationCoordinate2D _coordinate;
    struct CGSize _preferredContentSize;
    struct CGRect _anchorRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isDismissing; // @synthesize isDismissing=_isDismissing;
@property(readonly, nonatomic) BOOL isPresented; // @synthesize isPresented=_isPresented;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(nonatomic) struct CGRect anchorRect; // @synthesize anchorRect=_anchorRect;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) __weak id <MacPopoverPresentationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak ContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(readonly, nonatomic) __weak ContaineeViewController *containeeViewController; // @synthesize containeeViewController=_containeeViewController;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;
- (void)configurePopoverSize;
- (void)configurePopoverPosition;
- (BOOL)_isCoordinateVisibleInContainerViewController:(id)arg1;
- (void)_didDismiss;
- (void)_willDismiss;
- (void)dismissAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentFromContainerViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSArray *passthroughViews;
- (id)initWithContaineeViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

