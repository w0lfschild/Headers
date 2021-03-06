//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlaceCardActionButtonControlling-Protocol.h"
#import "PlaceCardActionButtonControllingDelegate-Protocol.h"

@class MKMapItem, NSMapTable, NSMutableArray, NSString, UIViewController;
@protocol PlaceCardActionButtonControlling, PlaceCardActionButtonControllingDelegate;

__attribute__((visibility("hidden")))
@interface PlaceCardSecondaryActionButtonController : NSObject <PlaceCardActionButtonControllingDelegate, PlaceCardActionButtonControlling>
{
    id <PlaceCardActionButtonControllingDelegate> _delegate;
    NSMutableArray *_discoveredButtonControllers;
    NSMapTable *_actionButtonModelsByControllers;
    id <PlaceCardActionButtonControlling> _buttonController;
    MKMapItem *_mapItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) id <PlaceCardActionButtonControlling> buttonController; // @synthesize buttonController=_buttonController;
@property(retain, nonatomic) NSMapTable *actionButtonModelsByControllers; // @synthesize actionButtonModelsByControllers=_actionButtonModelsByControllers;
@property(retain, nonatomic) NSMutableArray *discoveredButtonControllers; // @synthesize discoveredButtonControllers=_discoveredButtonControllers;
@property(nonatomic) __weak id <PlaceCardActionButtonControllingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appStoreAppSelected:(id)arg1;
- (void)presentExtensionFlowController:(id)arg1;
- (void)_updateActionButtonWithApplicableModel;
- (void)updateActionButtonWithModel:(id)arg1;
- (void)presentSecondaryActionIfPossible;
@property(copy, nonatomic) CDUnknownBlockType analyticsBlockForPresentingSecondaryAction;
@property(readonly, nonatomic) int analyticActionForPresentingSecondaryAction;
@property(readonly, nonatomic) UIViewController *controllerForSecondaryAction;
- (void)extensionContentDidChange;
- (id)initWithMapItem:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

