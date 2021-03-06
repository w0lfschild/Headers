//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RoutePlanningOutlineSection.h"

@class PreferenceValuesDataSource;
@protocol RoutePlanningActionDelegate;

__attribute__((visibility("hidden")))
@interface RoutePlanningActionsOutlineSection : RoutePlanningOutlineSection
{
    PreferenceValuesDataSource *_dataSource;
    long long _transportType;
    id <RoutePlanningActionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RoutePlanningActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (BOOL)shouldHighlightItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)viewForFooterInSection:(long long)arg1;
- (id)viewForHeaderInSection:(long long)arg1;
- (id)cellForItemAtIndexPath:(id)arg1;
- (BOOL)updateWithTransportType:(long long)arg1;
- (id)listLayoutSectionConfigurationAtIndex:(long long)arg1 layoutEnvironment:(id)arg2;
- (id)initWithCollectionView:(id)arg1 sectionIdentifier:(id)arg2;

@end

