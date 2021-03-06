//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, REMChangeToken;

@interface REMChangeTrackingState : NSObject <NSCopying, NSSecureCoding>
{
    REMChangeToken *_lastConsumedChangeToken;
    NSDate *_lastConsumedDate;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastConsumedDate; // @synthesize lastConsumedDate=_lastConsumedDate;
@property(retain, nonatomic) REMChangeToken *lastConsumedChangeToken; // @synthesize lastConsumedChangeToken=_lastConsumedChangeToken;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

