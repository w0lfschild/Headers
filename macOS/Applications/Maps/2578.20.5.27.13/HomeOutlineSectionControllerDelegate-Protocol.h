//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HomeOutlineSectionController, MapsUIDiffableDataSourceOutlineNodeSnapshot, NSIndexPath;

@protocol HomeOutlineSectionControllerDelegate <NSObject>
- (BOOL)isCollectionViewFocusedWithSectionController:(HomeOutlineSectionController *)arg1;
- (void)sectionController:(HomeOutlineSectionController *)arg1 applySnapshotAnimated:(BOOL)arg2 completion:(void (^)(void))arg3;
- (NSIndexPath *)sectionController:(HomeOutlineSectionController *)arg1 indexPathOfNodeSnapshot:(MapsUIDiffableDataSourceOutlineNodeSnapshot *)arg2;
- (MapsUIDiffableDataSourceOutlineNodeSnapshot *)sectionController:(HomeOutlineSectionController *)arg1 nodeSnapshotAtIndexPath:(NSIndexPath *)arg2;
@end

