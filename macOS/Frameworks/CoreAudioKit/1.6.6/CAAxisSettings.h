//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSColor, NSDictionary, NSString;

@interface CAAxisSettings : NSObject
{
    NSColor *axisColor;
    NSColor *majorLineColor;
    NSColor *minorLineColor;
    NSColor *centerLineColor;
    NSColor *pointReferenceLineColor;
    int gridLineCount;
    float minValue;
    float maxValue;
    float minAllowedValue;
    float maxAllowedValue;
    float centerValue;
    float logBase;
    BOOL clipDisplayToMaxAllowed;
    NSDictionary *valueLabelStringAttributes;
    NSDictionary *unitsLabelStringAttributes;
    NSString *unitsLabelString;
    BOOL abbreviateValues;
    BOOL drawFirstAndLastKOnly;
    BOOL suppressInitialUnit;
    BOOL showActiveArea;
    BOOL suppressLabels;
    int labelPosition;
}

@property int labelPosition; // @synthesize labelPosition;
@property BOOL showActiveArea; // @synthesize showActiveArea;
@property BOOL suppressLabels; // @synthesize suppressLabels;
@property BOOL suppressInitialUnit; // @synthesize suppressInitialUnit;
@property BOOL drawFirstAndLastKOnly; // @synthesize drawFirstAndLastKOnly;
@property BOOL abbreviateValues; // @synthesize abbreviateValues;
@property(retain) NSString *unitsLabelString; // @synthesize unitsLabelString;
@property(retain) NSDictionary *unitsLabelStringAttributes; // @synthesize unitsLabelStringAttributes;
@property(retain) NSDictionary *valueLabelStringAttributes; // @synthesize valueLabelStringAttributes;
@property BOOL clipDisplayToMaxAllowed; // @synthesize clipDisplayToMaxAllowed;
@property float logBase; // @synthesize logBase;
@property float centerValue; // @synthesize centerValue;
@property float maxAllowedValue; // @synthesize maxAllowedValue;
@property float minAllowedValue; // @synthesize minAllowedValue;
@property float maxValue; // @synthesize maxValue;
@property float minValue; // @synthesize minValue;
@property int gridLineCount; // @synthesize gridLineCount;
@property(retain) NSColor *pointReferenceLineColor; // @synthesize pointReferenceLineColor;
@property(retain) NSColor *centerLineColor; // @synthesize centerLineColor;
@property(retain) NSColor *minorLineColor; // @synthesize minorLineColor;
@property(retain) NSColor *majorLineColor; // @synthesize majorLineColor;
@property(retain) NSColor *axisColor; // @synthesize axisColor;
- (void)dealloc;

@end

