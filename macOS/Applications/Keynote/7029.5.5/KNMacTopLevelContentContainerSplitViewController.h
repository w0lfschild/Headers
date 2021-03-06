//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSplitViewController.h>

#import "KNMacMainContentContainer-Protocol.h"

@class KNInteractiveCanvasController, KNMacTopLevelContentContainerSplitView, KNSlideNode, NSColor, NSObject, NSString, NSTouchBar, NSView, NSViewController, TMAZoomStepper, TSDEditorController;
@protocol KNMacContentContainer, KNMacMainContentContainer, KNMacPresenterNotesContainer, KNSlideCollectionEditor, TSDCanvasEditor;

@interface KNMacTopLevelContentContainerSplitViewController : NSSplitViewController <KNMacMainContentContainer>
{
    BOOL _accessoryViewControllerAdjustsToUndersizedWindow;
    BOOL _viewVisible;
    NSViewController<KNMacMainContentContainer> *_mainViewController;
    NSViewController<KNMacContentContainer> *_accessoryViewController;
    double _topContentInset;
    double _undersizedWindowFactor;
}

+ (id)keyPathsForValuesAffectingZoomStepper;
- (void).cxx_destruct;
@property(nonatomic) double undersizedWindowFactor; // @synthesize undersizedWindowFactor=_undersizedWindowFactor;
@property(nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;
@property(readonly, nonatomic, getter=isViewVisible) BOOL viewVisible; // @synthesize viewVisible=_viewVisible;
@property(retain, nonatomic) NSViewController<KNMacContentContainer> *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property(retain, nonatomic) NSViewController<KNMacMainContentContainer> *mainViewController; // @synthesize mainViewController=_mainViewController;
- (id)canvasViewScaleDetentsForInteractiveCanvasController:(id)arg1 isFastPinch:(BOOL)arg2;
- (id)touchBar;
@property(readonly, nonatomic) NSTouchBar *mainContentTouchBar;
- (void)invalidateTouchBar;
- (void)invalidateComments;
@property(readonly, nonatomic) id <KNMacPresenterNotesContainer> presenterNotesContainer;
@property(readonly, nonatomic) BOOL canPreviewSlideAnimations;
- (void)cleanupSlideDragDestination;
- (void)prepareSlideDragDestination;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
@property(readonly, nonatomic) TSDEditorController *editorControllerForInspector;
@property(readonly, nonatomic) KNInteractiveCanvasController *targetInteractiveCanvasControllerForActions;
@property(readonly, nonatomic) NSObject<TSDCanvasEditor> *canvasEditorForInsertingDrawables;
@property(nonatomic) BOOL showsRulers;
- (void)zoomToFitAll;
@property(readonly, nonatomic) BOOL canZoomToFitAll;
@property(nonatomic) BOOL autoCentersContent;
@property(readonly, nonatomic) BOOL canChangeAutoCentersContent;
@property(nonatomic) BOOL fitsContentInWindow;
@property(readonly, nonatomic) BOOL canChangeFitsContentInWindow;
- (void)didUpdateZoom;
@property(readonly, nonatomic) TMAZoomStepper *zoomStepper;
@property(readonly, nonatomic) BOOL usesZoomMenu;
@property(readonly, nonatomic) NSView *initialFirstResponder;
- (void)discardAllEditing;
- (void)commitAllEditing;
- (void)clearCanvasSelections;
- (id)startingSearchReference;
- (id)selectionModelTranslatorForSelectionPath:(id)arg1;
- (id)interactiveCanvasControllerForSelectionPath:(id)arg1;
- (void)endTransformingCurrentSelectionPaths;
- (void)transformCurrentSelectionPathsUsingOperationTransformer:(id)arg1;
- (void)beginTransformingCurrentSelectionPaths;
- (void)setSelectionPath:(id)arg1 withFlags:(unsigned long long)arg2;
- (BOOL)canSetSelectionPath:(id)arg1 withFlags:(unsigned long long)arg2;
- (id)viewControllerForSelectionPath:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)updateViewConstraints;
@property(readonly, nonatomic) struct NSEdgeInsets scrollViewContentInsets;
- (void)p_updateSplitViewUndersizedWindowFactor;
- (double)p_adjustedMaxAccessoryViewSizeForUndersizedWindowFactorWithAccessoryViewController:(id)arg1;
- (void)p_restoreAccessoryViewItemToSavedThickness;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)toggleSidebar:(id)arg1;
- (void)setAccessoryViewHidden:(BOOL)arg1 animate:(BOOL)arg2;
@property(readonly, nonatomic) struct CGSize sizeFittingContent;
- (void)teardown;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) BOOL adjustsToUndersizedWindow;
@property(readonly, nonatomic) NSColor *containerBackgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double kn_maximumSize;
@property(readonly, nonatomic) double kn_minimumSize;
@property(readonly, nonatomic) KNSlideNode *nextSlideNode;
@property(readonly, nonatomic) KNSlideNode *previousSlideNode;
@property(readonly, nonatomic) NSObject<KNSlideCollectionEditor> *slideCollectionEditor;
@property(retain) KNMacTopLevelContentContainerSplitView *splitView; // @dynamic splitView;
@property(readonly) Class superclass;

@end

