//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class WBSSiteMetadataRequest, WBSSiteMetadataResponse, WKWebView, WKWebViewConfiguration;
@protocol NSFastEnumeration, WBSSiteMetadataProvider;

@protocol WBSSiteMetadataProviderDelegate <NSObject>
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 didFinishUsingWebView:(WKWebView *)arg2;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 getWebViewOfSize:(struct CGSize)arg2 withConfiguration:(WKWebViewConfiguration *)arg3 completionHandler:(void (^)(WKWebView *))arg4;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 cancelRequestsWithTokens:(id <NSFastEnumeration>)arg2;
- (id)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 registerOneTimeRequest:(WBSSiteMetadataRequest *)arg2 priority:(long long)arg3 responseHandler:(void (^)(WBSSiteMetadataResponse *))arg4;
- (id)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 registerRequest:(WBSSiteMetadataRequest *)arg2 priority:(long long)arg3 responseHandler:(void (^)(WBSSiteMetadataResponse *))arg4;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 didReceiveResponse:(WBSSiteMetadataResponse *)arg2 forRequest:(WBSSiteMetadataRequest *)arg3 beginOperationUsingBlock:(NSOperation * (^)(void))arg4;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 didReceiveResponse:(WBSSiteMetadataResponse *)arg2 ofType:(long long)arg3 didReceiveNewData:(BOOL)arg4 forRequest:(WBSSiteMetadataRequest *)arg5;
@end

