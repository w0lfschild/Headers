//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFSearchResult_SpotlightExtras.h"

#import "NSPasteboardWriting.h"

@class NSString;

@interface PRSCalculatorResult : SFSearchResult_SpotlightExtras <NSPasteboardWriting>
{
    NSString *_inputString;
}

- (void).cxx_destruct;
@property(readonly) NSString *inputString; // @synthesize inputString=_inputString;
- (int)type;
- (BOOL)isCalculation;
-     // Error parsing type: T16@0:8, name: rank
-     // Error parsing type: T16@0:8, name: score
- (id)groupName;
- (id)category;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isCurrency;
- (BOOL)isConversion;
- (id)initWithDisplayName:(id)arg1 inputString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

