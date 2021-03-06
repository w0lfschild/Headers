//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBTopStoriesConfig : PBCodable <NSCopying>
{
    long long _badgesTimeout;
    long long _cutoffTime;
    long long _maximumArticleCount;
    NSString *_channelId;
    NSMutableArray *_styleConfigs;
    BOOL _pinningEnabled;
    BOOL _promotingEnabled;
    struct {
        unsigned int badgesTimeout:1;
        unsigned int cutoffTime:1;
        unsigned int maximumArticleCount:1;
        unsigned int pinningEnabled:1;
        unsigned int promotingEnabled:1;
    } _has;
}

+ (Class)styleConfigsType;
@property(nonatomic) long long badgesTimeout; // @synthesize badgesTimeout=_badgesTimeout;
@property(retain, nonatomic) NSMutableArray *styleConfigs; // @synthesize styleConfigs=_styleConfigs;
@property(nonatomic) long long cutoffTime; // @synthesize cutoffTime=_cutoffTime;
@property(nonatomic) long long maximumArticleCount; // @synthesize maximumArticleCount=_maximumArticleCount;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(nonatomic) BOOL promotingEnabled; // @synthesize promotingEnabled=_promotingEnabled;
@property(nonatomic) BOOL pinningEnabled; // @synthesize pinningEnabled=_pinningEnabled;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasBadgesTimeout;
- (id)styleConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)styleConfigsCount;
- (void)addStyleConfigs:(id)arg1;
- (void)clearStyleConfigs;
@property(nonatomic) BOOL hasCutoffTime;
@property(nonatomic) BOOL hasMaximumArticleCount;
@property(readonly, nonatomic) BOOL hasChannelId;
@property(nonatomic) BOOL hasPromotingEnabled;
@property(nonatomic) BOOL hasPinningEnabled;

@end

