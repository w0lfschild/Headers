//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSKit/TSKSelectionPath.h>

@class KNCanvasSelection, TSDDrawableSelection;

@interface TSKSelectionPath (KNAdditions)
+ (void)validateSlideSelectionPath:(id)arg1;
@property(readonly, nonatomic) TSDDrawableSelection *drawableSelection;
@property(readonly, nonatomic) KNCanvasSelection *canvasSelection;
- (id)selectionPathByReplacingOutlineSelection:(id)arg1;
- (id)selectionPathReplacingLocationsOfSelection:(id)arg1 withSelection:(id)arg2;
- (BOOL)containsTextSelectionInsideCaptionAllowNonImmediateParent:(BOOL)arg1;
@property(readonly, nonatomic) BOOL containsText;
@property(readonly, nonatomic) BOOL containsDrawableOrText;
@property(readonly, nonatomic) BOOL containsMasterSlideNodes;
@property(readonly, nonatomic) BOOL containsPresenterNotes;
@end

