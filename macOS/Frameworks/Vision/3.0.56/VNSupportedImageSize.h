//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class VNSizeRange;

@interface VNSupportedImageSize : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _cachedCalculatedHash;
    BOOL _orientationAgnostic;
    unsigned int _idealImageFormat;
    unsigned int _idealOrientation;
    VNSizeRange *_pixelsWideRange;
    VNSizeRange *_pixelsHighRange;
    unsigned long long _aspectRatioHandling;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic, getter=isOrientationAgnostic) BOOL orientationAgnostic; // @synthesize orientationAgnostic=_orientationAgnostic;
@property(readonly, nonatomic) unsigned int idealOrientation; // @synthesize idealOrientation=_idealOrientation;
@property(readonly, nonatomic) unsigned int idealImageFormat; // @synthesize idealImageFormat=_idealImageFormat;
@property(readonly, nonatomic) unsigned long long aspectRatioHandling; // @synthesize aspectRatioHandling=_aspectRatioHandling;
@property(readonly, nonatomic) VNSizeRange *pixelsHighRange; // @synthesize pixelsHighRange=_pixelsHighRange;
@property(readonly, nonatomic) VNSizeRange *pixelsWideRange; // @synthesize pixelsWideRange=_pixelsWideRange;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isAllowedPixelsWide:(unsigned long long)arg1 pixelsHigh:(unsigned long long)arg2;
- (id)initWithIdealFormat:(unsigned int)arg1 pixelsWideRange:(id)arg2 pixelsHighRange:(id)arg3 aspectRatioHandling:(unsigned long long)arg4 idealOrientation:(unsigned int)arg5 orientationAgnostic:(BOOL)arg6;

@end

