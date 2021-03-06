//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary;

@interface AFSpeechAudioAnalytics : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_speechRecognitionFeatures;
    NSDictionary *_acousticFeatures;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *acousticFeatures; // @synthesize acousticFeatures=_acousticFeatures;
@property(readonly, nonatomic) NSDictionary *speechRecognitionFeatures; // @synthesize speechRecognitionFeatures=_speechRecognitionFeatures;
- (id)initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

