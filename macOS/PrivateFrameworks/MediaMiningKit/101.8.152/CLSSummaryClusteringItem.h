//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PLDataCluster;

@interface CLSSummaryClusteringItem : NSObject
{
    PLDataCluster *_cluster;
    unsigned long long _numberOfItemsToElect;
}

@property(readonly) unsigned long long numberOfItemsToElect; // @synthesize numberOfItemsToElect=_numberOfItemsToElect;
@property(readonly) PLDataCluster *cluster; // @synthesize cluster=_cluster;
- (void).cxx_destruct;
- (id)initWithCluster:(id)arg1 numberOfItemsToElect:(unsigned long long)arg2;

@end

