//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUSelectableServiceGridViewController.h>

#import "HOOnboardingChildViewController-Protocol.h"

@class NSString;
@protocol HOOnboardingChildViewControllerDelegate, HOOnboardingChildViewControllerNavigationBarDelegate;

@interface HOOnboardingAccessoryPickerViewController : HUSelectableServiceGridViewController <HOOnboardingChildViewController>
{
    id <HOOnboardingChildViewControllerDelegate> delegate;
    id <HOOnboardingChildViewControllerNavigationBarDelegate> navigationBarDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HOOnboardingChildViewControllerNavigationBarDelegate> navigationBarDelegate; // @synthesize navigationBarDelegate;
@property(nonatomic) __weak id <HOOnboardingChildViewControllerDelegate> delegate; // @synthesize delegate;
- (id)_allServicesForItems:(id)arg1;
- (id)_updateFavoriteServices;
- (void)nextButtonPressed;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long pocketOptions;
@property(readonly, nonatomic) NSString *segmentIdentifier;
@property(readonly) Class superclass;

@end

