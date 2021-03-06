//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComposeViewController.h"

@class ComposeBackEndWK2, ComposeWebView;

@interface ComposeViewControllerWK2 : ComposeViewController
{
    ComposeWebView *_composeWebView;
}

- (void).cxx_destruct;
- (void)_ensureTextFinder;
- (void)_restoreOriginalAttachments:(CDUnknownBlockType)arg1;
- (void)_setComposeViewDrawsBackground:(BOOL)arg1;
- (void)_changeSharedURLToDisplayType:(long long)arg1;
- (void)showWithContext:(id)arg1;
- (id)_textLengthEstimate;
- (BOOL)_isFullyLoaded;
- (id)shareItemsForSelection;
- (void)viewWillClose;
- (Class)backEndClass;
- (id)_composeView;
- (void)continueLoadingInitialContent:(CDUnknownBlockType)arg1;
- (void)_updateComposeWebViewPreferencesForRichText:(BOOL)arg1;
- (id)_loadInitialDocumentOperation;
- (id)_firstSelectedAttachmentView;
- (void)_loadHTMLStringIntoWebView:(id)arg1 baseURL:(id)arg2;
- (void)_loadHTMLDataIntoWebView:(id)arg1;
- (void)_setUpWebMessageController;
- (void)awakeFromNib;

// Remaining properties
@property(retain, nonatomic) ComposeBackEndWK2 *backEnd; // @dynamic backEnd;

@end

