//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PRMonogramStringValidator : NSObject
{
    NSString *_inputString;
}

+ (BOOL)isInputStringValidAsMonogram:(id)arg1;
+ (BOOL)isInputStringValid:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
- (BOOL)inputStringContainsValidCharacters;
- (BOOL)inputStringHasCorrectNumberOfCharactersAsMonogram;
- (BOOL)inputStringHasCorrectNumberOfCharacters;
- (BOOL)isInputStringValidAsMonogram;
- (BOOL)isInputStringValid;
- (id)initWithString:(id)arg1;

@end

