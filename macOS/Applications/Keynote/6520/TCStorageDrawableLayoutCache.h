//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCAtomicLoadDrawableLayoutCache.h"

@class TSWPColumn;

@interface TCStorageDrawableLayoutCache : TCAtomicLoadDrawableLayoutCache
{
    TSWPColumn *_column;
    struct CGSize _maxSize;
}

@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(retain, nonatomic) TSWPColumn *column; // @synthesize column=_column;
- (void).cxx_destruct;
- (void)loadLayouts;
- (struct CGSize)protected_maxInlineSizeForWPLayout:(id)arg1;
- (id)protected_topLayouts;
- (id)initWithDocumentState:(id)arg1 client:(id)arg2 storage:(id)arg3 maxSize:(struct CGSize)arg4;

@end

