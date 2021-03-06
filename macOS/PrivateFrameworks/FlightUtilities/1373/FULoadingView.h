//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class FULabel, NSProgressIndicator;

__attribute__((visibility("hidden")))
@interface FULoadingView : NSView
{
    NSProgressIndicator *_progressIndicator;
    FULabel *_loadingLabel;
}

- (void).cxx_destruct;
@property __weak FULabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void)setStyleProvider:(id)arg1;
- (void)awakeFromNib;

@end

