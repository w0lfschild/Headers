//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSColorPicker.h>

#import <AppKit/NSColorPickingCustom-Protocol.h>

@interface NSColorPickerWheel : NSColorPicker <NSColorPickingCustom>
{
    id wheelView;
    id containerView;
    id brightnessSlider;
    BOOL previouslyTracking;
}

- (void)brightnessSlider:(id)arg1;
- (BOOL)worksWhenModal;
- (void)setColor:(id)arg1;
- (long long)currentMode;
- (BOOL)supportsMode:(long long)arg1;
- (id)buttonToolTip;
- (double)_insertionOrder;
- (void)viewSizeChanged:(id)arg1;
- (id)provideNewView:(BOOL)arg1;
- (id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2;

@end

