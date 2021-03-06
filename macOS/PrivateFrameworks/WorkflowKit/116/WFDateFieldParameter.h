//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFTextInputParameter.h>

@class NSDateFormatter, NSString;

@interface WFDateFieldParameter : WFTextInputParameter
{
    BOOL _detectsAllDayDates;
    BOOL _forcesAllDayDates;
    NSDateFormatter *_hintDateFormatter;
    NSString *_reactiveParameterKey;
    NSString *_hintDateMode;
}

@property(readonly, nonatomic) NSString *hintDateMode; // @synthesize hintDateMode=_hintDateMode;
@property(nonatomic) BOOL forcesAllDayDates; // @synthesize forcesAllDayDates=_forcesAllDayDates;
@property(readonly, nonatomic) BOOL detectsAllDayDates; // @synthesize detectsAllDayDates=_detectsAllDayDates;
@property(readonly, nonatomic) NSString *reactiveParameterKey; // @synthesize reactiveParameterKey=_reactiveParameterKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedIncompleteHintString;
- (id)hintForState:(id)arg1;
@property(readonly, nonatomic) NSDateFormatter *hintDateFormatter; // @synthesize hintDateFormatter=_hintDateFormatter;
@property(readonly, nonatomic) BOOL dateOnlyMode;
@property(readonly, nonatomic) BOOL timeOnlyMode;
- (id)initWithDefinition:(id)arg1;

@end

