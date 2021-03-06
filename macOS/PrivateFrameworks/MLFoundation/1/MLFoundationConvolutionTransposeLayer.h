//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MLFoundation/MLFoundationLayer.h>

#import <MLFoundation/MLFoundationLayerCompiling-Protocol.h>

@class MLFoundationConvolutionDescriptor, MLFoundationTensor;

@interface MLFoundationConvolutionTransposeLayer : MLFoundationLayer <MLFoundationLayerCompiling>
{
    int _accumulatorPrecisionOption;
    MLFoundationConvolutionDescriptor *_descriptor;
    MLFoundationTensor *_weights;
}

+ (id)layerWithWeights:(id)arg1 descriptor:(id)arg2;
+ (id)new;
@property(readonly, nonatomic) MLFoundationTensor *weights; // @synthesize weights=_weights;
@property(readonly, nonatomic) MLFoundationConvolutionDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) int accumulatorPrecisionOption; // @synthesize accumulatorPrecisionOption=_accumulatorPrecisionOption;
- (void).cxx_destruct;
- (id)description;
- (void)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)initWithWeights:(id)arg1 descriptor:(id)arg2;
- (id)init;

@end

