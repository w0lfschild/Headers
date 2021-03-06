//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSScrollView, NSTextField, NSTextView;

@interface iTermDisclosableView : NSView
{
    struct CGRect _originalWindowFrame;
    NSTextField *_labelField;
    double _headerWidth;
    CDUnknownBlockType _requestLayout;
    NSTextView *_textView;
    NSButton *_disclosureButton;
    NSScrollView *_scrollView;
}

+ (id)newTextViewWithFrame:(struct CGRect)arg1 scrollview:(out id *)arg2;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(readonly, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) CDUnknownBlockType requestLayout; // @synthesize requestLayout=_requestLayout;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)callRequestLayout;
- (void)disclosureButtonPressed:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)heightWhenClosed;
- (double)heightWhenOpen;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1 prompt:(id)arg2 message:(id)arg3;

@end

