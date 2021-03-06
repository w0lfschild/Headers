//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSButton, NSMutableArray, NSNumber, NSString, NSTableColumn, NSTableView;

@interface TmuxSessionsTable : NSObject <NSTableViewDelegate, NSTableViewDataSource>
{
    NSMutableArray *_model;
    BOOL canAttachToSelectedSession_;
    NSTableColumn *checkColumn_;
    NSTableColumn *nameColumn_;
    NSTableView *tableView_;
    NSButton *attachButton_;
    NSButton *detachButton_;
    NSButton *removeButton_;
    id <TmuxSessionsTableProtocol> delegate_;
}

@property(nonatomic) id <TmuxSessionsTableProtocol> delegate; // @synthesize delegate=delegate_;
- (void)updateEnabledStateOfButtons;
- (id)nameForNewSession;
- (BOOL)haveSessionWithName:(id)arg1;
- (id)nameForNewSessionWithNumber:(int)arg1;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
@property(readonly, nonatomic) NSNumber *selectedSessionNumber;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)detach:(id)arg1;
- (void)attach:(id)arg1;
- (void)removeSession:(id)arg1;
- (void)addSession:(id)arg1;
- (void)endEditing;
- (void)selectSessionNumber:(int)arg1;
- (void)setSessionObjects:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

