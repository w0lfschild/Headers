//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapItem, NSString, RAPPlacecardImageryLayoutManager, UIBarButtonItem, UIViewController, geo_isolater;
@protocol GEOMapItemPhoto;

__attribute__((visibility("hidden")))
@interface UGCReportImageryController : NSObject
{
    RAPPlacecardImageryLayoutManager *_layoutManager;
    UIViewController *_presentingViewController;
    UIBarButtonItem *_barButtonItem;
    id <GEOMapItemPhoto> _geoPhoto;
    MKMapItem *_mapItem;
    NSString *_photoURL;
    BOOL _shouldCancelPresentation;
    geo_isolater *_downloadIsolator;
}

- (void).cxx_destruct;
- (void)cancelPresentation;
- (void)fetchLayoutAndPresentWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMapItem:(id)arg1 reportedPhoto:(id)arg2 presentingViewController:(id)arg3;

@end

