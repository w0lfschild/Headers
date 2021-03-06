//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "AutocompleteCellAccessoryView-Protocol.h"
#import "QuerySuggestionViewProtocol-Protocol.h"

@class NSString, QuerySuggestionView;
@protocol AutocompleteCellAccessoryDelegate;

__attribute__((visibility("hidden")))
@interface QuerySuggestionTableViewCell : UITableViewCell <QuerySuggestionViewProtocol, AutocompleteCellAccessoryView>
{
    id <AutocompleteCellAccessoryDelegate> _accessoryViewDelegate;
    id _accessoryViewObject;
    long long _accessoryViewType;
    QuerySuggestionView *_querySuggestionView;
}

+ (id)identifier;
+ (double)estimatedCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) QuerySuggestionView *querySuggestionView; // @synthesize querySuggestionView=_querySuggestionView;
@property(nonatomic) long long accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
@property(retain, nonatomic) id accessoryViewObject; // @synthesize accessoryViewObject=_accessoryViewObject;
@property(nonatomic) __weak id <AutocompleteCellAccessoryDelegate> accessoryViewDelegate; // @synthesize accessoryViewDelegate=_accessoryViewDelegate;
- (void)didTapAccessoryViewButton:(id)arg1;
- (void)setTitle:(id)arg1 highlightTitleRanges:(id)arg2 detailText:(id)arg3 style:(unsigned long long)arg4;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

