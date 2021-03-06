//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSDEditableBezierPathSource, TSDPathKnobTracker;

@protocol TSDPathEditableRep <NSObject>
@property(readonly, nonatomic) struct CGAffineTransform naturalToEditablePathSpaceTransform;
@property(readonly, nonatomic) TSDEditableBezierPathSource *editablePathSource;
- (void)dynamicMovePathKnobDidEndWithTracker:(TSDPathKnobTracker *)arg1;
- (void)dynamicallyMovedPathKnobTo:(struct CGPoint)arg1 withTracker:(TSDPathKnobTracker *)arg2;
- (void)dynamicMovePathKnobDidBegin;
@end

