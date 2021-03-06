//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSView;

@protocol M5WindowContentAreaViewControlling <NSObject>
- (BOOL)canUserCloseContentView;
- (BOOL)canCloseContentView;

@optional
- (void)beginEditing:(unsigned long long)arg1;
- (BOOL)shouldUpdateFirstResponder;
- (NSView *)preferredInitialFirstResponder;
- (void)didResignContentViewController;
- (void)willResignContentViewController;
- (void)didBecomeContentViewController;
- (void)willBecomeContentViewController;
- (NSString *)closeContentViewMenuItemTitle;
- (void)closeContentView;
@end

