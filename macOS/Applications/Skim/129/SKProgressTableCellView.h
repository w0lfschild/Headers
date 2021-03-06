//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSProgressIndicator, NSTextField;

__attribute__((visibility("hidden")))
@interface SKProgressTableCellView : NSTableCellView
{
    NSTextField *statusField;
    NSProgressIndicator *progressIndicator;
}

@property(nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic) NSTextField *statusField; // @synthesize statusField;
- (void)setBackgroundStyle:(long long)arg1;
- (void)dealloc;

@end

