//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UGCForm, UGCSubmissionFields;

__attribute__((visibility("hidden")))
@interface UGCReport : NSObject
{
    UGCForm *_initialForm;
    UGCSubmissionFields *_submissionFields;
    long long _reportType;
}

- (void).cxx_destruct;
- (id)buildSubmissionParameters;
@property(readonly, nonatomic) BOOL isComplete;
- (id)initWithReportType:(long long)arg1 initialForm:(id)arg2;

@end

