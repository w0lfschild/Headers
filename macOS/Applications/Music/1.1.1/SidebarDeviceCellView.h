//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SidebarCellView.h"

@class NSProgress, NSProgressIndicator;

@interface SidebarDeviceCellView : SidebarCellView
{
    NSProgressIndicator *_progressIndicator;
    NSProgress *_progress;
}

@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setShowSpinner:(BOOL)arg1;
- (void)dealloc;
- (void)layout;
- (double)widthOfTrailingViews;
- (struct CGRect)progressIndicatorRect;
- (id)init;
- (id)makeProgressIndicator;

@end

