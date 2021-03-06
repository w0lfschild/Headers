//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPTextHostRep.h"

#import "CALayerDelegate-Protocol.h"
#import "TSCHChartRepPlatformProtocols-Protocol.h"
#import "TSCHSupportsRendering-Protocol.h"

@class CALayer, CAShapeLayer, NSArray, NSMutableArray, NSString, TSCHChartDrawableInfo, TSCHChartLayout, TSCHLegendMoveKnob, TSCHMacEditDataKnob, TSCHNetworkDisconnectedKnob, TSCHRendererLayer, TSCHSearchSelection, TSCHSelectionPath;

@interface TSCHChartRep : TSWPTextHostRep <TSCHChartRepPlatformProtocols, TSCHSupportsRendering, CALayerDelegate>
{
    NSArray *mRenderers;
    BOOL mBuildingChunks;
    int mChunkPhase;
    long long mCurrentChunk;
    BOOL mBuildingFinalBackground;
    BOOL mBuildingFinalElements;
    BOOL mInZoom;
    unsigned long long mInDynamicStandinOperation;
    unsigned long long mInDynamicStandinLayoutOperation;
    BOOL mIsKPFExportForMultiData;
    unsigned long long mTextureStage;
    unsigned long long mTextureDeliveryStyle;
    int mTextureByGlyphStyle;
    TSCHSelectionPath *mActiveTextEditingPath;
    TSCHRendererLayer *mLegendLayer;
    BOOL mForceSeparateLegendLayer;
    BOOL mIsLayerBasedRep;
    BOOL mInvalidateLegendLayerForLayerBasedRep;
    TSCHChartLayout *mChartLayout;
    BOOL mWantsPreviewLayout;
    BOOL mEditorIsEditingInfo;
    BOOL mMediatorEditingHaloLayerPathValid;
    CAShapeLayer *mMediatorEditingHaloLayer;
    CAShapeLayer *mLegendBorderHaloLayer;
    BOOL mChartRepGoingAway;
    BOOL mCDEIsEditingInfo;
    BOOL mCDECausedSetNeedsDisplay;
    BOOL mDrawingSearchReference;
    CALayer *mSubselectionKnobLayer;
    BOOL mFinishedBecomingSelected;
    TSCHLegendMoveKnob *mDynamicLegendKnob;
    BOOL mIs2DRepFor3DChartRep;
    TSCHMacEditDataKnob *mMacEditDataKnob;
    double mTimeOfLastUpdateToDragElements;
    NSArray *mCurrentElementsForDragOperation;
    NSArray *mFutureElementsForDragOperation;
    BOOL mNonPreviewableDragOperationPending;
    TSCHNetworkDisconnectedKnob *mNetworkDisconnectedKnob;
    int mRenderPassChunkPhase;
    struct CGPoint mLastSubselectionLayerRelativeReferencePosition;
    CALayer *mDownloadIndicatorLayer;
    NSMutableArray *mRenderersWaitingForDownload;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
@property(nonatomic) int textureByGlyphStyle; // @synthesize textureByGlyphStyle=mTextureByGlyphStyle;
@property(nonatomic) unsigned long long textureDeliveryStyle; // @synthesize textureDeliveryStyle=mTextureDeliveryStyle;
@property(nonatomic) unsigned long long textureStage; // @synthesize textureStage=mTextureStage;
@property(readonly, nonatomic) BOOL is2DRepFor3DChartRep; // @synthesize is2DRepFor3DChartRep=mIs2DRepFor3DChartRep;
@property(readonly, nonatomic) long long currentChunk; // @synthesize currentChunk=mCurrentChunk;
@property(readonly, nonatomic) BOOL chartRepGoingAway; // @synthesize chartRepGoingAway=mChartRepGoingAway;
@property(readonly, retain, nonatomic) TSCHSelectionPath *activeTextEditingPath; // @synthesize activeTextEditingPath=mActiveTextEditingPath;
@property(readonly, nonatomic) BOOL drawingSearchReference; // @synthesize drawingSearchReference=mDrawingSearchReference;
@property(retain, nonatomic) TSCHLegendMoveKnob *dynamicLegendKnob; // @synthesize dynamicLegendKnob=mDynamicLegendKnob;
@property(nonatomic) BOOL forceSeparateLegendLayer; // @synthesize forceSeparateLegendLayer=mForceSeparateLegendLayer;
- (void).cxx_destruct;
- (BOOL)handleDragOperation:(unsigned long long)arg1 withDragInfo:(id)arg2 atUnscaledPoint:(struct CGPoint)arg3;
- (void)hideDragAndDropUI;
- (void)p_addLivePreviewMutationsToTuples:(id)arg1 withDragInfo:(id)arg2 operation:(unsigned long long)arg3 fill:(id)arg4;
- (unsigned long long)dragOperationForDragInfo:(id)arg1 atUnscaledPoint:(struct CGPoint)arg2;
- (BOOL)p_allowsDragAndDrop;
- (id)p_imageUrlsFromPasteboard:(id)arg1;
- (id)p_validImageDatasFromPasteboard:(id)arg1;
- (id)p_imageFillByGhostingForCollaborationFileSizeLimits:(id)arg1;
- (id)p_imageFillForLivePreviewWithDragInfo:(id)arg1;
- (BOOL)p_withImageFillWithDragInfo:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
- (BOOL)p_withColorFillWithDragInfo:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
- (BOOL)p_canHandleImageWithDragInfo:(id)arg1;
- (BOOL)p_canHandleColorWithDragInfo:(id)arg1;
- (BOOL)p_handleDragOperation:(unsigned long long)arg1 withDragInfo:(id)arg2 ontoElement:(id)arg3 stop:(char *)arg4;
- (id)p_ingestibleItemSourceForDragInfo:(id)arg1;
- (BOOL)p_handleDragWithFill:(id)arg1 dragOperation:(unsigned long long)arg2 withDragInfo:(id)arg3 ontoElement:(id)arg4 stop:(char *)arg5;
- (void)showHitFeedbackForSelectionPath:(id)arg1;
- (void)clearDragHighlightAndPreviewState;
- (id)p_commandToHandleDragOperation:(unsigned long long)arg1 withDragInfo:(id)arg2 ontoElement:(id)arg3 fill:(id)arg4 error:(id *)arg5;
- (id)p_mutationMapForCommandToHandleDragOperation:(unsigned long long)arg1 withDragInfo:(id)arg2 ontoElement:(id)arg3 enforceCollabSizeLimit:(BOOL)arg4 fill:(id)arg5 paragraphStylePropertyMapsForMutationLookup:(id *)arg6;
- (id)p_mutationsForCommandToHandleDragOperation:(unsigned long long)arg1 withDragInfo:(id)arg2 ontoElement:(id)arg3 fill:(id)arg4;
- (id)p_hitElementsForDragInfo:(id)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)p_element:(id)arg1 canAcceptDropFromDragInfo:(id)arg2;
- (struct CGPath *)newHighlightPathInScaledSpace;
- (BOOL)canDrawDownloadProgressPlaceholderImage;
- (struct CGRect)naturalBoundsForDownloadProgressPlaceholderImage;
- (id)downloadProgressPlaceholderImage;
- (BOOL)shouldShowDownloadProgressIndicator;
- (void)protected_dynamicStyleLayoutChangeDidEnd:(id)arg1;
- (void)protected_dynamicStyleLayoutChangeWillBegin:(id)arg1;
- (void)protected_dynamicStyleChangeDidEnd:(id)arg1;
- (void)protected_dynamicStyleChangeWillBegin:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)hitChartElements:(struct CGPoint)arg1;
- (id)hitChartElements:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (BOOL)supportsCopyAsPDF;
- (id)newMouseEventHandlerAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didAnimateFromCDE;
- (void)willAnimateIntoCDE;
- (void)endChartDataEditing;
- (void)beginChartDataEditing;
- (void)setNeedsDisplay;
- (BOOL)hasSubselection;
- (void)invalidateSubselectionKnobs;
- (id)selectedSeriesIndices;
- (id)subselectionLayer;
- (id)protected_haloLayersForHaloPositions:(id)arg1;
- (id)protected_knobLayersForKnobPositions:(id)arg1;
- (struct CGRect)visibleBoundsForTilingLayer:(id)arg1;
- (id)legendLayer;
- (void)releaseLegendLayer;
- (void)p_createLegendLayer;
- (id)legendLayerForLayerBasedRep;
- (BOOL)renderLegendIntoSeparateLayer;
- (void)invalidateLegendLayerForLayerBasedRep;
- (BOOL)p_usingSeparateLegendLayerForLayerBasedRep;
- (BOOL)shouldUseLegendLayerForLayerBasedRep;
- (BOOL)shouldApplyFractionalTranslationInRootForLegendLayer;
- (BOOL)isLegendOn;
- (BOOL)shouldLayoutTilingLayer:(id)arg1;
- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;
- (struct CGRect)outerShadowFrame;
- (void)p_validateLegendSelectionHalo;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)processChanges:(id)arg1;
- (BOOL)doesRepContainSearchReference:(id)arg1;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(BOOL)arg3;
- (struct CGPath *)newPathForSearchReference:(id)arg1;
- (void)p_editorControllerSelectionDidChange:(id)arg1;
- (void)p_findUIStateChanged:(id)arg1;
- (void)p_removeOrShowAndPositionMessageOverlay;
- (void)p_invalidateMessageOverlay;
- (struct CGRect)rectForSelectionPath:(id)arg1;
- (id)p_textImageForPath:(struct CGPath *)arg1 renderer:(id)arg2 selection:(id)arg3 shouldPulsate:(BOOL)arg4;
- (struct CGPath *)p_newPathForSelection:(id)arg1;
- (struct CGPath *)p_newPathForSearchSelection:(id)arg1;
@property(readonly, nonatomic) TSCHSearchSelection *selection;
- (void)tswpTextEditingDidEndEditing:(id)arg1;
- (BOOL)isCanvasTextEditing;
- (void)selectAllEditedText;
- (void)endCanvasTextEditing;
- (BOOL)beginCanvasTextEditingForSelectionPath:(id)arg1;
- (void)beginCanvasTextEditingForSearchSelection:(id)arg1;
- (id)currentTextEditingSupporter;
- (id)p_findRendererForTextEditingSelectionPath:(id)arg1;
- (id)p_findRendererForSelectionPath:(id)arg1;
- (BOOL)canEditWithEditor:(id)arg1;
- (id)beginEditing;
- (BOOL)p_hasAnySubselection;
- (BOOL)p_textEditingInLegend;
- (BOOL)p_legendIsBeingMoved;
- (BOOL)p_legendIsBeingResized;
- (BOOL)p_legendIsSelected;
- (id)p_primaryChartEditor;
- (id)p_currentChartEditor;
- (BOOL)rotationKnobHitByNaturalPoint:(struct CGPoint)arg1;
- (BOOL)intersectsUnscaledRect:(struct CGRect)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (BOOL)p_legendHitByLayoutPoint:(struct CGPoint)arg1;
- (BOOL)shadowsEnabled;
- (void)dynamicallyUpdatingLegendFrameWithTracker:(id)arg1;
- (void)knobTrackingDidEnd:(id)arg1;
- (void)knobTrackingDidBegin:(id)arg1;
- (void)setCurrentKnobTracker:(id)arg1;
- (void)p_displayNetworkDisconnectedMessage:(id)arg1;
- (id)newTrackerForKnob:(id)arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (void)p_updatePositionsOfLegendKnobs:(id)arg1;
- (void)p_updatePositionOfLegendKnob:(id)arg1;
- (void)p_updatePositionOfLegendMoveKnobFromLayout:(id)arg1;
- (void)p_updateLegendLayerPositionFromLegendMoveKnob:(id)arg1;
- (void)p_resetBasePositionOfLegendResizeKnob:(id)arg1;
- (void)p_updatePositionOfLegendResizeKnob:(id)arg1;
- (void)p_setNetworkDisconnectedKnobPosition:(id)arg1;
- (void)p_setEditDataKnobPosition:(id)arg1;
- (struct CGRect)p_adjustEditDataButtonRect:(struct CGRect)arg1 withChartArea:(struct CGRect)arg2 withinCanvasFrame:(struct CGRect)arg3;
- (double)p_editDataButtonDesiredDistanceFromChartRep;
- (void)p_closeChartDataEditorIfNeeded;
- (void)viewScaleDidChange;
- (void)invalidateKnobs;
- (void)invalidateKnobPositions;
- (void)resourcesOnlineStatusDidChange;
- (void)p_resourcesOnlineStatusChanged:(id)arg1;
- (void)addKnobsToArray:(id)arg1;
- (BOOL)showNetworkDissconnectIndicator;
- (BOOL)showAssetDownloadIndicator;
- (unsigned long long)adjustedKnobForComputingResizeGeometry:(unsigned long long)arg1;
- (BOOL)legendHitByUnscaledPoint:(struct CGPoint)arg1 distanceFromCenter:(struct CGPoint *)arg2;
- (void)addChartKnobsToArray:(id)arg1;
- (void)endDragInlineWithText;
- (void)beginDragInlineWithText;
- (BOOL)p_canShowEditDataKnob;
- (id)knobForDynamicStyleChangeKey:(id)arg1;
- (BOOL)shouldShowKnobs;
- (void)updateKnobs;
- (void)p_showEditDataKnob;
- (void)p_hideEditDataKnob;
- (void)showChartDataEditorWindow:(id)arg1;
- (void)updateEditDataKnobVisiblityOnPoint:(struct CGPoint)arg1;
- (id)newMouseEventHandlerForKnob:(id)arg1 atPoint:(struct CGPoint)arg2 withEvent:(id)arg3;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (void)dynamicResizeDidEndWithTracker:(id)arg1;
- (void)dynamicallyResizingWithTracker:(id)arg1;
- (id)dynamicResizeDidBegin;
- (void)dynamicDragDidBegin;
- (BOOL)buildShouldUseRenderer:(id)arg1;
- (BOOL)planeIsVisible:(int)arg1;
- (int)planeState:(int)arg1 finalElements:(BOOL)arg2 chunkStage:(long long)arg3;
- (int)planeState:(int)arg1 finalElements:(BOOL)arg2;
- (int)p_backgroundLikePlaneStateForEffectiveStage:(long long)arg1;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1 finalElements:(BOOL)arg2 currentChunk:(long long)arg3;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1 finalElements:(BOOL)arg2;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1;
- (id)renderSeriesIndexSetForFinalElements:(BOOL)arg1 currentChunk:(long long)arg2;
- (id)renderSeriesIndexSetForFinalElements:(BOOL)arg1;
- (id)renderSeriesIndexSet;
- (BOOL)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (BOOL)renderLabels;
- (BOOL)renderElementsShadowOnly;
- (BOOL)renderElementsWithoutShadows;
- (BOOL)renderReferenceLines;
- (BOOL)renderGrid;
- (BOOL)renderElements;
- (id)p_textureForDescription:(id)arg1;
- (id)textureForDescription:(id)arg1;
- (void)protected_renderChunkInBounds:(struct CGRect)arg1 textureSet:(id)arg2;
@property(readonly, nonatomic) unsigned long long chartDeliveryStyle;
@property(readonly, nonatomic) NSString *animationFilter;
- (void)p_validateMediatorEditingHaloLayer;
- (void)p_invalidateMediatorEditingHaloLayer;
- (void)becameNotSelected;
- (void)becameSelected;
- (void)editor:(id)arg1 isDeselectingInfos:(id)arg2;
- (id)cursorAtPoint:(struct CGPoint)arg1 forKnob:(id)arg2 withEvent:(id)arg3;
- (BOOL)p_onlyASingleChartSelected;
- (void)editor:(id)arg1 isSelectingInfos:(id)arg2;
- (BOOL)isEditing;
- (BOOL)shouldShowLegendHighlight;
- (BOOL)shouldShowSelectionHighlight;
- (void)didEndZooming;
- (void)willBeginZooming;
- (void)updateMessageOverlayNow;
- (BOOL)messageIsVisible;
- (void)dismissMessageOverlayNowWithAnimation:(BOOL)arg1;
- (void)p_topBarsShowedUp:(id)arg1;
- (void)displayMessage:(id)arg1 zPosition:(double)arg2 style:(int)arg3;
- (void)p_messageAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)p_forceDismissTransientMessage;
- (BOOL)p_chartShouldDisplayMessage;
- (void)p_positionMessageView;
- (struct CGRect)targetRectForEditMenu;
- (BOOL)shouldUseChartAreaRectForEditMenuTargetRectMinY;
- (void)p_deleteMessageView;
- (void)layerHostContainerFocusDidChange;
- (void)p_listenForDataChangesIfAppropriateForFill:(id)arg1 forProperty:(int)arg2;
- (void)p_checkFillPropertiesForDataListeningWithChangedProperties:(id)arg1;
- (int)tilingMode;
- (void)renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setupForDrawingInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (struct CGPoint)scaledSubpixelOffsetFromLayerFrameInScaledCanvas;
- (struct CGRect)frameInUnscaledCanvas;
- (BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
- (id)overlayLayers;
- (void)didUpdateLayer:(id)arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (BOOL)directlyManagesLayerContent;
- (BOOL)p_hasBackgroundLayerForPieChart;
- (BOOL)p_hasBackgroundFill;
- (BOOL)providesGuidesWhileAligning;
- (id)additionalRectsForSnappingWithOffset:(struct CGPoint)arg1;
- (struct CGRect)snapRectForDynamicDragWithOffset:(struct CGPoint)arg1;
- (BOOL)isDrawingIntoPDF;
- (id)commandController;
@property(readonly, nonatomic) double contentsScale;
@property(readonly, nonatomic) double viewScale;
- (struct CGRect)geometryFrame;
- (id)geometry;
- (void)updateFromLayout;
- (BOOL)shouldUseRenderer:(id)arg1;
- (void)clearRenderers;
- (id)renderers;
@property(readonly, nonatomic) BOOL isCorrectRepClassForInfo;
@property(readonly, nonatomic, getter=isTrackingLegendResize) BOOL trackingLegendResize; // @dynamic trackingLegendResize;
@property(readonly, nonatomic, getter=isTrackingLegendMove) BOOL trackingLegendMove; // @dynamic trackingLegendMove;
- (BOOL)canDrawInParallel;
- (void)willBeRemoved;
@property(readonly, nonatomic) BOOL forceRenderBlankBackground;
- (id)p_legendRenderer;
- (BOOL)isLayerBasedRep;
@property(readonly, nonatomic) TSCHChartLayout *chartLayout;
- (id)drawableLayout;
@property(readonly, nonatomic) TSCHChartDrawableInfo *chartInfo;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2 is2DRepFor3DChartRep:(BOOL)arg3;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)requireSeparateLabelLayer;
- (id)referenceLineLabelsSearchSelectionsToRender;
- (id)referenceLinesToRender;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

