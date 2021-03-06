//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WebUIDelegate-Protocol.h"

@class HVWebDelegate, NSString, NSURLRequest, NSWindow, WebView;

@interface HVBasicWindowController : NSObject <WebUIDelegate>
{
    NSWindow *basicWindow;
    WebView *basicWebview;
    NSURLRequest *_request;
    HVWebDelegate *_webDelegate;
}

+ (id)sharedWindowController;
@property(retain) HVWebDelegate *webDelegate; // @synthesize webDelegate=_webDelegate;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)openBasicWindow;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

