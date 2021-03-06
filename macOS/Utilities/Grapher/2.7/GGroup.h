//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDrawingObject.h"

@class NSArray;

@interface GGroup : GDrawingObject
{
    NSArray *mObjects;
    BOOL mTempDontScaleObjects;
}

+ (struct CGRect)boundingRectForObjects:(id)arg1;
+ (id)group:(id)arg1;
+ (id)defaultAttributes;
- (BOOL)automaticPinPosition:(struct CGPoint *)arg1;
- (void)moveBy:(struct CGSize)arg1;
- (void)rotateBoundsByDegrees:(double)arg1 aroundPoint:(struct CGPoint)arg2;
- (double)rotationAngle;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (void)setBounds:(struct CGRect)arg1;
- (BOOL)touchedByViewRect:(struct CGRect)arg1;
- (id)objects;
- (void)drawSelection;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateContentFrame;
- (void)ungroup;
- (void)dealloc;
- (id)initWithView:(id)arg1 objects:(id)arg2;
- (BOOL)canBeEncodedIndependently;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

