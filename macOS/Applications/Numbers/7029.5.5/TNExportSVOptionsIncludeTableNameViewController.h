//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSApplication/TMAExportOptionsViewController.h>

@class NSButton;

@interface TNExportSVOptionsIncludeTableNameViewController : TMAExportOptionsViewController
{
    long long _delimiterType;
    NSButton *_includeTableName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSButton *includeTableName; // @synthesize includeTableName=_includeTableName;
@property(readonly, nonatomic) long long delimiterType; // @synthesize delimiterType=_delimiterType;
- (id)options;
- (void)loadView;
- (id)initWithDocument:(id)arg1 delimiterType:(long long)arg2;

@end

