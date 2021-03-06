//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

#import "NSMenuDelegate-Protocol.h"

@class NSString, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface IEMessagesTitleBarPopUpButton : NSPopUpButton <NSMenuDelegate>
{
    NSTrackingArea *_hoverArea;
}

@property(retain, nonatomic) NSTrackingArea *hoverArea; // @synthesize hoverArea=_hoverArea;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

