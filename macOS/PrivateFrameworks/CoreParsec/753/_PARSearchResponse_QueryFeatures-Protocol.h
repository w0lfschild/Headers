//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _PARQueryFeatures_Stats;

@protocol _PARSearchResponse_QueryFeatures <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) BOOL topDown;
@property(retain, nonatomic) _PARQueryFeatures_Stats *stats;
@property(copy, nonatomic) NSString *query;
@property(copy, nonatomic) NSString *prefix;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

