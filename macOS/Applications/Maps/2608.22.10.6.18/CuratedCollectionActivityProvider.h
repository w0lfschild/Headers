//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceActivityProvider.h>

@class GEOPlaceCollection, GEOPublisher, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CuratedCollectionActivityProvider : MKPlaceActivityProvider
{
    GEOPlaceCollection *_curatedCollection;
    NSArray *_refinedMapItems;
    GEOPublisher *_publisher;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOPublisher *publisher; // @synthesize publisher=_publisher;
@property(readonly, nonatomic) NSArray *refinedMapItems; // @synthesize refinedMapItems=_refinedMapItems;
@property(readonly, nonatomic) GEOPlaceCollection *curatedCollection; // @synthesize curatedCollection=_curatedCollection;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *title;
- (id)initWithPublisher:(id)arg1;
- (id)initWithCuratedCollection:(id)arg1 refinedMapItems:(id)arg2;

@end

