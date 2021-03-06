//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "FBACorrespondingViewController-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegatePrivate-Protocol.h"

@class FBABugForm, FBAWKWebView, NSAttributedString, NSDate, NSImage, NSLayoutConstraint, NSNumber, NSString;

@interface FBASurveyAnnouncementViewController : NSViewController <WKUIDelegatePrivate, WKNavigationDelegate, FBACorrespondingViewController>
{
    NSString *_announcementTemplate;
    BOOL _observingSuperview;
    FBAWKWebView *_webView;
    NSLayoutConstraint *_webViewHeightConstraint;
}

+ (id)keyPathsForValuesAffectingCorrespondenceUnread;
+ (id)keyPathsForValuesAffectingCorrespondenceTime;
+ (id)keyPathsForValuesAffectingCorrespondenceTitle;
+ (id)keyPathsForValuesAffectingRepresentedSurvey;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSLayoutConstraint *webViewHeightConstraint; // @synthesize webViewHeightConstraint=_webViewHeightConstraint;
@property(retain) FBAWKWebView *webView; // @synthesize webView=_webView;
- (void)_webView:(id)arg1 getContextMenuFromProposedMenu:(id)arg2 forElement:(id)arg3 userInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)updateWebViewHeight;
@property(readonly) NSImage *correspondenceImage;
@property(readonly) BOOL correspondenceUnread;
@property(readonly) NSDate *correspondenceTime;
@property(readonly) NSString *correspondenceTitle;
- (void)updateWebView;
@property(retain) FBABugForm *representedSurvey;
- (void)viewDidResize:(id)arg1;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly) NSNumber *correspondenceOwnerStatus;
@property(readonly) NSAttributedString *correspondenceStatus;
@property(readonly) NSString *correspondenceSubtitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

