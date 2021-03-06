//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/NFFolder.h>

#import "ICFolderUndoSupport-Protocol.h"

@class ICFolderCustomNoteSortType, NSArray, NSString;

@interface NFFolder (ICUndoSupport) <ICFolderUndoSupport>
@property(readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
- (void)undoablySetName:(id)arg1;
- (void)undoablySetParent:(id)arg1;
- (void)_undoablyUndeleteTo:(id)arg1 actionName:(id)arg2;
- (void)undoablyMoveToTrashWithActionName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *subfoldersForCopying;
@property(readonly, copy, nonatomic) NSArray *notesForCopying;
@property(readonly, copy, nonatomic) NSString *titleForCopying;
- (id)scriptingObject;
- (id)scriptingContainer;
- (id)scriptingID;
- (void)setScriptingName:(id)arg1;
- (id)scriptingName;
- (BOOL)isShared;
- (void)removeObjectFromScriptingNotesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inScriptingNotesAtIndex:(unsigned long long)arg2;
- (id)scriptingNotes;
- (void)removeObjectFromScriptingFoldersAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inScriptingFoldersAtIndex:(unsigned long long)arg2;
- (id)scriptingFolders;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)objectSpecifier;
- (id)exportParent;
- (id)exportNotes;
- (id)exportName;
- (id)exportIdentifier;
@end

