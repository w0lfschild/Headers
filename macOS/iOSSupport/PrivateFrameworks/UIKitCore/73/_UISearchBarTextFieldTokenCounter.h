//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableIndexSet, NSTextStorage;

__attribute__((visibility("hidden")))
@interface _UISearchBarTextFieldTokenCounter : NSObject
{
    id _textStorageObservation;
    NSTextStorage *_textStorage;
    NSMutableIndexSet *_tokenCharacterIndexes;
}

- (void).cxx_destruct;
- (unsigned long long)indexOfTokenAtCharacterIndex:(unsigned long long)arg1;
- (id)tokenAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)characterRangeForSubrangeOfTextAfterLastToken:(struct _NSRange)arg1;
- (struct _NSRange)subrangeOfTextAfterLastTokenForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)characterRangeOfTextAfterLastToken;
- (unsigned long long)characterIndexForSelectingOrRemovingTokenAtIndex:(unsigned long long)arg1;
- (unsigned long long)characterIndexForInsertingTokenAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct _NSRange characterRangeOfAllTokens;
@property(readonly, nonatomic) NSIndexSet *tokenCharacterIndexes;
- (void)_handleProcessEditing;
- (void)_addCharacterIndexesOfTokensInRange:(struct _NSRange)arg1 toIndexSet:(id)arg2;
- (id)initWithTextStorage:(id)arg1;

@end

