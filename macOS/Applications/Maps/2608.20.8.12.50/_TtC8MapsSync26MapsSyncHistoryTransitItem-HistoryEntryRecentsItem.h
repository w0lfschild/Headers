//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSync/_TtC8MapsSync26MapsSyncHistoryTransitItem.h>

#import "MSPHistoryEntryTransitLineItem-Protocol.h"

@class NSDate, NSString;
@protocol GEOTransitLineItem;

@interface _TtC8MapsSync26MapsSyncHistoryTransitItem (HistoryEntryRecentsItem) <MSPHistoryEntryTransitLineItem>
- (void)ifSearch:(CDUnknownBlockType)arg1 ifRoute:(CDUnknownBlockType)arg2 ifPlaceDisplay:(CDUnknownBlockType)arg3 ifTransitLineItem:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) id <GEOTransitLineItem> lineItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL tracksRAPReportingOnly;
@property(readonly, copy, nonatomic) NSDate *usageDate;
@end

