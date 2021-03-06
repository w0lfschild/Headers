//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPMenuQuestion.h"

@class NSArray, RAPQuestion;
@protocol RAPMenuItem;

__attribute__((visibility("hidden")))
@interface RAPMainQuestion : RAPMenuQuestion
{
    NSArray *_homeWorkCategories;
    NSArray *_homeWorkMenuItems;
    RAPQuestion<RAPMenuItem> *_otherIssueMenuItem;
}

+ (id)localizedHeaderText;
@property(retain, nonatomic) RAPQuestion<RAPMenuItem> *otherIssueMenuItem; // @synthesize otherIssueMenuItem=_otherIssueMenuItem;
@property(retain, nonatomic) NSArray *homeWorkMenuItems; // @synthesize homeWorkMenuItems=_homeWorkMenuItems;
- (void).cxx_destruct;
- (id)_alternateMapViewContext;
- (void)_fillSubmissionParameters:(id)arg1;
- (void)_fillSubmittableProblem:(id)arg1;
- (id)followUpQuestionForCategory:(long long)arg1;
- (BOOL)canDisplayMenuItemForQuestionCategory:(long long)arg1;
- (void)resetMenu;
- (id)menuItems;
- (BOOL)shouldShowSubtitles;
- (BOOL)shouldShowIcons;
- (int)analyticTarget;
- (id)mainMenuQuestionCategories;
- (id)_questionsFromLayoutItems:(id)arg1;
- (void)updateCategoriesFromLayoutManager:(id)arg1;

@end

