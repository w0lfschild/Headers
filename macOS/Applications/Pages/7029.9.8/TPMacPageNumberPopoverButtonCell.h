//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@interface TPMacPageNumberPopoverButtonCell : NSButtonCell
{
    BOOL _mouseIsInside;
}

@property(nonatomic) BOOL mouseIsInside; // @synthesize mouseIsInside=_mouseIsInside;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)awakeFromNib;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

