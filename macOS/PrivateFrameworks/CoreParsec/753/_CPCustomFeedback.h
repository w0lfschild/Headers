//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPCustomFeedback.h"
#import "_CPProcessableFeedback.h"

@class NSData, NSDictionary, NSString;

@interface _CPCustomFeedback : PBCodable <_CPProcessableFeedback, _CPCustomFeedback, NSSecureCoding>
{
    int _feedbackType;
    unsigned long long _timestamp;
    NSData *_jsonFeedback;
}

- (void).cxx_destruct;
@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
@property(copy, nonatomic) NSData *jsonFeedback; // @synthesize jsonFeedback=_jsonFeedback;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)init;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

