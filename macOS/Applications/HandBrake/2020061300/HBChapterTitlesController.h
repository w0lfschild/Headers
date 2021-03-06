//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class HBJob, NSArray, NSString, NSTableView;

@interface HBChapterTitlesController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    HBJob *_job;
    NSTableView *_table;
    NSArray *_chapterTitles;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *chapterTitles; // @synthesize chapterTitles=_chapterTitles;
@property(nonatomic) __weak NSTableView *table; // @synthesize table=_table;
@property(nonatomic) __weak HBJob *job; // @synthesize job=_job;
- (void)browseForChapterFileSave:(id)arg1;
- (void)browseForChapterFile:(id)arg1;
- (BOOL)importChaptersFromURL:(id)arg1 error:(id *)arg2;
- (void)doubleClickAction:(id)arg1;
- (void)editNextRow:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

