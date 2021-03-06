//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TViewController.h"

@class NSIndexSet, NSObjectController;

@interface IBaseTableViewController : TViewController
{
    NSObjectController *_dataSource;
    struct TNSRef<NSIndexSet, void> _columnIndexesToResizeToFitContents;
    TNSWeakPtr_971ddea6 _updateColumnWidthsToFitContentsToken;
    struct TKeyValueObserver _arrangedObjectsObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)arrangedObjectsChanged;
- (void)updateColumnWidthsToFitContents;
- (id)selectionIndexesForProposedSelection:(id)arg1;
- (void)addColumn:(id)arg1;
@property(retain, nonatomic) NSIndexSet *columnIndexesToResizeToFitContents; // @dynamic columnIndexesToResizeToFitContents;
- (void)setView:(id)arg1;
- (id)_dataSource;
- (Class)dataSourceClass;
- (void)dealloc;
- (void)configureView;

@end

