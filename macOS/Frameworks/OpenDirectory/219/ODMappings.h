//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface ODMappings : NSObject
{
    NSString *comment;
    NSString *templateName;
    NSString *identifier;
    NSString *function;
    NSArray *functionAttributes;
    NSMutableDictionary *recordTypes;
}

+ (id)mappings;
+ (id)mappingsFromDictionary:(id)arg1;
@property(copy) NSArray *functionAttributes; // @synthesize functionAttributes;
@property(copy) NSString *function; // @synthesize function;
@property(copy) NSString *identifier; // @synthesize identifier;
@property(copy) NSString *templateName; // @synthesize templateName;
@property(copy) NSString *comment; // @synthesize comment;
@property(readonly, copy) NSDictionary *dictionary;
- (void)setRecordMap:(id)arg1 forStandardRecordType:(id)arg2;
- (id)recordMapForStandardRecordType:(id)arg1;
@property(readonly, copy) NSArray *recordTypes; // @dynamic recordTypes;
- (void)dealloc;
- (id)init;

@end

