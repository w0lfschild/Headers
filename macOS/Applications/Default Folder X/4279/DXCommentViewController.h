//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "SBApplicationDelegate.h"

@class AXFileDialog, DXURLForDisplayName, NSButton, NSLayoutConstraint, NSObjectController, NSString, NSTextField, RACDisposable;

@interface DXCommentViewController : NSViewController <SBApplicationDelegate>
{
    BOOL _isSingleSelection;
    BOOL _isItemWritable;
    NSTextField *_commentField;
    NSTextField *_fileNameField;
    NSLayoutConstraint *_fileNameTopMargin;
    NSButton *_rememberForNextTimeCheckbox;
    NSObjectController *_proxyOwner;
    NSString *_fileName;
    NSString *_filePath;
    NSString *_comment;
    NSString *_lastLoadedComment;
    AXFileDialog *_lastFileDialog;
    RACDisposable *_dialogNameWatcher;
    RACDisposable *_dialogCloseWatcher;
    DXURLForDisplayName *_fileSearcher;
}

- (void).cxx_destruct;
@property(retain) DXURLForDisplayName *fileSearcher; // @synthesize fileSearcher=_fileSearcher;
@property(retain) RACDisposable *dialogCloseWatcher; // @synthesize dialogCloseWatcher=_dialogCloseWatcher;
@property(retain) RACDisposable *dialogNameWatcher; // @synthesize dialogNameWatcher=_dialogNameWatcher;
@property __weak AXFileDialog *lastFileDialog; // @synthesize lastFileDialog=_lastFileDialog;
@property(retain) NSString *lastLoadedComment; // @synthesize lastLoadedComment=_lastLoadedComment;
@property(retain) NSString *comment; // @synthesize comment=_comment;
@property(retain) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
@property BOOL isItemWritable; // @synthesize isItemWritable=_isItemWritable;
@property BOOL isSingleSelection; // @synthesize isSingleSelection=_isSingleSelection;
@property __weak NSObjectController *proxyOwner; // @synthesize proxyOwner=_proxyOwner;
@property __weak NSButton *rememberForNextTimeCheckbox; // @synthesize rememberForNextTimeCheckbox=_rememberForNextTimeCheckbox;
@property __weak NSLayoutConstraint *fileNameTopMargin; // @synthesize fileNameTopMargin=_fileNameTopMargin;
@property __weak NSTextField *fileNameField; // @synthesize fileNameField=_fileNameField;
@property __weak NSTextField *commentField; // @synthesize commentField=_commentField;
- (void)returnPressed:(id)arg1;
- (void)selectCommentField:(id)arg1;
- (void)setFinderComment:(id)arg1 forFutureFile:(id)arg2 atPath:(id)arg3;
- (id)eventDidFail:(const struct AEDesc *)arg1 withError:(id)arg2;
- (void)setFinderComment:(id)arg1 forURL:(id)arg2;
- (id)finderCommentForURL:(id)arg1;
- (void)startListeningForCommentChanges;
- (void)startListeningForRepresentedObject;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)dealloc;
- (void)viewDidLoad;

@end

