//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKSosBase.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray;

@interface TSTColumnAggregateList : TSKSosBase <GSSPAutoEncodable, NSCopying>
{
    NSArray *_columnAggregates;
}

- (void).cxx_destruct;
- (void)encodeToArchive:(struct ColumnAggregateListArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ColumnAggregateListArchive *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)aggregatesOnLevel:(unsigned char)arg1;
@property(readonly, nonatomic) NSArray *asArray;
- (id)initWithColumnAggregates:(id)arg1;
- (void)populateGSSPColumnAggregateList:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

