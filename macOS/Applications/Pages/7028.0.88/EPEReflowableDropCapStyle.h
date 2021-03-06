//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EPEDropCapStyle.h"

@class TSUBezierPath, TSWPColumn, TSWPStorage;

@interface EPEReflowableDropCapStyle : EPEDropCapStyle
{
    TSWPStorage *_adHocSubstorage;
    TSWPColumn *_adHocColumn;
    TSUBezierPath *_wrapPath;
    double _topOfFirstLine;
    double _lineHeight;
    double _baseline;
    double _capHeight;
    double _topMargin;
    double _bottomMargin;
    double _leftMargin;
    double _rightMargin;
    double _leftIndent;
    CDStruct_62efd7ad _textChunkSize;
    struct CGRect _dropCapVisibleBounds;
    struct CGRect _firstLineBounds;
    struct CGAffineTransform _dropCapImageAdjustXform;
    struct CGAffineTransform _textTransform;
}

+ (BOOL)lineFragmentAtIndex:(unsigned long long)arg1 overlapsVerticallyFirstLineFragmentInColumn:(id)arg2;
+ (struct CGRect)columnRelativeBoundsOfLineFragmentAtIndex:(unsigned long long)arg1 inColumn:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) double leftIndent; // @synthesize leftIndent=_leftIndent;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double capHeight; // @synthesize capHeight=_capHeight;
@property(nonatomic) double baseline; // @synthesize baseline=_baseline;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double topOfFirstLine; // @synthesize topOfFirstLine=_topOfFirstLine;
@property(nonatomic) struct CGRect firstLineBounds; // @synthesize firstLineBounds=_firstLineBounds;
@property(nonatomic) struct CGAffineTransform textTransform; // @synthesize textTransform=_textTransform;
@property(retain, nonatomic) TSUBezierPath *wrapPath; // @synthesize wrapPath=_wrapPath;
@property(nonatomic) struct CGAffineTransform dropCapImageAdjustXform; // @synthesize dropCapImageAdjustXform=_dropCapImageAdjustXform;
@property(nonatomic) struct CGRect dropCapVisibleBounds; // @synthesize dropCapVisibleBounds=_dropCapVisibleBounds;
@property(retain, nonatomic) TSWPColumn *adHocColumn; // @synthesize adHocColumn=_adHocColumn;
@property(nonatomic) CDStruct_62efd7ad textChunkSize; // @synthesize textChunkSize=_textChunkSize;
@property(retain, nonatomic) TSWPStorage *adHocSubstorage; // @synthesize adHocSubstorage=_adHocSubstorage;
- (void)addTransparentTextToInlineTextContainer:(id)arg1;
- (void)addSize:(struct CGSize)arg1 toDictionary:(id)arg2;
- (void)addInsets:(struct NSEdgeInsets)arg1 withPrefix:(id)arg2 toDictionary:(id)arg3;
- (void)addInset:(double)arg1 withName:(id)arg2 prefix:(id)arg3 toDictionary:(id)arg4;
- (void)addGeometricProperties:(id)arg1;
- (void)moveDropCapInsideBody;
- (id)wrapPathString;
- (struct NSEdgeInsets)margins;
- (void)computeHorizontalMargins;
- (void)addBasicProperties:(id)arg1;
- (void)mapToParagraphTextContainer:(id)arg1;
- (void)addTextIndentToParagraphProperties:(id)arg1;
- (void)addTopMarginAndPaddingToParagraphProperties:(id)arg1;
- (id)paragraphPropertiesForDropCap;
- (struct NSEdgeInsets)backTransformedInsets:(struct NSEdgeInsets)arg1;
- (struct CGSize)backTransformedSize:(struct CGSize)arg1;
- (struct CGRect)transformedTextBounds:(struct CGRect)arg1;
- (void)computeTextTransform;
- (id)startSideName;
- (int)startIndentProperty;
- (void)computeVerticalMargins;
- (void)transformGeometriesToComputationSpace;
- (void)fitVisibleBoundsOntoDesiredBounds;
- (void)computeCapHeightAndBaseline;
- (void)computeFirstLineBounds;
- (void)computeLineHeight;
- (void)completeAdHocColumn;
- (void)layOutAdHocStorage;
- (void)computeTextChunkSize;
- (void)createAdHocColumn;
- (void)fixDropCapNumberOfCharacters:(unsigned long long)arg1;
- (void)appendRemainderOfParagraphToAdHocStorage;
- (void)deleteAttachmentsFromAdHocStorage;
- (void)createAdHocSubstorage;
- (void)loadRemainingInfo;

@end

