//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICTable, ICTableAccessibilityController, NSMutableDictionary;

@interface ICTableAccessibilityElementProvider : NSObject
{
    ICTableAccessibilityController *_tableAXController;
    ICTable *_tableModel;
    NSMutableDictionary *_cellCache;
    NSMutableDictionary *_columnCache;
    NSMutableDictionary *_rowCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *rowCache; // @synthesize rowCache=_rowCache;
@property(retain, nonatomic) NSMutableDictionary *columnCache; // @synthesize columnCache=_columnCache;
@property(retain, nonatomic) NSMutableDictionary *cellCache; // @synthesize cellCache=_cellCache;
@property(readonly, nonatomic) ICTable *tableModel; // @synthesize tableModel=_tableModel;
@property(nonatomic) __weak ICTableAccessibilityController *tableAXController; // @synthesize tableAXController=_tableAXController;
- (id)rowElementForID:(id)arg1;
- (id)columnElementForID:(id)arg1;
- (void)removeElementsForRowID:(id)arg1;
- (void)removeElementsForColumnID:(id)arg1;
- (id)cellElementsForRowID:(id)arg1;
- (id)cellElementsForColumnID:(id)arg1;
- (id)cellElementForColumnID:(id)arg1 rowID:(id)arg2;
- (id)initWithTableAccessibilityController:(id)arg1;

@end

