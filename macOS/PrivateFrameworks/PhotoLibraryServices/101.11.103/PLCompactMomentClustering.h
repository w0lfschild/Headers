//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLCompactMomentClustering : NSObject
{
}

- (id)_clusterAssetsWithUnusableLocation:(id)arg1;
- (id)_clusterAssetsWithUsableLocation:(id)arg1;
- (id)_assetClustersFromDataClusters:(id)arg1;
- (id)_mergeAssetClustersWithLocation:(id)arg1 withAssetClustersWithoutLocation:(id)arg2;
- (id)_runDBSCANClusteringWithAssets:(id)arg1;
- (id)createAssetClustersForAssetsInDay:(id)arg1;

@end

