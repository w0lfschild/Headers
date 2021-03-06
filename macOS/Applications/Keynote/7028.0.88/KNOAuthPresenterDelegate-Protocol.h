//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, NSURLRequest;
@protocol KNOAuthPresenter;

@protocol KNOAuthPresenterDelegate <NSObject>

@optional
- (void)presenter:(id <KNOAuthPresenter>)arg1 didFailWithError:(NSError *)arg2;
- (void)presenter:(id <KNOAuthPresenter>)arg1 didPresentTitle:(NSString *)arg2;
- (void)presenter:(id <KNOAuthPresenter>)arg1 willPresentURLRequest:(NSURLRequest *)arg2;
@end

