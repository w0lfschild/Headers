//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import "TSKSelectionTransformer-Protocol.h"

@class NSSet, NSString, TPSectionSelection, TSKSelection, TSUUUIDPath;

@interface TPSectionSelectionTransformer : TSPObject <TSKSelectionTransformer>
{
    TPSectionSelection *_originalSelection;
    TSUUUIDPath *_storageUUIDPath;
    NSSet *_sectionUUIDPaths;
    BOOL _shadowedByTransform;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isShadowedByTransform) BOOL shadowedByTransform; // @synthesize shadowedByTransform=_shadowedByTransform;
- (id)nextSelectionTransformerForSelection:(id)arg1;
@property(readonly, nonatomic) TSKSelection *transformedSelection;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSectionSelectionTransformer:(id)arg1;
- (id)initWithContext:(id)arg1 sectionSelection:(id)arg2 storageUUIDPath:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

