//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/MSPSharedTripContact.h>

#import "MapsUIDiffableDataSourceIdentifiable-Protocol.h"

@class NSString;

@interface MSPSharedTripContact (MapsSuggestionsContact) <MapsUIDiffableDataSourceIdentifiable>
+ (id)contactValuesFrom:(id)arg1;
+ (id)contactValueFrom:(id)arg1;
+ (void)_maps_prepareForFirstUse;
- (id)suggestionContactValue;
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

