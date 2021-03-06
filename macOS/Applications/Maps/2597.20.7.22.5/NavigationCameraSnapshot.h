//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class MKMapCamera, MNLocation;

__attribute__((visibility("hidden")))
@interface NavigationCameraSnapshot : NSObject <NSSecureCoding>
{
    MNLocation *_puckLocation;
    MKMapCamera *_camera;
    double _tracePlaybackTimeFraction;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) double tracePlaybackTimeFraction; // @synthesize tracePlaybackTimeFraction=_tracePlaybackTimeFraction;
@property(readonly, copy, nonatomic) MKMapCamera *camera; // @synthesize camera=_camera;
@property(readonly, nonatomic) MNLocation *puckLocation; // @synthesize puckLocation=_puckLocation;
@property(readonly, nonatomic) double puckToCenterY;
@property(readonly, nonatomic) double puckToCenterX;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithCamera:(id)arg1 tracePlaybackTimeFraction:(double)arg2 puckLocation:(id)arg3;

@end

