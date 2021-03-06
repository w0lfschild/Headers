//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface RDSectionList : NSObject
{
    NSMutableArray *_sectionArray;
}

@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
- (void).cxx_destruct;
- (void)addCondition:(CDUnknownBlockType)arg1 named:(id)arg2;
- (void)addSimpleInspector:(id)arg1 visibility:(CDUnknownBlockType)arg2;
- (void)addSimpleInspector:(id)arg1 visibilityAny:(id)arg2;
- (void)addSimpleInspector:(id)arg1 visibilityString:(id)arg2;
- (void)addSimpleInspector:(id)arg1;
- (BOOL)isEqualToSectionList:(id)arg1;
- (void)addSection:(id)arg1 settings:(id)arg2 visibility:(CDUnknownBlockType)arg3;
- (void)addSection:(id)arg1 settings:(id)arg2 visibilityAny:(id)arg3;
- (void)addSection:(id)arg1 settings:(id)arg2 visibilityString:(id)arg3;
- (void)addSection:(id)arg1 visibility:(CDUnknownBlockType)arg2;
- (void)addSection:(id)arg1 visibilityAny:(id)arg2;
- (void)addSection:(id)arg1 visibilityString:(id)arg2;
- (void)addSection:(id)arg1 settings:(id)arg2;
- (void)addSection:(id)arg1;
- (id)init;

@end

