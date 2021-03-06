//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXCollectionsGridViewController.h"

@class IPXPrintProductAdapter, IPXSlideshowController, IPXSlideshowEditorController, UXViewController;

__attribute__((visibility("hidden")))
@interface IPXProjectsGridViewController : IPXCollectionsGridViewController
{
    UXViewController *_placeholderViewController;
    IPXPrintProductAdapter *_printProductAdapter;
    IPXSlideshowController *_slideshowController;
    IPXSlideshowEditorController *_slideshowEditorController;
}

+ (id)validatedCollectionForNavigationDestination:(id)arg1 library:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) IPXSlideshowEditorController *slideshowEditorController; // @synthesize slideshowEditorController=_slideshowEditorController;
- (BOOL)wantsPlaceholderView;
- (id)placeholderViewController;
- (id)assetsView:(id)arg1 imageForDraggedItemAtIndexPath:(id)arg2;
- (void)enterCaptionEditingModeforItemAtIndexPath:(id)arg1;
- (struct _NSRange)zoomLevelRange;
- (id)zoomLevelIdentifier;
- (void)initiateRenameForCell:(id)arg1;
- (id)rightClickMenuForCollections:(id)arg1;
- (void)navigateToCollection:(id)arg1;
- (unsigned long long)selectionContainerContext;
- (id)mediaItemForCollection:(id)arg1;
- (Class)assetViewCellClass;
- (void)_requestSlideshowEditorControllersForProject:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestKeepsakeProjectViewControllersForProject:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestProjectExtensionViewControllersForProject:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestViewControllersForNavigationDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willBecomeInactive;
- (void)didBecomeActive;
@property(readonly, nonatomic) IPXSlideshowController *slideshowController; // @synthesize slideshowController=_slideshowController;
@property(readonly, nonatomic) IPXPrintProductAdapter *printProductAdapter; // @synthesize printProductAdapter=_printProductAdapter;

@end

