//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class OADBackdrop, OADCamera, OADLightRig;

@interface OADScene3D : NSObject <NSCopying>
{
    OADCamera *mCamera;
    OADLightRig *mLightRig;
    OADBackdrop *mBackdrop;
}

+ (id)nullScene3D;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setBackdrop:(id)arg1;
- (id)backdrop;
- (void)setLightRig:(id)arg1;
- (id)lightRig;
- (void)setCamera:(id)arg1;
- (id)camera;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

