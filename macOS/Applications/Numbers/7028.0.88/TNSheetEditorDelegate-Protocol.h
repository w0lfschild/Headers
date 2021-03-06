//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TNSheetEditor;

@protocol TNSheetEditorDelegate <NSObject>
- (void)keyboardSelectSheetByPosition:(id)arg1;
- (void)keyboardSelectNextSheet:(id)arg1;
- (void)keyboardSelectPrevSheet:(id)arg1;
- (void)keyboardSelectLastSheet:(id)arg1;
- (void)keyboardSelectFirstSheet:(id)arg1;
- (BOOL)canSwitchSheetsViaKeyboard;
- (void)setCanvasAnchoredAtRight:(BOOL)arg1;
- (void)sheetEditorDidBecomeUnpaginated:(TNSheetEditor *)arg1;
- (void)sheetEditorDidBecomePaginated:(TNSheetEditor *)arg1;
- (void)sheetEditorWillBecomePaginated:(TNSheetEditor *)arg1;
@end

