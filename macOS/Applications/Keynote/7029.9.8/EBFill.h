//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EBFill : NSObject
{
}

+ (struct XlDXfPattern *)xlDXfPatternFromEDFill:(id)arg1 state:(id)arg2;
+ (void)writeFill:(id)arg1 toXlXfExt:(struct XlXfExt *)arg2 state:(id)arg3;
+ (void)writeFill:(id)arg1 toXlXf:(struct XlXf *)arg2 state:(id)arg3;
+ (id)edFillFromXlDXf:(struct XlDXf *)arg1 edResources:(id)arg2;
+ (id)edFillFromXlXfExt:(struct XlXfExt *)arg1 edResources:(id)arg2;
+ (id)edFillFromXlXf:(struct XlXf *)arg1 edResources:(id)arg2;
+ (id)colorReferenceFromType:(int)arg1 colorData:(unsigned int)arg2 tint:(double)arg3 resources:(id)arg4;
+ (int)convertEDPatternFillEnumToXl:(int)arg1;
+ (int)convertXlFillPatternEnumToED:(int)arg1;
+ (unsigned int)xlBackgroundColorIndexFromColorRef:(id)arg1 state:(id)arg2;
+ (unsigned int)xlForegroundColorIndexFromColorRef:(id)arg1 state:(id)arg2;
+ (_Bool)extractFromEDFill:(id)arg1 foreColorReference:(id *)arg2 backColorReference:(id *)arg3 fillPatternEnum:(int *)arg4;

@end

