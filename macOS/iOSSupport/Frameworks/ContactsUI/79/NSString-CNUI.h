//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CNUI)
- (BOOL)cnui_containsEmojiCharacters;
- (BOOL)cnui_containsNonLatinCharacters;
- (id)cnui_stringByTransliteratingToPhoneticCharactersForProperty:(id)arg1;
- (BOOL)cnui_shouldTransliterateToLatin;
- (BOOL)cnui_shouldUseZhuyinTransliteration;
- (BOOL)cnui_shouldUseJapaneseTransliteration;
- (id)cnui_stringByTransliteratingToKanaAsName:(BOOL)arg1;
- (unsigned int)cnui_firstUTF32Character;
@end

