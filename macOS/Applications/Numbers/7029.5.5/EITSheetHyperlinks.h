//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, TSUMutablePointerSet;

@interface EITSheetHyperlinks : NSObject
{
    NSMutableSet *_sheetHyperlinkMappingInfos;
    TSUMutablePointerSet *_drawableSheetHyperlinkFields;
}

+ (id)sheetURLForLocation:(id)arg1 state:(id)arg2;
+ (id)sheetNameFromCellRegionName:(id)arg1 state:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TSUMutablePointerSet *drawableSheetHyperlinkFields; // @synthesize drawableSheetHyperlinkFields=_drawableSheetHyperlinkFields;
@property(retain, nonatomic) NSMutableSet *sheetHyperlinkMappingInfos; // @synthesize sheetHyperlinkMappingInfos=_sheetHyperlinkMappingInfos;
- (void)collectDrawableSheetHyperlinkField:(id)arg1;
- (void)mapSheetHyperlinks:(id)arg1;
- (void)addSheetHyperlink:(id)arg1 atCell:(struct TSUCellCoord)arg2 tableName:(id)arg3 sheetName:(id)arg4;
- (id)init;

@end

