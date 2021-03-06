//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSSStyle.h>

#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSSPreset-Protocol.h>

@class NSString;

@interface TSDMediaStyle : TSSStyle <TSDMixing, TSSPreset>
{
}

+ (id)p_magicMoveProperties;
+ (BOOL)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
+ (id)propertiesAllowingNSNull;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)properties;
+ (id)movieStylePresetStyleDescriptor;
+ (id)imageStylePresetStyleDescriptor;
+ (void)initialize;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (SEL)mapThemePropertyMapSelector;
@property(readonly, nonatomic) NSString *presetKind;

@end

