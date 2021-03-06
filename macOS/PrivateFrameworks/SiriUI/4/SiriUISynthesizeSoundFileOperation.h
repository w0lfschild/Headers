//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSSpeechSynthesizerDelegate.h"

@class NSSpeechSynthesizer, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SiriUISynthesizeSoundFileOperation : NSOperation <NSSpeechSynthesizerDelegate>
{
    BOOL _executing;
    BOOL _finished;
    BOOL _speakingCompletedNormally;
    NSSpeechSynthesizer *_synthesizer;
    NSString *_string;
    NSURL *_url;
}

@property(readonly) BOOL speakingCompletedNormally; // @synthesize speakingCompletedNormally=_speakingCompletedNormally;
@property(readonly, copy) NSURL *url; // @synthesize url=_url;
@property(readonly, copy) NSString *string; // @synthesize string=_string;
@property(readonly) NSSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (id)initWithSynthesizer:(id)arg1 string:(id)arg2 toURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

