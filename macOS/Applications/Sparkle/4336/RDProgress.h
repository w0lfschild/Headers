//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface RDProgress : NSObject <NSCopying>
{
    BOOL _done;
    NSString *_name;
    double _value;
    NSArray *_steps;
    RDProgress *_parent;
    struct RDProgressRange _range;
}

@property(nonatomic) __weak RDProgress *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(nonatomic) BOOL done; // @synthesize done=_done;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) struct RDProgressRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)updateValues;
- (void)progressUpdateWithValue:(double)arg1;
- (void)progressUpdateWithDelta:(double)arg1;
- (void)progressUpdate;
- (id)progressWithName:(id)arg1;
- (id)progressAtStep:(long long)arg1;
- (double)length;
- (long long)stepsCount;
- (id)lastStep;
- (id)currentStep;
- (void)setProgressRange:(struct RDProgressRange)arg1 withStepsCount:(long long)arg2;
- (id)initWithRange:(struct RDProgressRange)arg1 withSteps:(id)arg2;
- (void)setProgressRange:(struct RDProgressRange)arg1 withStepsRanges:(id)arg2;
- (id)initWithStepsRanges:(id)arg1;
- (id)initWithRange:(struct RDProgressRange)arg1 withstepsRanges:(id)arg2;
- (id)initWithRange:(struct RDProgressRange)arg1 withStepsCount:(long long)arg2;
- (id)initWithRange:(struct RDProgressRange)arg1;
- (id)compareWithProgress:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

