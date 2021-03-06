//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTableViewDataSource-Protocol.h"

@class LineGraphView, NSArray, NSNumberFormatter, NSPopover, NSString, NSTableView, NSTextField;

@interface TotalPowerGraphManager : NSObject <NSTableViewDataSource>
{
    LineGraphView *_totalPowerGraphView;
    NSTextField *_agoLabel;
    NSTextField *_topPowerLabel;
    NSTextField *_middlePowerLabel;
    NSPopover *_popover;
    NSTableView *_popoverContentTable;
    NSNumberFormatter *_popoverFormatter;
    NSArray *_popoverContentArray;
}

- (void).cxx_destruct;
@property(retain) NSArray *popoverContentArray; // @synthesize popoverContentArray=_popoverContentArray;
@property(retain) NSNumberFormatter *popoverFormatter; // @synthesize popoverFormatter=_popoverFormatter;
@property(retain) NSTableView *popoverContentTable; // @synthesize popoverContentTable=_popoverContentTable;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property(retain) NSTextField *middlePowerLabel; // @synthesize middlePowerLabel=_middlePowerLabel;
@property(retain) NSTextField *topPowerLabel; // @synthesize topPowerLabel=_topPowerLabel;
@property(retain) NSTextField *agoLabel; // @synthesize agoLabel=_agoLabel;
@property(retain) LineGraphView *totalPowerGraphView; // @synthesize totalPowerGraphView=_totalPowerGraphView;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setSampleInterval:(unsigned long long)arg1;
- (void)updateWithProcesses:(id)arg1;
- (void)awakeFromNib;
- (id)locString:(id)arg1;
- (void)_occlusionStateDidChangeNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

