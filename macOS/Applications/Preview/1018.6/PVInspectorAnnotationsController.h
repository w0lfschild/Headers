//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTextViewDelegate-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSObjectController, NSString, NSTableView, NSTextView, PVClickableTextField, PVMediaContainerBase;

@interface PVInspectorAnnotationsController : NSObject <NSTextViewDelegate>
{
    NSObjectController *_inspectedWindowController;
    NSTableView *_tableView;
    NSTextView *_textView;
    PVClickableTextField *_createNewPrompt;
    PVClickableTextField *_statusPrompt;
    BOOL _isReadyForNewPopup;
    BOOL _awokenFromNib;
    BOOL _changingAKSelectionViaTableView;
    BOOL _changingTableViewSelectionViaAK;
    PVMediaContainerBase *_inspectedMediaContainer;
    long long _contentViewKind;
    NSMutableArray *_flattenedAnnotations;
    NSArray *_arrangedFlattenedAnnotations;
    id _editingNoteAnnotation;
    NSMapTable *_annotationsToAuxData;
}

- (void).cxx_destruct;
@property(getter=isChangingTableViewSelectionViaAK) BOOL changingTableViewSelectionViaAK; // @synthesize changingTableViewSelectionViaAK=_changingTableViewSelectionViaAK;
@property(getter=isChangingAKSelectionViaTableView) BOOL changingAKSelectionViaTableView; // @synthesize changingAKSelectionViaTableView=_changingAKSelectionViaTableView;
@property(retain) NSMapTable *annotationsToAuxData; // @synthesize annotationsToAuxData=_annotationsToAuxData;
@property __weak id editingNoteAnnotation; // @synthesize editingNoteAnnotation=_editingNoteAnnotation;
@property(retain) NSArray *arrangedFlattenedAnnotations; // @synthesize arrangedFlattenedAnnotations=_arrangedFlattenedAnnotations;
@property(retain) NSMutableArray *flattenedAnnotations; // @synthesize flattenedAnnotations=_flattenedAnnotations;
@property(readonly, nonatomic) long long contentViewKind; // @synthesize contentViewKind=_contentViewKind;
@property(nonatomic) __weak PVMediaContainerBase *inspectedMediaContainer; // @synthesize inspectedMediaContainer=_inspectedMediaContainer;
@property(getter=isAwokenFromNib) BOOL awokenFromNib; // @synthesize awokenFromNib=_awokenFromNib;
@property BOOL isReadyForNewPopup; // @synthesize isReadyForNewPopup=_isReadyForNewPopup;
- (id)_sortDescriptorsForTableView;
- (id)_dateStringForAnnotation:(id)arg1;
- (id)_dateForAnnotation:(id)arg1;
- (id)_authorForAnnotation:(id)arg1;
- (id)_colorForAnnotation:(id)arg1;
- (id)_typeForAnnotation:(id)arg1;
- (id)_pageStringForAnnotation:(id)arg1;
- (unsigned long long)_pageIndexForAnnotation:(id)arg1;
- (id)_modelSelectionFromTableSelection:(id)arg1;
- (id)_arrangedIndexesOfAnnotations:(id)arg1;
- (unsigned long long)_unarrangedIndexOfFirstAnnotationOfPageController:(id)arg1;
- (void)_updateArrangedAnnotationsArray;
- (void)_buildFlattenedAnnotationArray;
- (void)_annotationChanged:(id)arg1;
- (void)_annotationsRemoved:(id)arg1;
- (void)_annotationsInserted:(id)arg1;
- (void)_annotationSelectionChanged:(id)arg1;
- (void)_currentMediaContainerChangedNotification:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)_saveEditsForNoteAnnotation;
- (void)deleteKeyDownInTable:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)createNewNoteClickAction:(id)arg1;
- (id)customResizabilityOptions;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

