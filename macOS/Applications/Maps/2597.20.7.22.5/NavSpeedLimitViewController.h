//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "LightLevelObserver-Protocol.h"

@class NSString, SpeedLimitView;
@protocol NavSpeedLimitViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface NavSpeedLimitViewController : UIViewController <LightLevelObserver>
{
    BOOL _hidden;
    id <NavSpeedLimitViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak id <NavSpeedLimitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)lightLevelController:(id)arg1 didUpdateLightLevel:(long long)arg2;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSpeedLimit:(unsigned long long)arg1 shieldType:(long long)arg2;
- (void)viewDidLoad;
@property(readonly, nonatomic) SpeedLimitView *speedLimitView;
- (void)loadView;
- (BOOL)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

