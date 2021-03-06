//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class RegexSymbolDefinition;

__attribute__((visibility("hidden")))
@interface RegexSymbolParser : NSObject <NSCopying>
{
    RegexSymbolDefinition *I_symbolDefinition;
}

- (id)symbolsForTextStorage:(id)arg1 cachedString:(id)arg2 inRanges:(id)arg3 displaySymbols:(id *)arg4;
- (id)symbolsForTextStorage:(id)arg1 displaySymbols:(id *)arg2;
- (void)setSyntaxDefinition:(id)arg1;
- (id)symbolDefinition;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSymbolDefinition:(id)arg1;

@end

