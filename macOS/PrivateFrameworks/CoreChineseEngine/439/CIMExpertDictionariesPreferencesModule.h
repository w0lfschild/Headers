//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreChineseEngine/CIMPreferencesModule.h>

@class NSArray, NSTableView;

@interface CIMExpertDictionariesPreferencesModule : CIMPreferencesModule
{
    BOOL _didInitialized;
    NSTableView *_tableView;
    NSArray *_dictionaries;
}

@property(nonatomic) BOOL didInitialized; // @synthesize didInitialized=_didInitialized;
@property(retain, nonatomic) NSArray *dictionaries; // @synthesize dictionaries=_dictionaries;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

