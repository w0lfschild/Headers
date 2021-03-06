//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSImageView, NSString, NSTextField, NSURL, NSWindow, SKDisk, SUBaseProgressSheet, SURestoreSourceController;

@interface SURestoreSheetController : NSWindowController
{
    BOOL _isSrcEncrypted;
    BOOL _didMountImage;
    NSWindow *_parentWindow;
    NSTextField *_sheetTitle;
    NSTextField *_sheetDetail;
    NSImageView *_diskIconView;
    SURestoreSourceController *_sourceController;
    SKDisk *_targetDisk;
    SKDisk *_srcDisk;
    NSURL *_srcURL;
    NSString *_srcVolumeUUID;
    SUBaseProgressSheet *_progressSheet;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) SUBaseProgressSheet *progressSheet; // @synthesize progressSheet=_progressSheet;
@property BOOL didMountImage; // @synthesize didMountImage=_didMountImage;
@property BOOL isSrcEncrypted; // @synthesize isSrcEncrypted=_isSrcEncrypted;
@property(copy) NSString *srcVolumeUUID; // @synthesize srcVolumeUUID=_srcVolumeUUID;
@property(retain) NSURL *srcURL; // @synthesize srcURL=_srcURL;
@property(retain) SKDisk *srcDisk; // @synthesize srcDisk=_srcDisk;
@property(retain) SKDisk *targetDisk; // @synthesize targetDisk=_targetDisk;
@property __weak SURestoreSourceController *sourceController; // @synthesize sourceController=_sourceController;
@property __weak NSImageView *diskIconView; // @synthesize diskIconView=_diskIconView;
@property __weak NSTextField *sheetDetail; // @synthesize sheetDetail=_sheetDetail;
@property __weak NSTextField *sheetTitle; // @synthesize sheetTitle=_sheetTitle;
@property(retain) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void)restoreButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)showWindowWithParentWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)windowDidLoad;
- (id)initWithTargetDisk:(id)arg1;

@end

