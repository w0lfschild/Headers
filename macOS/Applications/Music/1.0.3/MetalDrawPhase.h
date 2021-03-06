//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTKView, MTLRenderPassDescriptor;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice, MTLRenderCommandEncoder;

@interface MetalDrawPhase : NSObject
{
    MTKView *view;
    id <MTLDevice> device;
    id <MTLCommandQueue> commandQueue;
    struct MetalRenderer *renderer;
    struct MetalPipeline *currentPipeline;
    MTLRenderPassDescriptor *renderPassDescriptor;
    id <MTLCommandBuffer> commandBuffer;
    id <MTLRenderCommandEncoder> renderEncoder;
}

- (void)clearFrame:(struct vec3)arg1 clearColourBuffer:(BOOL)arg2 clearAlpha:(float)arg3 clearDepthBuffer:(BOOL)arg4 clearDepth:(float)arg5;
- (void)setVertexParam:(const void *)arg1 withLength:(unsigned long long)arg2 andFragParam:(const void *)arg3 ofSize:(long long)arg4;
- (void)setPipelineState:(struct IRenderingPipeline *)arg1;
- (void)drawVertices:(id)arg1 asPrimitive:(int)arg2 atStart:(unsigned int)arg3 count:(unsigned int)arg4;
- (void)setTexture:(struct ITexture *)arg1 withSamplerState:(id)arg2;
- (void)flush;
- (void)setWireFrame:(BOOL)arg1;
- (void)setRenderColor:(struct vec3)arg1 withAlpha:(float)arg2;
- (void)enableDepthTest:(int)arg1 andWritePerms:(int)arg2;
- (id)initWithDevice:(id)arg1 andQueue:(id)arg2 inView:(id)arg3 andRenderer:(struct MetalRenderer *)arg4;

@end

