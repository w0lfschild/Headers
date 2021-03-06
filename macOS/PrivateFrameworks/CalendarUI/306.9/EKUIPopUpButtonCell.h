//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPopUpButtonCell.h>

@class EKEventViewController, EKUIPopUpButton, NSDictionary;

@interface EKUIPopUpButtonCell : NSPopUpButtonCell
{
    BOOL _useAlternateTitle;
    BOOL _mouseOver;
    EKUIPopUpButton *_uiPopUpbutton;
    NSDictionary *_enabledTitleAttributes;
    NSDictionary *_disabledTitleAttributes;
    EKEventViewController *_eventViewController;
}

@property __weak EKEventViewController *eventViewController; // @synthesize eventViewController=_eventViewController;
@property(retain) NSDictionary *disabledTitleAttributes; // @synthesize disabledTitleAttributes=_disabledTitleAttributes;
@property(retain) NSDictionary *enabledTitleAttributes; // @synthesize enabledTitleAttributes=_enabledTitleAttributes;
@property BOOL mouseOver; // @synthesize mouseOver=_mouseOver;
@property BOOL useAlternateTitle; // @synthesize useAlternateTitle=_useAlternateTitle;
@property __weak EKUIPopUpButton *uiPopUpbutton; // @synthesize uiPopUpbutton=_uiPopUpbutton;
- (void).cxx_destruct;
- (void)drawBorderAndBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_setMouseTrackingInRect:(struct CGRect)arg1 ofView:(id)arg2;
- (void)drawImageWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawTitle:(id)arg1 inFrame:(struct CGRect)arg2 deemphasizedString:(id)arg3 inView:(id)arg4;
- (void)drawTitleWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (id)currentTitleAttributesWithColor;
- (id)titleAttributes;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)titleFont;
- (id)lightTextColor;
- (id)textColor;
- (BOOL)usesItemFromMenu;

@end

