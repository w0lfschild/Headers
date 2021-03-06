//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDateInterval, NSString, PXBrowserSummaryController;
@protocol PXBrowserSelectionSnapshot, PXBrowserVisibleContentSnapshot;

@protocol PXBrowserSummaryControllerDataSource <NSObject>

@optional
@property(readonly, nonatomic) BOOL shouldShowImportDates;
- (BOOL)browserSummaryControllerShouldUpdateImmediately:(PXBrowserSummaryController *)arg1;
- (BOOL)isFilteringContainerContentForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (id <PXBrowserSelectionSnapshot>)selectionSnapshotForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (id <PXBrowserVisibleContentSnapshot>)visibleContentSnapshotForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSDateInterval *)containerDateIntervalForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSString *)localizedContainerItemsCountForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSString *)containerTitleForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
@end

