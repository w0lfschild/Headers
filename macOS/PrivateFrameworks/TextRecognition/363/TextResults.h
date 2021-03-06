//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface TextResults : NSObject
{
    NSArray *_cols;
    NSMutableArray *_mutableCols;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableCols; // @synthesize mutableCols=_mutableCols;
@property(retain, nonatomic) NSArray *cols; // @synthesize cols=_cols;
- (id)transcriptionOfPath:(id)arg1 tokenProcessingBlock:(CDUnknownBlockType)arg2;
- (void)sortCols;
@property(readonly) unsigned long long colCount;
- (void)addColumn:(id)arg1;
- (id)init;

@end

