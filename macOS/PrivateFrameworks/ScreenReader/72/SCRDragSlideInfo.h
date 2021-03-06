//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCRDragSlideInfo : NSObject
{
    double _duration;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (id)dragSlideInfoWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (id)initWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;

@end

