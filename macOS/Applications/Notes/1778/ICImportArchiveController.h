//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICLongRunningTaskController, NSManagedObject, NSViewController, _TtC5Notes17ICArchiveImporter;
@protocol ICNoteContainer;

@interface ICImportArchiveController : NSObject
{
    _TtC5Notes17ICArchiveImporter *_archiveImporter;
    NSManagedObject<ICNoteContainer> *_noteContainer;
    CDUnknownBlockType _completion;
    NSViewController *_viewController;
    ICLongRunningTaskController *_taskController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICLongRunningTaskController *taskController; // @synthesize taskController=_taskController;
@property(retain, nonatomic) NSViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSManagedObject<ICNoteContainer> *noteContainer; // @synthesize noteContainer=_noteContainer;
@property(retain, nonatomic) _TtC5Notes17ICArchiveImporter *archiveImporter; // @synthesize archiveImporter=_archiveImporter;
- (void)showError:(id)arg1;
- (void)importArchiveAtURL:(id)arg1 intoNoteContainer:(id)arg2;
- (void)importIntoNoteContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initForPresentingInViewController:(id)arg1;

@end

