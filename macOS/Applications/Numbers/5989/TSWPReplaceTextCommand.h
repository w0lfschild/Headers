//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPStorageActionCommand.h"

#import "TSDCommandInducedForPropagation-Protocol.h"

@class NSArray, NSString, TSKAddedToDocumentContext;

@interface TSWPReplaceTextCommand : TSWPStorageActionCommand <TSDCommandInducedForPropagation>
{
    BOOL _withPasteRules;
    BOOL _deletingBackward;
    BOOL _doNotTrackDeletion;
    BOOL _crossDocumentPaste;
    TSKAddedToDocumentContext *_dolcContext;
    NSString *_language;
    NSString *_dictationAndAutocorrection;
    id _text;
}

@property(nonatomic) BOOL crossDocumentPaste; // @synthesize crossDocumentPaste=_crossDocumentPaste;
@property(nonatomic) BOOL doNotTrackDeletion; // @synthesize doNotTrackDeletion=_doNotTrackDeletion;
@property(nonatomic) BOOL deletingBackward; // @synthesize deletingBackward=_deletingBackward;
@property(nonatomic) BOOL withPasteRules; // @synthesize withPasteRules=_withPasteRules;
@property(retain, nonatomic) id text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *dictationAndAutocorrection; // @synthesize dictationAndAutocorrection=_dictationAndAutocorrection;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) TSKAddedToDocumentContext *dolcContext; // @synthesize dolcContext=_dolcContext;
- (void).cxx_destruct;
- (struct _NSRange)p_selectionRangeAfterReplacingRange:(struct _NSRange)arg1 changedRange:(struct _NSRange)arg2;
- (BOOL)isCommandUsedForTyping;
@property(readonly, nonatomic) NSArray *otherSerializationClasses;
- (id)makeInverse;
- (BOOL)canCoalesceWithCommand:(id)arg1 coalescingKind:(long long)arg2;
- (int)persistenceKind;
- (BOOL)requiresCustomFormatHandling;
- (struct _NSRange)doCommitWithNewTransaction:(struct TSWPStorageTransaction *)arg1;
- (id)actionString;
- (void)setUpdateSelection:(BOOL)arg1;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 insertText:(id)arg3 coalesceable:(BOOL)arg4 coalescingText:(BOOL)arg5 updateSelection:(BOOL)arg6 deletingBackward:(BOOL)arg7 pasteRules:(BOOL)arg8;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 insertText:(id)arg3 coalesceable:(BOOL)arg4 coalescingText:(BOOL)arg5 updateSelection:(BOOL)arg6 deletingBackward:(BOOL)arg7 undoSelection:(id)arg8;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 storageTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 insertText:(id)arg3 coalesceable:(BOOL)arg4 coalescingText:(BOOL)arg5;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 insertText:(id)arg3 updateSelection:(BOOL)arg4;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 insertText:(id)arg3 crossDocumentPaste:(BOOL)arg4;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 insertText:(id)arg3;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 insertStorage:(id)arg3 withPasteRules:(BOOL)arg4 dolcContext:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) NSArray *objectsBeingModified;

@end

