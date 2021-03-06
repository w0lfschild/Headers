//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLgUnilibFocusView.h"

#import "NSTextViewDelegate-Protocol.h"

@class MAKitScrollView, NSString, NSTextView;

@interface CLgNotesFocusView : CLgUnilibFocusView <NSTextViewDelegate>
{
    MAKitScrollView *scrollView;
    BOOL toBeInited;
    BOOL dataChanged;
    NSTextView *textView1;
    double lastTimeALinkWasClicked;
    BOOL _isProjectNotes;
}

@property(readonly, nonatomic) BOOL isProjectNotes; // @synthesize isProjectNotes=_isProjectNotes;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)doBuildEditMenu:(id)arg1;
- (BOOL)includeInViewList;
- (void)viewVisibilityChangePriv:(BOOL)arg1;
- (void)setNotesBackColor:(id)arg1;
- (id)color;
- (void)endNotesEdit;
- (void)sendTextChangeNotification;
- (void)setNotesToModel;
- (void)resetTextViewUndoManager;
- (void)setNotesContent:(id)arg1;
- (void)setNotesName:(id)arg1;
- (void)controlActionCall:(id)arg1;
- (unsigned long long)validModesForFontPanel:(id)arg1;
- (void)setDataChanged:(BOOL)arg1;
- (void)setTextIsEditable:(BOOL)arg1;
- (BOOL)textIsEditable;
- (id)textView;
- (id)createHeaderControls;
- (void)print:(id)arg1;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)intervallSinceLastTimeALinkWasClicked;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isProjectNotes:(BOOL)arg2;
- (void)_setupStandardAttributes;
- (id)_getParagraphStyleForFontSize:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

