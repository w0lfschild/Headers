//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVMetadataFaceObjectInternal : NSObject
{
    long long _faceID;
    BOOL _hasRollAngle;
    double _rollAngle;
    BOOL _hasYawAngle;
    double _yawAngle;
}

@property double yawAngle; // @synthesize yawAngle=_yawAngle;
@property BOOL hasYawAngle; // @synthesize hasYawAngle=_hasYawAngle;
@property double rollAngle; // @synthesize rollAngle=_rollAngle;
@property BOOL hasRollAngle; // @synthesize hasRollAngle=_hasRollAngle;
@property long long faceID; // @synthesize faceID=_faceID;

@end

