//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIDataSourceSnapshotter.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListSnapshotter : _UIDataSourceSnapshotter
{
    NSIndexSet *_topSeparators;
    NSIndexSet *_bottomSeparators;
    BOOL _displaysAdditionalSeparators;
}

+ (id)snapshotWithSectionCountsProvider:(CDUnknownBlockType)arg1 topBottomSeparatorProvider:(CDUnknownBlockType)arg2 displaysAdditionalSeparators:(BOOL)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL displaysAdditionalSeparators; // @synthesize displaysAdditionalSeparators=_displaysAdditionalSeparators;
- (BOOL)hasBottomSeparatorInSection:(long long)arg1;
- (BOOL)hasTopSeparatorInSection:(long long)arg1;
- (id)initWithSectionCountsProvider:(CDUnknownBlockType)arg1 topBottomSeparatorProvider:(CDUnknownBlockType)arg2 displaysAdditionalSeparators:(BOOL)arg3;

@end

