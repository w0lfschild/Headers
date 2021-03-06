//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UGCForm.h"

#import "UGCEditable-Protocol.h"
#import "UGCRatingCategoryObserver-Protocol.h"

@class NSArray, NSString, UGCRatingCategory;

__attribute__((visibility("hidden")))
@interface UGCRatingsForm : UGCForm <UGCRatingCategoryObserver, UGCEditable>
{
    NSString *_questionnaireVersion;
    long long _actionType;
    UGCRatingCategory *_overallCategory;
    NSArray *_categoryList;
}

+ (id)editRatingFormWithPlaceQuestionnaire:(id)arg1 existingScorecard:(id)arg2;
+ (id)addRatingFormWithPlaceQuestionnaire:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *categoryList; // @synthesize categoryList=_categoryList;
@property(readonly, nonatomic) UGCRatingCategory *overallCategory; // @synthesize overallCategory=_overallCategory;
- (void)ratingCategoryDidChange:(id)arg1;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) BOOL isEdited;
@property(readonly, nonatomic) BOOL isEmpty;
- (void)_fillScorecardUpdateWithAddType:(id)arg1;
- (void)_fillScorecardUpdateWithEditType:(id)arg1;
- (void)_fillScorecardUpdateWithDeleteType:(id)arg1;
- (void)_fillInScorecard:(id)arg1 hasBeenEdited:(char *)arg2;
- (void)fillSubmissionFields:(id)arg1;
@property(readonly, nonatomic) BOOL passesMinimumRequirementsToBeSubmittable;
- (BOOL)_isCompleteForEdit;
- (BOOL)_isCompleteForAdd;
- (BOOL)_isCompleteForDelete;
- (BOOL)isComplete;
- (id)categoryForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *allRatingCategories;
- (void)_startObservingRatingCategories;
- (id)initWithActionType:(long long)arg1 overallCategory:(id)arg2 categoryList:(id)arg3 versionNumber:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

