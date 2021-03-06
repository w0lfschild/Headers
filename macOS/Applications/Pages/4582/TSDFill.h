//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDPathPainter-Protocol.h"
#import "TSSPreset-Protocol.h"
#import "TSSPropertyCommandSerializing-Protocol.h"

@class NSString;

@interface TSDFill : NSObject <TSSPropertyCommandSerializing, GSSPAutoEncodable, TSDPathPainter, TSSPreset>
{
}

+ (BOOL)tsch_hasAllResourcesForFill:(id)arg1;
+ (id)instanceWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
+ (void)registerSubclass:(Class)arg1;
+ (id)p_subclassRegistry;
@property(readonly, nonatomic) NSString *presetKind;
- (int)fillType;
- (id)referenceColor;
- (BOOL)drawsInOneStep;
- (BOOL)isClear;
- (BOOL)isNearlyWhite;
- (BOOL)isOpaque;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;
- (BOOL)canApplyToCAShapeLayer;
- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;
- (BOOL)shouldBeReappliedToCALayer:(id)arg1;
- (BOOL)canApplyToCALayerByAddingSublayers;
- (BOOL)canApplyToCALayer;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(BOOL)arg4;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)icid_addMediaCompatibilityWarningsIfNeededToState:(id)arg1 forMediaContainer:(id)arg2;
@property(readonly, nonatomic) BOOL tsch_hasAllResources; // @dynamic tsch_hasAllResources;
- (id)convertForChartSeriesType:(id)arg1 context:(id)arg2;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPFill:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

