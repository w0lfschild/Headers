//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDKnob.h"

@class CAShapeLayer, TSDBezierNode;

@interface TSDPathKnob : TSDKnob
{
    TSDBezierNode *mNode;
    TSDBezierNode *mNextNode;
    TSDBezierNode *mPrevNode;
    unsigned long long mSubpathIndex;
    unsigned long long mNodeIndex;
    double mParametricT;
    double mBendParameter;
    BOOL mHovering;
    BOOL mHoveringSharp;
    CAShapeLayer *mHandleLine;
}

@property(nonatomic) double bendParameter; // @synthesize bendParameter=mBendParameter;
@property(nonatomic) unsigned long long subpathIndex; // @synthesize subpathIndex=mSubpathIndex;
@property(nonatomic) double tValue; // @synthesize tValue=mParametricT;
@property(nonatomic) unsigned long long nodeIndex; // @synthesize nodeIndex=mNodeIndex;
@property(retain, nonatomic) TSDBezierNode *prevNode; // @synthesize prevNode=mPrevNode;
@property(retain, nonatomic) TSDBezierNode *nextNode; // @synthesize nextNode=mNextNode;
@property(retain, nonatomic) TSDBezierNode *node; // @synthesize node=mNode;
- (void)updatePositionWithTransform:(struct CGAffineTransform)arg1;
- (void)updateImage;
- (id)knobImage;
- (id)underlayLayerForRep:(id)arg1;
- (BOOL)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;
- (BOOL)overlapsWithKnob:(id)arg1;
- (BOOL)obscuresKnob:(id)arg1;
@property(nonatomic) BOOL hoveringSharp;
@property(nonatomic) BOOL hovering;
- (id)pathEditableRep;
- (void)dealloc;
- (id)p_knobHitPath;
- (id)initWithOutControlForNode:(id)arg1 onRep:(id)arg2;
- (id)initWithInControlForNode:(id)arg1 onRep:(id)arg2;
- (id)initWithNode:(id)arg1 onRep:(id)arg2;
- (id)initBendKnobOnRep:(id)arg1;

@end

