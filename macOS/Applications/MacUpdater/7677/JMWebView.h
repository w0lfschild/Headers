//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebView.h"

#import "WebPolicyDelegate.h"
#import "WebResourceLoadDelegate.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface JMWebView : WebView <WebPolicyDelegate, WebResourceLoadDelegate>
{
    BOOL _disableScrolling;
    BOOL _openOnlyClicksInBrowser;
    NSString *_localHTMLName;
    NSString *_remoteHTMLURL;
    NSNumber *_zoomFactor;
}

@property(nonatomic) BOOL openOnlyClicksInBrowser; // @synthesize openOnlyClicksInBrowser=_openOnlyClicksInBrowser;
@property(nonatomic) BOOL disableScrolling; // @synthesize disableScrolling=_disableScrolling;
@property(retain, nonatomic) NSNumber *zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(retain, nonatomic) NSString *remoteHTMLURL; // @synthesize remoteHTMLURL=_remoteHTMLURL;
@property(retain, nonatomic) NSString *localHTMLName; // @synthesize localHTMLName=_localHTMLName;
- (void).cxx_destruct;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)viewWillDraw;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

