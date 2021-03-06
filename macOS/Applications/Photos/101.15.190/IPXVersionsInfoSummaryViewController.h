//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXMetadataEditorViewController-Protocol.h"

@class IPXMetadataInfoViewController, IPXVersionsSummarizer, NSOperationQueue, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface IPXVersionsInfoSummaryViewController : IPXViewController <IPXMetadataEditorViewController>
{
    IPXVersionsSummarizer *_versionsSummarizer;
    NSOperationQueue *_deferredDataQueue;
    NSTextField *_itemCountText;
    NSTextField *_itemSizeText;
    IPXMetadataInfoViewController *_contentController;
}

@property(nonatomic) __weak IPXMetadataInfoViewController *contentController; // @synthesize contentController=_contentController;
@property(nonatomic) __weak NSTextField *itemSizeText; // @synthesize itemSizeText=_itemSizeText;
@property(nonatomic) __weak NSTextField *itemCountText; // @synthesize itemCountText=_itemCountText;
- (void).cxx_destruct;
- (void)cancelPendingSelectionChanges;
- (void)didChangeSelection:(id)arg1;
- (void)_displaySizeLoadingPlaceholder;
- (void)_displayItemCountLoadingPlaceholder;
- (void)_performDeferredSizeFetchWorkForOperation:(id)arg1 selection:(id)arg2;
- (void)_enqueueSizeFetchOperation:(id)arg1;
- (void)_performDeferredItemCountWorkForOperation:(id)arg1 selection:(id)arg2;
- (void)_enqueueItemCountOperation:(id)arg1;
- (id)deferredDataQueue;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSView *finalFirstResponder;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSView *initialFirstResponder;
@property(readonly) Class superclass;

@end

