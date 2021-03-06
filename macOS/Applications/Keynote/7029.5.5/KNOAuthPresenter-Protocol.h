//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURLRequest;
@protocol KNOAuthPresenterDelegate;

@protocol KNOAuthPresenter <NSObject>
- (BOOL)delegateShouldSaveCurrentUserCredentialsInKeychain:(id <KNOAuthPresenterDelegate>)arg1;
- (void)endPresentingWithDelegate:(id <KNOAuthPresenterDelegate>)arg1;
- (void)beginPresentingWithDelegate:(id <KNOAuthPresenterDelegate>)arg1 initialURLRequest:(NSURLRequest *)arg2;
@end

