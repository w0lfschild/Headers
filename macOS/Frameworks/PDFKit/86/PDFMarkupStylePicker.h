//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class PDFMarkupStylePickerPrivate;

__attribute__((visibility("hidden")))
@interface PDFMarkupStylePicker : NSControl
{
    PDFMarkupStylePickerPrivate *_private;
}

+ (Class)cellClass;
- (void).cxx_destruct;
- (id)_menuImageForHighlightAttributeWithMarkupColor:(unsigned long long)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)_labelViewAction:(id)arg1;
- (void)_setup;
- (id)initWithDelegate:(id)arg1 annotation:(id)arg2;

@end

