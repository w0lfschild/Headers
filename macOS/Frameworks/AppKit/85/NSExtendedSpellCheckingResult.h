//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSpellCheckingResult.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface NSExtendedSpellCheckingResult : NSSpellCheckingResult
{
    struct _NSRange _sentenceRange;
    NSDictionary *_detail;
}

- (BOOL)isSentenceCorrectionResult;
- (id)detail;
- (struct _NSRange)sentenceRange;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange)arg1 sentenceRange:(struct _NSRange)arg2 detail:(id)arg3;

@end

