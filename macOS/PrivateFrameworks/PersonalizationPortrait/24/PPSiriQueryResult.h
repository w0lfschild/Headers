//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface PPSiriQueryResult : NSObject <NSCopying>
{
    NSString *_qid;
    NSString *_domain;
    NSNumber *_confidence;
}

+ (id)siriQueryResultWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3;
@property(readonly, nonatomic) NSNumber *confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *qid; // @synthesize qid=_qid;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSiriQueryResult:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3;

@end

