//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface SFAcousticFeature : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_acousticFeatureValuePerFrame;
    double _frameDuration;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) double frameDuration; // @synthesize frameDuration=_frameDuration;
@property(readonly, copy, nonatomic) NSArray *acousticFeatureValuePerFrame; // @synthesize acousticFeatureValuePerFrame=_acousticFeatureValuePerFrame;
- (id)description;
- (id)_initWithAcousticFeatureValue:(id)arg1 frameDuration:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

