//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SmartControlsViewController;

@interface SmartControlPlugInLoader : NSObject
{
    BOOL _isVisualEQ;
    unsigned int _plugInID;
    unsigned int _manufacturerID;
    long long _pageNumber;
    SmartControlsViewController *_smartControlsViewController;
}

@property(nonatomic) __weak SmartControlsViewController *smartControlsViewController; // @synthesize smartControlsViewController=_smartControlsViewController;
@property(nonatomic) BOOL isVisualEQ; // @synthesize isVisualEQ=_isVisualEQ;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) unsigned int manufacturerID; // @synthesize manufacturerID=_manufacturerID;
@property(nonatomic) unsigned int plugInID; // @synthesize plugInID=_plugInID;
- (void).cxx_destruct;
- (BOOL)hasPlugIn;
- (void)reload;
- (id)initVisualEQForSmartControlsViewController:(id)arg1;
- (id)initForSmartControlsViewController:(id)arg1 plugInID:(unsigned int)arg2 manufacturerID:(unsigned int)arg3 pageNumber:(long long)arg4;
- (id)init;

@end

