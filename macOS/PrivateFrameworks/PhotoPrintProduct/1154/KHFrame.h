//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

#import "KHBehaviorBindingProtocol.h"
#import "KHJSONGeneratorProtocol.h"
#import "KHSelectable.h"
#import "KHSortingProtocol.h"

@class KHFrameRenderer, KHLayout, KHTreatment, KHTreatmentLayer, NSArray, NSLock, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, NSUndoManager;

@interface KHFrame : KHModel <KHJSONGeneratorProtocol, KHSelectable, KHSortingProtocol, KHBehaviorBindingProtocol>
{
    long long _parentLayoutId;
    long long _childLayoutId;
    long long _treatmentId;
    NSString *_designTag;
    double _x;
    double _y;
    double _width;
    double _height;
    long long _relative;
    double _rotation;
    long long _drawingOrder;
    long long _fillOrder;
    int _blendMode;
    long long _locked;
    NSString *_contentEntityClass;
    long long _hidden;
    long long _isLink;
    NSString *_name;
    NSString *_source;
    long long _mirrorRotation;
    long long _mirrorAlignment;
    long long _groupId;
    NSLock *_rendererLock;
    NSLock *_behaviorBindingLock;
    double _minimumAspectRatio;
    double _maximumAspectRatio;
    KHFrameRenderer *_photoRenderer;
    KHFrameRenderer *_textRenderer;
    KHFrameRenderer *_mapRenderer;
    KHFrameRenderer *_calendarRenderer;
    unsigned long long _contentType;
    KHLayout *_parentLayout;
    KHLayout *_childLayout;
    KHTreatment *_treatment;
    KHTreatment *_replacementTreatment;
    KHFrame *_dropzoneContainer;
    BOOL _selected;
    BOOL _isDragDestination;
    BOOL _isDragSource;
    KHFrame *_swapFrame;
    NSMutableSet *_behaviors;
    NSArray *_cells;
    NSRecursiveLock *_cellsLock;
    BOOL _cellsInvalidated;
    NSMutableDictionary *_treatmentFrameCache;
    NSMutableDictionary *_rendererResourceCache;
    NSRecursiveLock *_rendererResourceCacheLock;
    NSMutableDictionary *_attributeCache;
    NSMutableDictionary *_annotationCache;
    NSLock *_annotationCacheLock;
    BOOL _isTransient;
    NSMutableDictionary *_backgroundBehaviorTraitMap;
    NSMutableDictionary *_orientationBehaviorTraitMap;
    NSMutableDictionary *_replacementLayers;
    double _mapUnitZoomTransient;
    BOOL _bleeds;
    BOOL _isFullBleed;
    BOOL _bleedTestWasCached;
    unsigned long long _bleedEdgeMask;
    CDStruct_6b31c1a5 _bleedEdgeInsets;
    BOOL _usesReplacementTreatment;
    NSArray *_behaviorBindings;
    BOOL _isChangingOrientation;
    BOOL _swapping;
    KHTreatmentLayer *_fillLayer;
    KHTreatmentLayer *_strokeLayer;
}

