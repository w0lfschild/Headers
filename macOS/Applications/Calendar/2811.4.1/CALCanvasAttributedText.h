//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CALCanvasItem.h"

#import "CALCanvasTextProtocol-Protocol.h"

@class NSColor, NSLayoutManager, NSMutableAttributedString, NSMutableDictionary, NSString, NSTextContainer, NSTextStorage;

@interface CALCanvasAttributedText : CALCanvasItem <CALCanvasTextProtocol>
{
    NSMutableAttributedString *_text;
    BOOL _displayedTextNeedsUpdate;
    NSMutableDictionary *_generalAttributes;
    NSString *_fontName;
    double _fontSize;
    NSColor *_foregroundColor;
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
}

+ (id)textWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 text:(id)arg3;
- (void).cxx_destruct;
- (struct CGRect)bounds;
- (void)updateBezierRepresentation;
- (BOOL)isHitByPoint:(struct CGPoint)arg1;
- (void)drawInCGGL;
- (void)draw;
- (void)drawInContext:(struct CGContext *)arg1;
- (BOOL)realDisplayedTextNeedsUpdate;
- (void)setRealDisplayedTextNeedsUpdate:(BOOL)arg1;
- (void)setRealDisplayedText:(id)arg1;
- (id)realDisplayedText;
- (void)applyAttributes;
- (id)foregroundColor;
- (id)setForegroundColor:(id)arg1;
- (id)setLineSpacing:(double)arg1;
- (id)setLineBreaking:(unsigned long long)arg1;
- (id)setAlignment:(long long)arg1;
- (id)setFontName:(id)arg1;
- (id)setFontSize:(double)arg1;
- (id)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)setAttributes:(id)arg1;
- (id)setTextString:(id)arg1;
- (id)setText:(id)arg1;
- (id)attributes;
- (id)setSize:(struct CGSize)arg1;
- (id)setPosition:(struct CGPoint)arg1;
- (struct CGSize)textSize;
- (double)fontSize;
- (id)fontName;
- (id)text;
- (id)initWithTagID:(id)arg1 position:(struct CGPoint)arg2 size:(struct CGSize)arg3 delegate:(id)arg4 shown:(BOOL)arg5 selectable:(BOOL)arg6 text:(id)arg7 textAttributes:(id)arg8 userData:(id)arg9;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 text:(id)arg3 textAttributes:(id)arg4;

@end

