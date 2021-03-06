//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAKitScrubbableNumberFormatter.h"

@interface SegmentedNumberFormatter : MAKitScrubbableNumberFormatter
{
    double m_editingValue;
}

+ (id)sharedSegmentedNumberFormatterUnsigned14Bit;
+ (id)sharedSegmentedNumberFormatterSigned14Bit;
+ (id)sharedSegmentedNumberFormatterMIDIChannel;
+ (id)sharedSegmentedNumberFormatterArticulation;
+ (id)sharedSegmentedNumberFormatter7Bit;
+ (id)createSegmentedNumberFormatter;
- (id)editingStringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;

@end

