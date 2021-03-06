//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WaypointRequest-Protocol.h"

@class CNContact, GEOMapItemClientAttributes, MKMapItem, NSString;

__attribute__((visibility("hidden")))
@interface AddressBookAddressWaypointRequest : NSObject <WaypointRequest>
{
    CNContact *_contact;
    GEOMapItemClientAttributes *_clientAttributes;
    NSString *_addressString;
    MKMapItem *_mapItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
@property(readonly, nonatomic) GEOMapItemClientAttributes *clientAttributes; // @synthesize clientAttributes=_clientAttributes;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)_clientAttributesForAddress:(id)arg1;
- (void)recordRAPInformation:(id)arg1;
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic, getter=isCurrentLocation) BOOL currentLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddressString:(id)arg1 clientAttributes:(id)arg2 contact:(id)arg3 mapItem:(id)arg4;
- (id)initWithAddress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

