//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NLLexicon, NSString;

@interface NLLexiconCursor : NSObject
{
    NLLexicon *_lexicon;
    struct _LXCursor *_cursor;
}

- (void).cxx_destruct;
- (void)enumerateCompletionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *traversedString;
@property(readonly) double terminationProbability;
@property(readonly) double prefixProbability;
@property(readonly) BOOL hasChildren;
@property(readonly) BOOL hasEntries;
- (id)cursorByAdvancingWithString:(id)arg1;
- (void)dealloc;
- (id)initWithLexicon:(id)arg1 string:(id)arg2;
- (id)initWithLexicon:(id)arg1 cursor:(struct _LXCursor *)arg2;

@end

