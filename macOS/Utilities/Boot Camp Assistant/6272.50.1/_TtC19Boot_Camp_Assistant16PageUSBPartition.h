//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSProgressIndicator, NSTextField, _TtC19Boot_Camp_Assistant16BCAPartitionView;

@interface _TtC19Boot_Camp_Assistant16PageUSBPartition : NSView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: bcaPartitionView
    // Error parsing type: , name: progressBar
    // Error parsing type: , name: progressStatus
    // Error parsing type: , name: installButton
    // Error parsing type: , name: goBackButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)backClicked:(id)arg1;
- (void)installClicked:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) __weak NSButton *goBackButton; // @synthesize goBackButton;
@property(nonatomic) __weak NSButton *installButton; // @synthesize installButton;
@property(nonatomic) __weak NSTextField *progressStatus; // @synthesize progressStatus;
@property(nonatomic) __weak NSProgressIndicator *progressBar; // @synthesize progressBar;
@property(nonatomic) __weak _TtC19Boot_Camp_Assistant16BCAPartitionView *bcaPartitionView; // @synthesize bcaPartitionView;

@end

