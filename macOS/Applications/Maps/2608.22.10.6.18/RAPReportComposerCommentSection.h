//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPTablePartSection.h"

#import "UITextViewDelegate-Protocol.h"

@class NSString, RAPCommentPartHeaderView, RAPCommentQuestion;

__attribute__((visibility("hidden")))
@interface RAPReportComposerCommentSection : RAPTablePartSection <UITextViewDelegate>
{
    RAPCommentQuestion *_question;
    RAPCommentPartHeaderView *_headerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RAPCommentPartHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)beginEditingCommentIfPossible;
- (id)cellForRowAtIndex:(long long)arg1;
- (void)registerReuseIdentifiersForCells;
- (long long)rowsCount;
- (id)initWithQuestion:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

