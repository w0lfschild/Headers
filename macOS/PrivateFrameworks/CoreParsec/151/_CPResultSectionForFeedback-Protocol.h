//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _CPSearchResultForFeedback;

@protocol _CPResultSectionForFeedback <NSObject>
@property(readonly, nonatomic) unsigned long long whichBundleid;
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int knownBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(copy, nonatomic) NSData *fallbackResultSection;
@property(nonatomic) double rankingScore;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSArray *results;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPSearchResultForFeedback *)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)addResults:(_CPSearchResultForFeedback *)arg1;
- (void)clearResults;
@end

