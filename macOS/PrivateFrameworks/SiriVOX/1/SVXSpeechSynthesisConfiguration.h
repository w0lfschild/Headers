//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSCopying-Protocol.h>

@class AFVoiceInfo, NSLocale;

@interface SVXSpeechSynthesisConfiguration : NSObject <NSCopying>
{
    AFVoiceInfo *_outputVoiceInfo;
    NSLocale *_locale;
}

+ (id)configurationWithOutputVoiceInfo:(id)arg1;
+ (id)configurationWithLocale:(id)arg1;
@property(readonly, copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, copy, nonatomic) AFVoiceInfo *outputVoiceInfo; // @synthesize outputVoiceInfo=_outputVoiceInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocale:(id)arg1 outputVoiceInfo:(id)arg2;

@end

