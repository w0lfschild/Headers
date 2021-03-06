//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class NSString, NSURLSession;

@interface ChineseLocationURLProtocol : NSURLProtocol
{
    BOOL _stopped;
    NSString *_key;
    NSString *_action;
    NSURLSession *_session;
    struct CLLocationCoordinate2D _coordinate;
}

+ (id)resourceDictionaryFromBingGeoSpatialData:(id)arg1;
+ (id)knownActions;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)mapTileURLStringWithLatitude:(double)arg1 longitude:(double)arg2 targetSize:(struct CGSize)arg3 zoomLevel:(unsigned long long)arg4 mapFormat:(id)arg5;
+ (id)reverseGeocodeURLStringWithLatitude:(double)arg1 longitude:(double)arg2;
+ (id)chineseLocationURLProtocolScheme;
+ (void)initialize;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(retain) NSString *action; // @synthesize action=_action;
@property(retain) NSString *key; // @synthesize key=_key;
@property struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(getter=isStopped) BOOL stopped; // @synthesize stopped=_stopped;
- (void).cxx_destruct;
- (id)resourceDictionaryOrError:(id)arg1 response:(id)arg2;
- (void)handleFinalData:(id)arg1 response:(id)arg2;
- (void)performROWRequest:(id)arg1;
- (void)performChinaRequest:(id)arg1;
- (void)handleChinaShiftingData:(id)arg1 response:(id)arg2 geoSpatialInfo:(id)arg3;
- (void)performChinaShiftingRequest:(id)arg1;
- (void)handleGeoSpatialData:(id)arg1 response:(id)arg2;
- (void)startLoading;
- (void)stopLoading;

@end

