//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMattingSolverInternal : CIFilter
{
    CIImage *inputImage;
    CIImage *inputMainImage;
    CIImage *inputPredicateImage;
    NSNumber *inputRadius;
    NSNumber *inputSubsampling;
    NSNumber *inputEPS;
    NSNumber *inputNumIterations;
    NSNumber *inputErosionKernelSize;
    NSNumber *inputUseDepthFilter;
    NSNumber *inputFGThresholdValue;
    NSNumber *inputBGThresholdValue;
}

+ (id)customAttributes;
- (id)outputImage;

@end

