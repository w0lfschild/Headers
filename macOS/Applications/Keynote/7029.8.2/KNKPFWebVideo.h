//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNKPFReading-Protocol.h"
#import "KNKPFWriting-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface KNKPFWebVideo : NSObject <KNKPFReading, KNKPFWriting>
{
    NSURL *_URL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (BOOL)readFromKPFDictionary:(id)arg1 error:(out id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

