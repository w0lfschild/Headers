//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EBConditionalFormat : NSObject
{
}

+ (_Bool)writeEDConditionalFormat:(id)arg1 fromRangeIndex:(unsigned long long)arg2 rangeCount:(unsigned long long)arg3 toXlConditionalFormat:(struct XlConditionalFormat *)arg4 state:(id)arg5;
+ (void)readXlConditionalFormat:(struct XlConditionalFormat *)arg1 toEDConditionalFormatting:(id)arg2 state:(id)arg3;
+ (int)convertEDConditionalFmtOperatorEnumToXl:(int)arg1;
+ (int)convertXlConditionalFmtOperatorEnumToED:(int)arg1;
+ (int)convertXlConditionalFmtTypeEnumToED:(int)arg1;
+ (int)convertEDConditionalFmtTypeEnumToXl:(int)arg1;
+ (_Bool)validXlCf:(struct XlCf *)arg1;

@end

