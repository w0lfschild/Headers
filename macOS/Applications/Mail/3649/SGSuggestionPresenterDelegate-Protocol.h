//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSViewController, SGSuggestionPresenter;

@protocol SGSuggestionPresenterDelegate <NSObject>
- (void)reloadSuggestionsFromSearchableItems;
- (void)suggestionPresenterWantsToHideBanner:(SGSuggestionPresenter *)arg1;
- (void)suggestionPresenterWantsToShowBanner:(SGSuggestionPresenter *)arg1;

@optional
- (long long (^)(id, id))suggestionCategoryComparatorForManager:(SGSuggestionPresenter *)arg1;
- (void)suggestionPresenter:(SGSuggestionPresenter *)arg1 didDismissViewController:(NSViewController *)arg2;
- (void)suggestionPresenter:(SGSuggestionPresenter *)arg1 willDismissViewController:(NSViewController *)arg2;
- (void)suggestionPresenter:(SGSuggestionPresenter *)arg1 didPresentViewController:(NSViewController *)arg2;
- (void)suggestionPresenter:(SGSuggestionPresenter *)arg1 willPresentViewController:(NSViewController *)arg2;
@end

