//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TwitterTextConfiguration : NSObject
{
    BOOL _emojiParsingEnabled;
    long long _version;
    long long _maxWeightedTweetLength;
    long long _scale;
    long long _defaultWeight;
    long long _transformedURLLength;
    NSArray *_ranges;
}

+ (id)configurationFromJSONString:(id)arg1;
+ (id)configurationFromJSONResource:(id)arg1;
@property(readonly, nonatomic) NSArray *ranges; // @synthesize ranges=_ranges;
@property(readonly, nonatomic, getter=isEmojiParsingEnabled) BOOL emojiParsingEnabled; // @synthesize emojiParsingEnabled=_emojiParsingEnabled;
@property(readonly, nonatomic) long long transformedURLLength; // @synthesize transformedURLLength=_transformedURLLength;
@property(readonly, nonatomic) long long defaultWeight; // @synthesize defaultWeight=_defaultWeight;
@property(readonly, nonatomic) long long scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) long long maxWeightedTweetLength; // @synthesize maxWeightedTweetLength=_maxWeightedTweetLength;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)initWithJSONString:(id)arg1;

@end

