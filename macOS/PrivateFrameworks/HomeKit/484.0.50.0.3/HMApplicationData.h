//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface HMApplicationData : NSObject
{
    NSMutableDictionary *_applicationData;
    NSSet *_allowedObjectClasses;
}

@property(retain, nonatomic) NSSet *allowedObjectClasses; // @synthesize allowedObjectClasses=_allowedObjectClasses;
@property(retain, nonatomic) NSMutableDictionary *applicationData; // @synthesize applicationData=_applicationData;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isAllowedClassForObject:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)dictionary;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allValues;
@property(readonly, copy, nonatomic) NSArray *allKeys;
- (id)init;
- (id)initWithContentsOfDictionary:(id)arg1;
- (id)initWithContentsOfDictionary:(id)arg1 allowedObjectClasses:(id)arg2;

@end

