//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KNKPFRegion.h"

@class NSMutableDictionary, NSURL;

@interface KNKPFHyperlink : KNKPFRegion
{
    NSURL *_url;
    NSMutableDictionary *_events;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *events; // @synthesize events=_events;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)dictionaryRepresentation;
- (BOOL)readFromKPFDictionary:(id)arg1 error:(out id *)arg2;
- (id)init;

@end

