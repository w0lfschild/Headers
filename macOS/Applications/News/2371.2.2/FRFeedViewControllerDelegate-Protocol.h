//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRFeedViewController, NSString, UIColor;

@protocol FRFeedViewControllerDelegate <NSObject>
- (void)feedViewController:(FRFeedViewController *)arg1 styleNavigationBarForTopOfFeedVisible:(BOOL)arg2 withTitleColor:(UIColor *)arg3;
- (void)feedViewController:(FRFeedViewController *)arg1 wantsToSetCustomNavBarMessage:(NSString *)arg2 animated:(BOOL)arg3;
@end

