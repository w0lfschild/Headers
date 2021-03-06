//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface WFTemperature : NSObject <NSCopying, NSSecureCoding>
{
    struct {
        double celsiusVal;
        double kelvinVal;
        double fahrenheitVal;
    } _temperatureValues;
}

+ (BOOL)supportsSecureCoding;
- (void)_resetTemperatureValues;
- (BOOL)_unitIsHydrated:(int)arg1 outputValue:(out double *)arg2;
- (void)_setValue:(double)arg1 forUnit:(int)arg2;
- (id)description;
- (double)temperatureForUnit:(int)arg1;
@property(nonatomic) double fahrenheit;
@property(nonatomic) double celsius;
@property(nonatomic) double kelvin;
- (BOOL)isEqualToTemperature:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithTemperatureUnit:(int)arg1 value:(double)arg2;

@end

