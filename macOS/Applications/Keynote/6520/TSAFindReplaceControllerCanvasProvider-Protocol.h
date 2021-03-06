//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<TSDEditor>, TSAFindReplaceController, TSWPInteractiveCanvasController;

@protocol TSAFindReplaceControllerCanvasProvider <NSObject>
- (void)findReplaceControllerCommitAllEditing:(TSAFindReplaceController *)arg1;
- (TSWPInteractiveCanvasController *)findReplaceControllerInteractiveCanvasControllerToFocusAfterFind:(TSAFindReplaceController *)arg1;
- (TSWPInteractiveCanvasController *)findReplaceControllerInteractiveCanvasControllerForClearingSelectionBeforeFind:(TSAFindReplaceController *)arg1;
- (NSObject<TSDEditor> *)findReplaceControllerFocusedTextInputEditor:(TSAFindReplaceController *)arg1;
- (TSWPInteractiveCanvasController *)findReplaceController:(TSAFindReplaceController *)arg1 interactiveCanvasControllerForModel:(id <TSKModel>)arg2;
@end

