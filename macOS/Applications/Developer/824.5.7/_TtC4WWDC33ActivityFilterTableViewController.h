//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class UIBarButtonItem;

@interface _TtC4WWDC33ActivityFilterTableViewController : UITableViewController
{
    // Error parsing type: , name: leftBarButtonItem
    // Error parsing type: , name: rightBarButtonItem
    // Error parsing type: , name: sections
    // Error parsing type: , name: topicIdentifiers
    // Error parsing type: , name: filter
    // Error parsing type: , name: baseFilter
    // Error parsing type: , name: editedFilter
    // Error parsing type: , name: contents
    // Error parsing type: , name: filterUpdateHandler
    // Error parsing type: , name: showsCancelAndDone
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)selectAllTapped:(id)arg1;
- (void)deselectAllTapped:(id)arg1;
- (void)cancelButtonTapped;
- (void)doneButtonTapped;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem;
@property(nonatomic, retain) UIBarButtonItem *leftBarButtonItem; // @synthesize leftBarButtonItem;

@end

