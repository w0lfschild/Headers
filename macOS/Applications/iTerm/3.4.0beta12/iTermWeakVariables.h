//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "iTermGraphEncodable.h"

@class NSString, iTermVariables;

@interface iTermWeakVariables : NSObject <iTermGraphEncodable, NSCopying, NSSecureCoding>
{
    iTermVariables *_variables;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak iTermVariables *variables; // @synthesize variables=_variables;
- (BOOL)graphEncoderShouldIgnore;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (id)initWithVariables:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

