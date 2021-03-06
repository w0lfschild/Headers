//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTRuntimeIssue.h"

@class NSDictionary, NSString, XCAccessibilityElement;

@interface XCTAutomationTypeMismatchIssue : NSObject <XCTRuntimeIssue>
{
    XCAccessibilityElement *_accessibilityElement;
    unsigned long long _legacyElementType;
    unsigned long long _elementTypeFromAutomationType;
    NSDictionary *_accessibilityAttributes;
}

+ (BOOL)supportsSecureCoding;
+ (id)capability;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *accessibilityAttributes; // @synthesize accessibilityAttributes=_accessibilityAttributes;
@property(readonly) unsigned long long elementTypeFromAutomationType; // @synthesize elementTypeFromAutomationType=_elementTypeFromAutomationType;
@property(readonly) unsigned long long legacyElementType; // @synthesize legacyElementType=_legacyElementType;
@property(readonly, copy) XCAccessibilityElement *accessibilityElement; // @synthesize accessibilityElement=_accessibilityElement;
- (BOOL)isEqualForAggregationWith:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long aggregationHash;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *detailedDescription;
@property(readonly) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initForAccessibilityElement:(id)arg1 legacyElementType:(unsigned long long)arg2 elementTypeFromAutomationType:(unsigned long long)arg3 accessibilityAttributes:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

