//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXSuggestionsViewController;

@protocol IPXSuggestionsViewControllerSizingDelegate <NSObject>

@optional
- (double)suggestionsViewControllerResultsWindowMaxHeight:(IPXSuggestionsViewController *)arg1 intercellSpasing:(double)arg2 withVerticalMargin:(double)arg3;
- (double)suggestionsViewControllerResultsWindowWidth:(IPXSuggestionsViewController *)arg1;
- (double)suggestionsViewControllerResultsWindowOriginXOffset:(IPXSuggestionsViewController *)arg1;
@end

