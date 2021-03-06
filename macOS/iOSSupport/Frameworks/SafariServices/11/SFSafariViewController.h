//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSURL, SFSafariViewControllerConfiguration, UIColor;
@protocol SFSafariViewControllerDelegate;

@interface SFSafariViewController : UIViewController
{
    NSURL *_url;
    SFSafariViewControllerConfiguration *_configuration;
    BOOL _hasAttemptedToOpenURL;
    id <SFSafariViewControllerDelegate> _delegate;
    UIColor *_preferredBarTintColor;
    UIColor *_preferredControlTintColor;
    long long _dismissButtonStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long dismissButtonStyle; // @synthesize dismissButtonStyle=_dismissButtonStyle;
@property(retain, nonatomic) UIColor *preferredControlTintColor; // @synthesize preferredControlTintColor=_preferredControlTintColor;
@property(retain, nonatomic) UIColor *preferredBarTintColor; // @synthesize preferredBarTintColor=_preferredBarTintColor;
@property(nonatomic) __weak id <SFSafariViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewIsAppearing:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
@property(readonly, copy, nonatomic) SFSafariViewControllerConfiguration *configuration;
- (id)initWithURL:(id)arg1 entersReaderIfAvailable:(BOOL)arg2;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;

@end

