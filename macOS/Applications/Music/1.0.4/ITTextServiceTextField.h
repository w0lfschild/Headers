//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import "ITAccessibleLinking-Protocol.h"
#import "ITTextServiceFocusHandlingProtocol-Protocol.h"
#import "ITViewLinking-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface ITTextServiceTextField : NSTextField <ITTextServiceFocusHandlingProtocol, ITViewLinking, ITAccessibleLinking, NSTextFieldDelegate>
{
    struct weak_ptr<ITEditText> mITEditText;
    BOOL mBecomingFirstResponder;
    NSMutableArray *mContextualMenuAdditions;
    NSArray *_candidates;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
- (void)doContextualMenuAction:(id)arg1;
- (void)appendContextualMenuSeparatorItem;
- (void)appendContextualMenuItemWithTitle:(id)arg1;
- (id)contextualMenuAdditions;
- (BOOL)textField:(id)arg1 textView:(id)arg2 shouldSelectCandidateAtIndex:(unsigned long long)arg3;
- (id)textField:(id)arg1 textView:(id)arg2 candidatesForSelectedRange:(struct _NSRange)arg3;
- (void)mouseDown:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)setItEditText:(shared_ptr_d34156de)arg1;
- (shared_ptr_d34156de)itEditText;
- (BOOL)allowsVibrancy;
- (shared_ptr_d213862f)frontingView;
- (shared_ptr_18c9bb0b)accessibleObject;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)_handleArrowKeyWithEvent:(id)arg1;
- (BOOL)_handleNewline;
- (BOOL)_handleTabInForwardDirection:(BOOL)arg1;
- (BOOL)_provideTextInputToAssociatedITEditTextWithEvent:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)selectText:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)handleITEditTextResignFocus;
- (BOOL)handleITEditTextBecomeFocus;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 itEditText:(shared_ptr_d34156de)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

