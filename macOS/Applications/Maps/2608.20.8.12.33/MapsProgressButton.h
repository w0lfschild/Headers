//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BackgroundColorButton.h"

@class MapsProgressBarView;

__attribute__((visibility("hidden")))
@interface MapsProgressButton : BackgroundColorButton
{
    double _progress;
    MapsProgressBarView *_progressBarView;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL progressBarHidden;
@property(nonatomic) unsigned long long fillStyle;
@property(nonatomic) double progress;
- (void)_insertProgressBarViewIfNecessary;
- (void)didMoveToWindow;
- (void)_customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