+ (id)keyPathsForValuesAffectingLayoutAfterValueChange;
+ (id)needsLayoutForKeys;
+ (id)keyPathsForValuesAffectingDisplayAfterValueChange;
+ (id)needsDisplayForKeys;
+ (id)convertedContentClassForConversionClass:(id)arg1;
+ (void)preloadFramesForLayouts:(id)arg1;
+ (id)frameForKey:(long long)arg1 inDatabase:(id)arg2;
+ (id)framesOfType:(unsigned long long)arg1 inFrames:(id)arg2;
+ (id)contentEntityClassForContentType:(unsigned long long)arg1;
+ (id)generateModelFromJSON:(id)arg1 inDatabase:(id)arg2 bundlePath:(id)arg3;
+ (id)generateModelFromJSON:(id)arg1;
+ (struct CGRect)rendererTrimmedRectForFrame:(id)arg1 atScale:(double)arg2;
+ (struct CGRect)visibleRectForFrame:(id)arg1 atScale:(double)arg2;
+ (struct CGPath *)createClippingPathForFrame:(id)arg1 atScale:(double)arg2 treatmentFactor:(double)arg3;
+ (id)photoDisplayKeys;
+ (unsigned long long)mirroredTextFrameResizeAnchorForAlignment:(unsigned long long)arg1 mirrorX:(BOOL)arg2 mirrorY:(BOOL)arg3;
+ (long long)mirroredAlignmentForVerticalAlignment:(long long)arg1;
+ (unsigned long long)mirroredAlignmentForHorizontalAlignment:(unsigned long long)arg1;
+ (id)textFrameAttributeKeys;
@property(retain) KHTreatmentLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain) KHTreatmentLayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(nonatomic) BOOL swapping; // @synthesize swapping=_swapping;
@property double maximumAspectRatio; // @synthesize maximumAspectRatio=_maximumAspectRatio;
@property double minimumAspectRatio; // @synthesize minimumAspectRatio=_minimumAspectRatio;
- (BOOL)shouldEvaluateForAspectRatio;
- (id)treatmentOrConfigurationDatabase;
- (Class)behaviorClass;
- (Class)appliedBehaviorClass;
- (Class)configurationTextStyleClass;
- (Class)treatmentClass;
- (Class)configurationAttributeClass;
- (Class)configurationTreatmentClass;
- (id)configurationDatabase;
- (Class)configurationClass;
- (void)createAccumulatedBackgroundBehaviors;
- (void)accumulateBackgroundBehaviorForTraitName:(id)arg1 key:(id)arg2 keyType:(unsigned long long)arg3 value:(id)arg4 valueType:(id)arg5;
- (id)backgroundBehaviorTraitMap;
- (void)evaluateBindings;
- (void)loadBehaviorBindings;
- (void)setBehaviorBindings:(id)arg1;
- (id)behaviorBindings;
- (void)applyBehavior:(id)arg1;
- (void)pasteAppliedBehavior:(id)arg1;
- (id)behaviors;
- (BOOL)usesReplacementTreatment;
- (void)setUsesReplacementTreatment:(BOOL)arg1;
- (void)setReplacementTreatment:(id)arg1;
- (id)replacementTreatment;
- (void)clearReplacementLayers;
- (id)replacementLayers;
- (id)traits;
- (long long)sortByDefault:(id)arg1;
- (long long)sortByProminence:(id)arg1;
- (long long)sortByPlacement:(id)arg1;
- (long long)sortByFillOrder:(id)arg1;
- (long long)sortByDrawingOrder:(id)arg1;
- (long long)sortBySize:(id)arg1;
- (long long)sortByName:(id)arg1;
- (long long)sortById:(id)arg1;
- (id)foregroundLayerFramesOfType:(unsigned long long)arg1;
- (void)clearLayerFrames;
- (id)allLayerFrames;
- (id)layerFrameForKey:(id)arg1;
- (void)removeLayerFrameWithKey:(id)arg1;
- (id)createLayerFrameWithKey:(id)arg1 basedOnTreatmentLayer:(id)arg2;
- (void)rotate:(double)arg1;
- (void)growHeight:(double)arg1;
- (void)growWidth:(double)arg1;
- (void)nudgeY:(double)arg1;
- (void)nudgeX:(double)arg1;
@property(nonatomic) struct CGRect rect;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint center;
- (id)debugInfo;
- (void)unload;
- (void)remove;
- (id)sourceFrame;
- (id)sourceNames;
- (void)convertContentClass:(id)arg1;
- (BOOL)allowsDynamicShadows;
- (BOOL)enableDefaultLeading;
- (BOOL)wantsTransparencyLayer;
- (void)setStrokeLayerColor:(id)arg1;
- (BOOL)treatmentHasStroke;
- (void)setFillLayerColor:(id)arg1;
- (BOOL)hasFillLayer;
- (BOOL)hasBrandingArt;
- (BOOL)isBackground;
- (BOOL)isPhotoBackground;
- (BOOL)wantsFrameHUD;
- (BOOL)supportsZooming;
- (BOOL)supportsPanning;
- (BOOL)isCellFrame;
- (BOOL)isDropZoneFrame;
- (BOOL)isCalendarFrame;
- (BOOL)isMapLabelFrame;
- (BOOL)isMapFrame;
- (BOOL)isTextFrame;
- (BOOL)isPhotoFrame;
- (BOOL)isEmptyFrame;
- (unsigned long long)contentType;
- (void)setSwapFrame:(id)arg1;
- (id)swapFrame;
- (void)setIsDragSource:(BOOL)arg1;
- (BOOL)isDragSource;
- (BOOL)isValidSourceForType:(id)arg1;
- (BOOL)isValidDestinationForType:(id)arg1;
- (void)setIsDragDestination:(BOOL)arg1;
- (BOOL)isDragDestination;
- (void)setSelected:(BOOL)arg1;
- (BOOL)selected;
- (struct CGAffineTransform)baseToRelativeTransform;
- (double)baseRotation;
- (void)_updateBleedTests;
- (unsigned long long)bleedEdgeMask;
- (CDStruct_6b31c1a5)bleedEdgeInsets;
- (BOOL)isFullBleed;
- (BOOL)bleeds;
- (BOOL)useIntegralBounds;
- (id)aspectRatioString;
- (double)aspectRatio;
- (unsigned long long)frameOrientation;
- (void)_loadAttributesAndRestorePanAndZoomForSwapWithFrame:(id)arg1 newPhotoID:(id)arg2 alwaysSendNotification:(BOOL)arg3;
- (id)_filterFrameAttributesBeforeSwap:(id)arg1;
- (void)swapWithFrame:(id)arg1;
- (void)undoRedoSwapWithFrame:(id)arg1;
- (void)flushRenderer;
- (void)reloadRendererAttributes;
- (id)calendarRenderer;
- (id)photoRenderer;
- (id)textRenderer;
- (id)mapRenderer;
- (id)renderer;
- (void)clearRenderCache;
- (void)setBindableTreatment:(id)arg1;
- (id)bindableTreatment;
- (void)undoRedoSetTreatment:(id)arg1;
- (void)applyTreatment:(id)arg1;
- (id)supportedTreatments:(BOOL)arg1;
- (id)_layerTreatments;
- (id)layerFrameAttributes;
- (id)activeTreatment;
- (void)setTreatment:(id)arg1;
- (void)cacheTreatment:(id)arg1;
- (id)treatment;
- (id)treatmentForType:(unsigned long long)arg1;
@property(readonly, nonatomic) KHFrame *masterFrame;
@property(readonly, nonatomic) NSUndoManager *undoManager;
@property(readonly, nonatomic) NSArray *subframes;
@property(readonly, nonatomic) NSArray *childFrames;
@property(readonly, nonatomic) NSArray *cells;
@property(readonly, nonatomic) KHLayout *childLayout;
@property(readonly, nonatomic) KHLayout *parentLayout;
@property(readonly, nonatomic) KHLayout *baseLayout;
@property(readonly, nonatomic) KHFrame *parentFrame;
- (id)prototypeAttributeForKey:(id)arg1;
- (void)setPrototypeValue:(id)arg1 forKey:(id)arg2 type:(id)arg3;
- (void)setPrototypeValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (void)_updateChildLayoutBackpointerForLayoutId:(id)arg1;
- (void)deleteModel;
- (void)willBeDeleted;
- (void)wasPersisted;
- (void)persist;
- (void)writeValue:(id)arg1 toField:(id)arg2;
- (id)setValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (id)setValue:(id)arg1 forKey:(id)arg2 type:(id)arg3;
- (id)addAttributeValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (void)cacheAttribute:(id)arg1 forKey:(id)arg2;
- (id)addAttributeValue:(id)arg1 forKey:(id)arg2 type:(id)arg3;
- (void)removeAttributeForKey:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (id)attributes;
- (id)attributeKeysToPreserve;
- (void)loadAttributes;
- (void)setIsTransient:(BOOL)arg1;
- (BOOL)isTransient;
- (void)setDropzoneContainer:(id)arg1;
- (id)dropzoneContainer;
- (BOOL)includeInFrameMat;
- (BOOL)clipsContext;
- (void)setGroupId:(long long)arg1;
- (void)cacheGroupId:(long long)arg1;
- (long long)groupId;
- (void)setMirrorAlignment:(long long)arg1;
- (void)cacheMirrorAlignment:(long long)arg1;
- (long long)mirrorAlignment;
- (void)setMirrorRotation:(long long)arg1;
- (void)cacheMirrorRotation:(long long)arg1;
- (long long)mirrorRotation;
- (void)setSource:(id)arg1;
- (void)cacheSource:(id)arg1;
- (id)source;
- (void)setName:(id)arg1;
- (void)cacheName:(id)arg1;
- (id)name;
- (void)setHidden:(long long)arg1;
- (void)cacheHidden:(long long)arg1;
- (long long)hidden;
- (void)setContentEntityClass:(id)arg1;
- (void)cacheContentEntityClass:(id)arg1;
- (id)contentEntityClass;
- (void)setIsLink:(long long)arg1;
- (void)cacheIsLink:(long long)arg1;
- (long long)isLink;
- (void)setLocked:(long long)arg1;
- (void)cacheLocked:(long long)arg1;
- (long long)locked;
- (void)setBlendMode:(int)arg1;
- (void)cacheBlendMode:(int)arg1;
- (int)blendMode;
- (void)setFillOrder:(long long)arg1;
- (void)cacheFillOrder:(long long)arg1;
- (long long)fillOrder;
- (void)setDrawingOrder:(long long)arg1;
- (void)cacheDrawingOrder:(long long)arg1;
- (long long)drawingOrder;
- (void)setRotationFromString:(id)arg1;
- (void)setRotation:(double)arg1;
- (void)cacheRotation:(double)arg1;
- (double)rotation;
- (void)setRelative:(long long)arg1;
- (void)cacheRelative:(long long)arg1;
- (long long)relative;
- (void)setHeight:(double)arg1 force:(BOOL)arg2;
- (void)setHeightFromString:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)cacheHeight:(double)arg1;
- (double)height;
- (void)setWidth:(double)arg1 force:(BOOL)arg2;
- (void)setWidthFromString:(id)arg1;
- (void)setWidth:(double)arg1;
- (void)cacheWidth:(double)arg1;
- (double)width;
- (void)setY:(double)arg1 force:(BOOL)arg2;
- (void)setYFromString:(id)arg1;
- (void)setY:(double)arg1;
- (void)cacheY:(double)arg1;
- (double)y;
- (void)setX:(double)arg1 force:(BOOL)arg2;
- (void)setXFromString:(id)arg1;
- (void)setX:(double)arg1;
- (void)cacheX:(double)arg1;
- (double)x;
- (void)setDesignTag:(id)arg1;
- (void)cacheDesignTag:(id)arg1;
- (id)designTag;
- (void)setTreatmentId:(long long)arg1;
- (void)cacheTreatmentId:(long long)arg1;
- (long long)treatmentId;
- (void)setChildLayoutId:(long long)arg1;
- (void)cacheChildLayoutId:(long long)arg1;
- (long long)childLayoutId;
- (void)setParentLayoutId:(long long)arg1;
- (void)cacheParentLayoutId:(long long)arg1;
- (long long)parentLayoutId;
- (id)formattedDescription;
- (id)tinyDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)encodeWithDictionary:(id)arg1;
- (id)initWithUuid:(id)arg1 inDatabase:(id)arg2;
- (id)init;
- (void)commonInit;
- (void)cachePropertiesFromDictionary:(id)arg1;
- (id)JSONRepresentation;
- (id)layerFrameAtPoint:(struct CGPoint)arg1 scale:(double)arg2;
- (id)childLayoutFrameAtPoint:(struct CGPoint)arg1 scale:(double)arg2;
- (struct CGPoint)basePoint:(struct CGPoint)arg1 scale:(double)arg2;
- (struct CGPoint)relativePoint:(struct CGPoint)arg1 scale:(double)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1 scale:(double)arg2 leniency:(float)arg3;
- (struct CGPath *)createClippingPathForScale:(double)arg1;
- (struct CGPath *)createClippingPathForScale:(double)arg1 treatmentFactor:(double)arg2;
- (CDStruct_6b31c1a5)bleedEdgeInsetsForScale:(double)arg1;
- (struct CGRect)rendererTrimmedRectForScale:(double)arg1;
- (struct CGRect)visibleRectForScale:(double)arg1;
- (struct CGRect)safeRectForScale:(double)arg1;
- (struct CGRect)treatmentForegroundRectForScale:(double)arg1;
- (struct CGRect)treatmentBackgroundRectForScale:(double)arg1;
- (struct CGRect)relativeRectForScale:(double)arg1;
- (struct CGRect)trimmedRectForScale:(double)arg1;
- (struct CGRect)baseRectForScale:(double)arg1;
- (struct CGRect)translatedRectForScale:(double)arg1;
- (struct CGRect)selectionRectForScale:(double)arg1;
- (struct CGRect)rectForScale:(double)arg1 withTreatmentLayers:(id)arg2;
- (struct CGRect)rectForScale:(double)arg1;
- (struct CGRect)rectForScale:(double)arg1 inset:(CDStruct_e9d111b7)arg2;
- (id)debugQuickLookObject;
- (id)contentErrors;
- (BOOL)hasContentIssues;
- (BOOL)canBePanned;
- (BOOL)canBeZoomed;
- (id)draggingImageWithSize:(struct CGSize)arg1;
- (void)drawSelectionInContext:(struct CGContext *)arg1 forTreatment:(id)arg2 scale:(double)arg3;
- (void)fillContext:(struct CGContext *)arg1 environment:(id)arg2 scale:(double)arg3;
@property(nonatomic) BOOL isResizing;
- (id)journalEntriesForDate:(id)arg1;
- (id)calendarSubframes;
- (void)invalidateCells:(BOOL)arg1;
- (void)ensureCellsCreated;
- (long long)cellIndexForNextMonthPreview;
- (long long)cellIndexForPreviousMonthPreview;
- (id)cellFrameForJournalEntry:(id)arg1;
- (id)cellForDate:(id)arg1;
- (id)cellAtPoint:(struct CGPoint)arg1 scale:(double)arg2 relative:(BOOL)arg3;
- (BOOL)calendarPreviewIsFloating;
- (BOOL)shouldDrawCalendarPreviews;
- (id)previewCellPosition;
- (long long)previewDayOfWeekVerticalAlignment;
- (unsigned long long)previewDayOfWeekHorizontalAlignment;
- (long long)previewTitleVerticalAlignment;
- (unsigned long long)previewTitleHorizontalAlignment;
- (long long)previewDayVerticalAlignment;
- (unsigned long long)previewDayHorizontalAlignment;
- (id)previewDayTextColor;
- (id)previewDayStyle;
- (id)previewDayOfWeekTextColor;
- (id)previewDayOfWeekStyle;
- (id)previewTitleTextColor;
- (id)previewTitleStyle;
- (id)captionTextColor;
- (id)captionTextStyle;
- (id)footerFrameText;
- (BOOL)footerFrameIsUppercase;
- (id)footerFrameTextColor;
- (id)footerFrameTextStyle;
- (long long)footerFrameTextVerticalAlignment;
- (unsigned long long)footerFrameTextHorizontalAlignment;
- (double)footerFrameWidth;
- (double)footerFrameHeight;
- (double)footerFrameRelativeY;
- (double)footerFrameRelativeX;
- (id)footerFrameTreatment;
- (void)setFooterFrameTreatment:(id)arg1 momentary:(BOOL)arg2;
- (BOOL)columnHeaderFrameIsUppercase;
- (id)columnHeaderFrameTextColor;
- (id)columnHeaderFrameTextStyle;
- (long long)columnHeaderFrameTextVerticalAlignment;
- (unsigned long long)columnHeaderFrameTextHorizontalAlignment;
- (double)columnHeaderFrameHeight;
- (double)columnHeaderFrameWidth;
- (double)columnHeaderFrameRelativeY;
- (id)columnHeaderFrameTreatment;
- (void)setColumnHeaderFrameTreatment:(id)arg1 momentary:(BOOL)arg2;
- (long long)headerFrameTextVerticalAlignment;
- (unsigned long long)headerFrameTextHorizontalAlignment;
- (id)headerFrameTextColor;
- (id)headerFrameTextStyle;
- (double)headerFrameHeight;
- (double)headerFrameWidth;
- (double)headerFrameRelativeY;
- (id)headerFrameTreatment;
- (void)setHeaderFrameTreatment:(id)arg1 momentary:(BOOL)arg2;
- (long long)cellDataTextVerticalAlignment;
- (unsigned long long)cellDataTextHorizontalAlignment;
- (id)cellDataTextColor;
- (id)cellDataTextStyle;
- (long long)cellEventTextVerticalAlignment;
- (unsigned long long)cellEventTextHorizontalAlignment;
- (id)cellEventTextColor;
- (id)cellEventTextStyle;
- (long long)cellEventDayTextVerticalAlignment;
- (unsigned long long)cellEventDayTextHorizontalAlignment;
- (id)cellEventDayTextColor;
- (id)cellEventDayTextStyle;
- (id)cellPrevNextMonthTextColor;
- (long long)cellDayTextVerticalAlignment;
- (unsigned long long)cellDayTextHorizontalAlignment;
- (id)cellDayTextColor;
- (id)cellDayTextStyle;
- (id)cellPhotoRotations;
- (id)cellPhotoTreatment;
- (void)setCellPhotoTreatment:(id)arg1 momentary:(BOOL)arg2;
- (double)cellPaddingTop;
- (double)cellPaddingBottom;
- (double)cellPadding;
- (id)cellTreatment;
- (void)setCellTreatment:(id)arg1 momentary:(BOOL)arg2;
- (double)verticalCellSpacing;
- (void)setVerticalCellSpacing:(double)arg1 momentary:(BOOL)arg2;
- (double)horizontalCellSpacing;
- (void)setHorizontalCellSpacing:(double)arg1 momentary:(BOOL)arg2;
- (double)columnHeaderAmount;
- (double)footerAmount;
- (double)headerAmount;
- (id)calendarTreatment;
- (void)setCalendarTreatment:(id)arg1 momentary:(BOOL)arg2;
- (id)snapshotPhotoFrameWithSize:(struct CGSize)arg1;
- (void)calculateAutoZoom:(double *)arg1 andPan:(CDStruct_e9d111b7 *)arg2 forPhoto:(id)arg3;
- (void)autoZoomAndCrop;
- (CDStruct_e9d111b7)boundedPhotoPan:(CDStruct_e9d111b7)arg1;
- (unsigned long long)photoPanDirections;
- (void)setUserHasPannedZoomedPhoto:(BOOL)arg1;
- (BOOL)userHasPannedZoomedPhoto;
- (void)setPhotoFitAlign:(long long)arg1;
- (long long)photoFitAlign;
- (void)setPhotoFitMode:(long long)arg1;
- (long long)photoFitMode;
- (void)setMirrorModeMask:(unsigned long long)arg1;
- (unsigned long long)mirrorModeMask;
- (BOOL)mirrorVertical;
- (BOOL)mirrorHorizontal;
- (void)setPhotoEffects:(id)arg1 momentary:(BOOL)arg2;
- (id)photoEffects;
- (id)ensureAvailableEffects;
- (void)setImageRotation:(float)arg1 momentary:(BOOL)arg2;
- (float)imageRotation;
- (void)setPhotoZoom:(double)arg1 momentary:(BOOL)arg2;
- (void)setPhotoZoom:(double)arg1;
- (double)photoZoom;
- (void)setPhotoUnitZoom:(double)arg1 momentary:(BOOL)arg2;
- (double)photoUnitZoom;
- (void)validatePhotoPan;
- (void)undoRedoSetPhotoPan:(CDStruct_e9d111b7)arg1;
- (void)setPhotoPan:(CDStruct_e9d111b7)arg1 momentary:(BOOL)arg2;
- (CDStruct_e9d111b7)photoPan;
- (id)photoAspectRatioString;
- (double)photoAspectRatio;
- (double)photoResolution;
- (struct CGRect)imageRectForScale:(double)arg1;
- (struct CGSize)imageSize;
- (void)setPhotoAlpha:(double)arg1 momentary:(BOOL)arg2;
- (void)setPhotoAlpha:(double)arg1;
- (double)photoAlpha;
- (void)setPhotoTreatment:(id)arg1 momentary:(BOOL)arg2;
- (id)photoTreatment;
- (id)sourceValueForKey:(id)arg1;
- (void)_setProjectPhotoId:(long long)arg1 momentary:(BOOL)arg2;
- (long long)_projectPhotoId;
- (void)_setImageKey:(id)arg1 momentary:(BOOL)arg2;
- (id)_imageKey;
- (void)_removeImage;
- (BOOL)hasOrientationBehavior;
- (BOOL)isChangingOrientation;
- (void)setIsChangingOrientation:(BOOL)arg1;
- (void)setPhotoContentChanged;
- (void)adjustForPhotoAspectRatio;
- (void)setPhoto:(id)arg1 shouldAutoZoomAndCrop:(BOOL)arg2 momentary:(BOOL)arg3 sendPlacementNotification:(BOOL)arg4 storePreviousPhotoInfo:(BOOL)arg5;
- (void)setPhoto:(id)arg1 shouldAutoZoomAndCrop:(BOOL)arg2 momentary:(BOOL)arg3 sendPlacementNotification:(BOOL)arg4;
- (void)undoRedoSetPhoto:(id)arg1 shouldAutoZoomAndCrop:(BOOL)arg2 momentary:(BOOL)arg3 sendPlacementNotification:(BOOL)arg4 storePreviousPhotoInfo:(BOOL)arg5;
- (void)undoRedoSetPhoto:(id)arg1 shouldAutoZoomAndCrop:(BOOL)arg2 momentary:(BOOL)arg3 sendPlacementNotification:(BOOL)arg4;
- (void)setPhoto:(id)arg1 sendPlacementNotification:(BOOL)arg2;
- (void)setPhoto:(id)arg1;
- (void)undoRedoSetPhoto:(id)arg1 shouldAutoZoomAndCrop:(BOOL)arg2;
- (void)undoRedoSetPhoto:(id)arg1 zoom:(double)arg2 pan:(CDStruct_e9d111b7)arg3;
- (struct CGRect)rectForScale:(double)arg1 ifUsingPhoto:(id)arg2;
- (id)photoContentErrors;
- (BOOL)hasPhotoContentIssues;
- (BOOL)hasInvalidPhoto;
- (BOOL)hasMissingPhoto;
- (BOOL)hasPhoto;
- (id)photoOrientationString;
- (unsigned long long)photoOrientation;
- (id)thumbnailImageIfCached;
- (id)thumbnailImage;
- (id)imageSuitableForSize:(struct CGSize)arg1;
- (id)imageFilename;
- (BOOL)imageValid;
- (BOOL)imageExists;
- (id)photoInfo;
- (id)photo;
- (id)photoId;
- (BOOL)fieldNavigationEnabled;
- (void)setFieldNavigationEnabled:(BOOL)arg1;
- (void)setUsesTextOnlyBehavior:(BOOL)arg1;
- (BOOL)usesTextOnlyBehavior;
- (void)setSecondaryText:(BOOL)arg1;
- (BOOL)secondaryText;
- (void)setPrimaryText:(BOOL)arg1;
- (BOOL)primaryText;
- (BOOL)textFrameAutoColor;
- (void)setTextFrameAutoColor:(BOOL)arg1;
- (BOOL)placeholderTextOnHoverOnly;
- (void)setPlaceholderTextOnHoverOnly:(BOOL)arg1;
- (BOOL)shrinksTextToFit;
- (void)setTextFrameResizeAnchor:(unsigned long long)arg1;
- (unsigned long long)textFrameResizeAnchor;
- (unsigned long long)defaultTextFrameResizeAnchorForAlignment;
- (void)setTextMaxFrameSize:(CDStruct_c8ab8c46)arg1;
- (CDStruct_c8ab8c46)textMaxFrameSize;
- (BOOL)hasTextMaxFrameSize;
- (void)setTextMinFrameSize:(CDStruct_c8ab8c46)arg1;
- (CDStruct_c8ab8c46)textMinFrameSize;
- (BOOL)hasTextMinFrameSize;
- (BOOL)textFrameResizable;
- (void)setTextFrameResizable:(BOOL)arg1;
- (void)setPrototypeVerticalAlignment:(long long)arg1;
- (void)setVerticalAlignment:(long long)arg1 momentary:(BOOL)arg2;
- (long long)verticalAlignment;
- (void)setPrototypeHorizontalAlignment:(unsigned long long)arg1;
- (void)setHorizontalAlignment:(unsigned long long)arg1 momentary:(BOOL)arg2;
- (unsigned long long)horizontalAlignment;
- (void)setColumns:(long long)arg1;
- (long long)columns;
- (BOOL)isUppercase;
- (void)setIsUppercase:(BOOL)arg1 momentary:(BOOL)arg2;
- (void)setKerning:(double)arg1;
- (double)kerning;
- (double)leading;
- (double)lineSpacing;
- (void)setHasUserEditedColor:(BOOL)arg1;
- (BOOL)hasUserEditedColor;
- (void)setPrototypeTextColor:(id)arg1;
- (void)setTextColor:(id)arg1 momentary:(BOOL)arg2;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)setForceTextAlignment:(BOOL)arg1;
- (BOOL)forceTextAlignment;
- (void)setForceDefaultTextColor:(BOOL)arg1 momentary:(BOOL)arg2;
- (BOOL)forceDefaultTextColor;
- (void)setForceDefaultTextStyle:(BOOL)arg1;
- (BOOL)forceDefaultTextStyle;
- (id)projectTextStyle;
- (void)setPrototypeTextStyle:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (void)setTextStyle:(id)arg1 momentary:(BOOL)arg2;
- (id)textStyle;
- (id)cachedTextStyle;
- (void)cacheTextStyle:(id)arg1;
- (void)setHasClippedText:(BOOL)arg1 momentary:(BOOL)arg2;
- (BOOL)hasClippedText;
- (void)setHasBoilerplateText:(BOOL)arg1 momentary:(BOOL)arg2;
- (BOOL)hasBoilerplateText;
- (BOOL)hasUserEditedText;
- (BOOL)hasEmptyText;
- (BOOL)textMatchesMaster;
- (BOOL)isSubtitle;
- (BOOL)isTitle;
- (void)setTextUsageMask:(unsigned long long)arg1 momentary:(BOOL)arg2;
- (unsigned long long)textUsageMask;
- (void)setTextType:(unsigned long long)arg1 momentary:(BOOL)arg2;
- (unsigned long long)textType;
- (void)setPlaceholderText:(id)arg1 momentary:(BOOL)arg2;
- (id)placeholderText;
- (void)setRichText:(id)arg1 momentary:(BOOL)arg2;
- (id)richText;
- (id)usageTag;
- (void)setRawText:(id)arg1 momentary:(BOOL)arg2;
- (id)rawText;
- (void)setTextTreatment:(id)arg1 momentary:(BOOL)arg2;
- (id)textTreatment;
- (id)captionKeysToPreserve;
- (id)textContentErrors;
- (BOOL)hasTextContentIssues;
- (void)fitTextStorageToFrameWithMode:(unsigned long long)arg1;
- (void)applyStyleAttributesWithForce:(BOOL)arg1;
- (void)applyStyleAttributes;
- (id)attributedString;
- (id)stringAttributes;
- (id)smartTextForRawText:(id)arg1;
- (id)convertedString;
- (void)textAttributesDidChangeExternally;
- (void)textDidChangeExternally:(id)arg1 momentary:(BOOL)arg2;
- (void)doneEditing;
- (void)textDidChange;
- (void)setupTextContainers;
- (id)textContainers;
- (struct CGSize)preferredTextFrameSize;
- (void)addType1FontsToSet:(id)arg1;
- (void)_cacheUserHilitedRegionIds:(id)arg1;
- (id)_cachedUserHilitedRegionIds;
- (void)_persistMapMarkers:(id)arg1;
- (id)_loadMapMarkersFromAttribute:(id)arg1;
- (void)_resequenceMapMarkers:(id)arg1;
- (void)_cacheMapMarkers:(id)arg1;
- (id)_cachedMapMarkers;
- (id)_mapAnnotationCache;
- (BOOL)_allowDefaultMapMarkerRefresh;
- (id)_chronologicalUniquePlacesFromPhotos:(id)arg1;
- (id)_buildDefaultMapMarkersFromPhotos:(id)arg1;
- (id)_photoInfosForMapMarkerDefaultDomainId:(int)arg1;
- (id)_buildDefaultMapMarkers;
- (void)refreshMapHUD;
- (void)persistMapMarkers;
- (id)mapUserHilitedRegionLocations;
- (id)mapUserHilitedRegionIds;
- (void)setMapUserHilitedRegionLocations:(id)arg1;
- (void)setMapRegionUserHilited:(BOOL)arg1 atPoint:(struct CGPoint)arg2 scale:(double)arg3;
- (void)setMapRegionUserHilited:(BOOL)arg1 withRegionId:(id)arg2;
- (void)setMapRegionUserHilited:(BOOL)arg1 atLocation:(struct CGPoint)arg2;
- (struct CGPoint)mapLocationAtPoint:(struct CGPoint)arg1 scale:(double)arg2;
- (id)mapRegionIdAtLocation:(struct CGPoint)arg1;
- (id)mapRegionIdAtPoint:(struct CGPoint)arg1 scale:(double)arg2;
- (id)mapMarkerAtPoint:(struct CGPoint)arg1 scale:(double)arg2;
- (void)moveMapRegionLabelWithRegionId:(id)arg1;
- (void)resetMap;
- (BOOL)mapInvalidateDefaultMapMarkers;
- (int)mapDefaultMapMarkerDomainId;
- (BOOL)mapTitleCanBeVisible;
- (void)setMapType:(int)arg1;
- (int)mapType;
- (void)setMapTitle:(id)arg1;
- (id)mapTitle;
- (void)setMapTitleHidden:(BOOL)arg1;
- (BOOL)mapTitleHidden;
- (void)setMapTitleAlignment:(int)arg1 momentary:(BOOL)arg2;
- (int)mapTitleAlignment;
- (void)setMapCompassAlignment:(int)arg1 momentary:(BOOL)arg2;
- (int)mapCompassAlignment;
- (void)setMapCompassHidden:(BOOL)arg1;
- (BOOL)mapCompassHidden;
- (void)setMapTexturesAndShadowsEnabled:(BOOL)arg1;
- (BOOL)mapTexturesAndShadowsEnabled;
- (void)setMapRegionLabelsHidden:(BOOL)arg1;
- (BOOL)mapRegionLabelsHidden;
- (void)setMapMarkerLabelsHidden:(BOOL)arg1;
- (BOOL)mapMarkerLabelsHidden;
- (void)centerAndZoomMapDefault;
- (void)centerAndZoomMapAroundAllMarkers;
- (void)centerAndZoomMapAroundMarkers;
- (void)centerAndZoomMapAroundVisibleMarkers;
- (void)setMapUserHasAlteredMapStyle:(BOOL)arg1;
- (BOOL)mapUserHasAlteredMapStyle;
- (void)setMapUserHasPannedZoomedMap:(BOOL)arg1;
- (BOOL)mapUserHasPannedZoomedMap;
- (void)setMapUserHasAlteredMapMarkerList:(BOOL)arg1;
- (BOOL)mapUserHasAlteredMapMarkerList;
- (id)mapRegionIdsForMapMarkers;
- (id)mapMarkers;
- (void)moveMapMarkerAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllMapMarkers;
- (void)resetDefaultMapMarkers;
- (void)removeMapMarker:(id)arg1;
- (void)removeMapMarkerAtIndex:(unsigned long long)arg1;
- (id)addMapMarkerAtLocation:(struct CGPoint)arg1;
- (id)addMapMarkerAtPoint:(struct CGPoint)arg1 scale:(double)arg2;
- (id)uniqueDefaultLabel;
- (id)addMapMarkerWithLabel:(id)arg1 atLocation:(struct CGPoint)arg2;
- (id)addMapMarkerWithLabel:(id)arg1 atPoint:(struct CGPoint)arg2 scale:(double)arg3;
- (id)mapMarkerAtIndex:(unsigned long long)arg1;
- (void)setMapMarkerConnectorStyle:(int)arg1;
- (int)mapMarkerConnectorStyle;
- (void)setMapMarkerConnectorsClosePath:(BOOL)arg1;
- (BOOL)mapMarkerConnectorsClosePath;
- (void)setMapMarkerConnectorsHidden:(BOOL)arg1;
- (BOOL)mapMarkerConnectorsHidden;
- (id)availableMapStyleConfigurationIds;
- (id)mapStyleVariantKey;
- (unsigned long long)mapMotionState;
- (id)mapStyleConfiguration;
- (void)setMapStyleConfiguration:(id)arg1;
- (struct CGPoint)userDefaultCoordinate;
- (struct CGPoint)findLogicalCoordinate;
- (id)userDefaultLocation;
- (struct CGPoint)mapSpan;
- (void)setMapSpan:(struct CGPoint)arg1 momentary:(BOOL)arg2;
- (struct CGPoint)mapCenterLatLong;
- (void)setMapCenterLatLong:(struct CGPoint)arg1 momentary:(BOOL)arg2;
- (double)mapUnitZoomTransient;
- (double)mapUnitZoom;
- (void)setMapUnitZoom:(double)arg1 momentary:(BOOL)arg2;
- (CDStruct_e9d111b7)mapPan;
- (void)setMapPan:(CDStruct_e9d111b7)arg1 momentary:(BOOL)arg2;
- (id)mapCamera;
- (void)setMapCamera:(id)arg1 momentary:(BOOL)arg2;
- (void)setMapTreatment:(id)arg1 momentary:(BOOL)arg2;
- (id)mapTreatment;
- (struct CGPath *)selectionPathAtScale:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

