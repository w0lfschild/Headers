//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBABugFormControlView.h"

@class NSObjectController, NSTextField;

@interface FBABugFormTextFieldView : FBABugFormControlView
{
    BOOL _hasControlConstraints;
    NSTextField *_control;
    NSObjectController *_controller;
}

- (void).cxx_destruct;
@property BOOL hasControlConstraints; // @synthesize hasControlConstraints=_hasControlConstraints;
@property(retain) NSObjectController *controller; // @synthesize controller=_controller;
@property(retain) NSTextField *control; // @synthesize control=_control;
- (void)updateConstraints;
- (void)textDidChange:(id)arg1;
- (void)commitEditing;
- (void)focus;
- (void)setAnswer:(id)arg1;
- (void)setQuestion:(id)arg1;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

