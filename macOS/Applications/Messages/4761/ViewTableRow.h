//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface ViewTableRow : NSView
{
    BOOL _selected;
    NSView *_containerView;
}

@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_extendSelection;
- (void)_setSingleSelection;
- (void)_deselect;
- (void)_setSelected;
- (void)_setSelected:(BOOL)arg1;
- (void)windowKeyChanged;
- (void)selectedDidChange;
- (BOOL)isSelected;
- (void)dealloc;
- (id)initWithNibNamed:(id)arg1 saveNib:(BOOL)arg2;
- (void)awakeFromNib;

@end

