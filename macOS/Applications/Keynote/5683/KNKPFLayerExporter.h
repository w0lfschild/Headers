//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNKPFAnimationExporter, KNKPFAssetExporter, KNKPFInitialStateExporter;

@interface KNKPFLayerExporter : NSObject
{
    KNKPFAssetExporter *_assetExporter;
    KNKPFInitialStateExporter *_initialStateExporter;
    KNKPFAnimationExporter *_animationExporter;
}

- (void).cxx_destruct;
- (id)exportLayer:(id)arg1 exportInfo:(id)arg2 error:(id *)arg3;
- (id)p_exportTexturedRectangleForLayer:(id)arg1 exportInfo:(id)arg2;
- (id)initWithAssetExporter:(id)arg1;

@end

