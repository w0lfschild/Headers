//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDSchemaContent.h"

@class NSString;

@interface RDSchemaPerson : RDSchemaContent
{
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)jsonObject;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isValid;
- (id)initWithName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

