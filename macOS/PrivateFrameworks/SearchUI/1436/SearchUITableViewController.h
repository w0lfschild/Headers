//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLKTableViewController.h"

#import "SearchUIFeedbackDelegate.h"

@class NSString, SearchUITableModel;

@interface SearchUITableViewController : TLKTableViewController <SearchUIFeedbackDelegate>
{
    BOOL _disableNextCards;
    id <SFFeedbackListener> _feedbackListener;
    SearchUITableModel *_tableModel;
    id <SearchUICardViewDelegate> _cardViewDelegate;
}

@property(nonatomic) BOOL disableNextCards; // @synthesize disableNextCards=_disableNextCards;
@property(nonatomic) __weak id <SearchUICardViewDelegate> cardViewDelegate; // @synthesize cardViewDelegate=_cardViewDelegate;
@property(retain, nonatomic) SearchUITableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(nonatomic) __weak id <SFFeedbackListener> feedbackListener; // @synthesize feedbackListener=_feedbackListener;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)forwardFeedbackForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(unsigned long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)cellViewForRow:(unsigned long long)arg1;
- (id)rowViewForRow:(unsigned long long)arg1;
- (unsigned long long)numberOfRows;
- (void)reloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

