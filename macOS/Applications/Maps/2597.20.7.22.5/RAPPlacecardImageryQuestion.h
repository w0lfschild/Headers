//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPQuestion.h"

#import "RAPCommentQuestionProtocol-Protocol.h"

@class NSArray, NSString, RAPCommentQuestion;

__attribute__((visibility("hidden")))
@interface RAPPlacecardImageryQuestion : RAPQuestion <RAPCommentQuestionProtocol>
{
    RAPCommentQuestion *_commentQuestion;
    unsigned long long _issueType;
    NSArray *_issueItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *issueItems; // @synthesize issueItems=_issueItems;
@property(nonatomic) unsigned long long issueType; // @synthesize issueType=_issueType;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion; // @synthesize commentQuestion=_commentQuestion;
- (void)_fillSubmissionParameters:(id)arg1;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)placeholderText;
- (BOOL)isComplete;
- (BOOL)_isRecursivelyComplete;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 supportedIssueItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

