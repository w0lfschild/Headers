//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BiometricKitEnrollProgressCoordinates;

@interface BiometricKitEnrollProgressMergedComponent : NSObject
{
    long long _componentID;
    BiometricKitEnrollProgressCoordinates *_transformationCoordinates;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BiometricKitEnrollProgressCoordinates *transformationCoordinates; // @synthesize transformationCoordinates=_transformationCoordinates;
@property(nonatomic) long long componentID; // @synthesize componentID=_componentID;
- (void)dealloc;
- (id)init;

@end

