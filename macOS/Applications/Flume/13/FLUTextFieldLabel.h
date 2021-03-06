//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLUTextField.h"

@class NSArray, NSTextView;

@interface FLUTextFieldLabel : FLUTextField
{
    BOOL _hovering;
    BOOL _containsLinks;
    BOOL _isMouseDown;
    double _lineSpacing;
    NSArray *_hyperlinkInfos;
    NSTextView *_textView;
    struct _NSRange _hoverRange;
}

+ (Class)cellClass;
@property(nonatomic) struct _NSRange hoverRange; // @synthesize hoverRange=_hoverRange;
@property(nonatomic) BOOL isMouseDown; // @synthesize isMouseDown=_isMouseDown;
@property(nonatomic) BOOL containsLinks; // @synthesize containsLinks=_containsLinks;
@property(retain, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSArray *hyperlinkInfos; // @synthesize hyperlinkInfos=_hyperlinkInfos;
@property(nonatomic, getter=isHovering) BOOL hovering; // @synthesize hovering=_hovering;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
- (void).cxx_destruct;
- (void)resetHyperlinkCursorRects;
- (void)resetCursorRects;
- (void)setAttributedStringValue:(id)arg1;
- (void)removeHoverAttributesForRange:(struct _NSRange)arg1;
- (void)addHoverAttributesForRange:(struct _NSRange)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateTrackingAreas;
- (id)hitTest:(struct CGPoint)arg1;
- (id)cell;
- (void)setupView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

