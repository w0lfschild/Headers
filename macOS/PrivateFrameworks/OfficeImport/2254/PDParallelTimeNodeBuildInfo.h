//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDParallelTimeNodeBuildInfo : NSObject
{
    PDAnimationTarget *mTarget;
    double mDelay;
    double mDuration;
    int mIterateType;
    id mValue;
}

- (void).cxx_destruct;
@property(retain) id value; // @synthesize value=mValue;
@property int iterateType; // @synthesize iterateType=mIterateType;
@property double duration; // @synthesize duration=mDuration;
@property double delay; // @synthesize delay=mDelay;
@property(retain) PDAnimationTarget *target; // @synthesize target=mTarget;

@end

