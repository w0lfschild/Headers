//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface ScssElementView : NSView
{
    int m_elementIdent;
}

- (int)staffElemIdent;
- (int)elementIndexOf:(int *)arg1;
- (id)scssController;
- (id)staveView;
- (int)elemType;
- (int)elementIdent;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)nextElement;
- (id)prevElement;
- (BOOL)isDropPosAfter:(char *)arg1;
- (BOOL)isDropPosBefore:(char *)arg1;
- (BOOL)isSelected;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 elementIdent:(int)arg2;

@end

