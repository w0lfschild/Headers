//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSSStylePropertyChangeSet.h"

#import "GSSPAutoEncodable-Protocol.h"

@class TSDSpecShadow, TSSSpecColor, TSSSpecInteger, TSSSpecString, TSWPSpecListStyleBoolArray, TSWPSpecListStyleFloatArray, TSWPSpecListStyleImageDataArray, TSWPSpecListStyleListLabelGeometryArray, TSWPSpecListStyleListLabelTypeArray, TSWPSpecListStyleListNumberTypeArray, TSWPSpecListStyleStringArray;

@interface TSWPListStylePropertyChangeSet : TSSStylePropertyChangeSet <GSSPAutoEncodable>
{
    TSSSpecColor *_fontColor;
    TSSSpecString *_fontName;
    TSWPSpecListStyleFloatArray *_listClassicTextIndentArray;
    TSWPSpecListStyleListLabelGeometryArray *_listLabelGeometryArray;
    TSWPSpecListStyleImageDataArray *_listLabelImageDataArray;
    TSWPSpecListStyleFloatArray *_listLabelIndentArray;
    TSWPSpecListStyleListNumberTypeArray *_listLabelNumberArray;
    TSWPSpecListStyleBoolArray *_listLabelTieredNumberArray;
    TSDSpecShadow *_textShadow;
    TSWPSpecListStyleStringArray *_listLabelStringArray;
    TSWPSpecListStyleFloatArray *_listTextIndentArray;
    TSWPSpecListStyleListLabelTypeArray *_listLabelTypeArray;
    TSSSpecInteger *_writingDirection;
    BOOL _definedFontColor;
    BOOL _definedFontName;
    BOOL _definedListClassicTextIndentArray;
    BOOL _definedListLabelGeometryArray;
    BOOL _definedListLabelImageDataArray;
    BOOL _definedListLabelIndentArray;
    BOOL _definedListLabelNumberArray;
    BOOL _definedListLabelTieredNumberArray;
    BOOL _definedTextShadow;
    BOOL _definedListLabelStringArray;
    BOOL _definedListTextIndentArray;
    BOOL _definedListLabelTypeArray;
    BOOL _definedWritingDirection;
}

+ (id)newFromArchive:(const struct ListStylePropertyChangeSetArchive *)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct ListStylePropertyChangeSetArchive *)arg2 archiver:(id)arg3;
- (void).cxx_destruct;
- (void)enumerateDefinedPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)setUnsetSpecForProperty:(int)arg1;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)populateGSSPListStylePropertyChangeSet:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (id)initListStylePropertyChangeSetWithArchive:(const struct ListStylePropertyChangeSetArchive *)arg1 unarchiver:(id)arg2;
- (void)saveListStylePropertyChangeSetToArchive:(struct ListStylePropertyChangeSetArchive *)arg1 archiver:(id)arg2;

@end

