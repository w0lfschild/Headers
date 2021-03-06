//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocument.h"

#import "MRSCodeObjectInfoViewControllerDelegate.h"
#import "MRSMachOInspectorViewControllerDelegate.h"

@class MRSCodeObject, MRSCodeObjectBrowserViewController, MRSCodeObjectInfoViewController, MRSDebugPreviewExtensionWindowController, MRSHelpIndex, MRSKeyValueObserver, MRSTrustPanelController, NSSplitView, NSString;

@interface MRSApparencyDocument : NSDocument <MRSCodeObjectInfoViewControllerDelegate, MRSMachOInspectorViewControllerDelegate>
{
    MRSCodeObject *_codeObject;
    MRSCodeObjectBrowserViewController *_browserViewController;
    MRSCodeObjectInfoViewController *_infoViewController;
    MRSHelpIndex *_currentHelpIndex;
    MRSKeyValueObserver *_kvo;
    MRSCodeObject *_inspectedCodeObject;
    MRSTrustPanelController *_trustPanelController;
    MRSDebugPreviewExtensionWindowController *_previewDebugWindowController;
    NSSplitView *_splitView;
}

+ (BOOL)autosavesInPlace;
- (void).cxx_destruct;
@property(nonatomic) __weak NSSplitView *splitView; // @synthesize splitView=_splitView;
- (void)shutDownAllCodeObjects:(id)arg1;
- (void)debugQuickLookPreviewExtension:(id)arg1;
- (void)showControllerHierarchyForDocument:(id)arg1;
- (void)logSelectedCodeObjects:(id)arg1;
- (void)machOInspectorViewControllerRevealImageFile:(id)arg1;
- (void)codeObjectInfoViewController:(id)arg1 showTrustPanelForObject:(id)arg2;
- (void)codeObjectInfoViewController:(id)arg1 showEntitlementsForObject:(id)arg2;
- (void)codeObjectInfoViewController:(id)arg1 showInfoPropertyListForObject:(id)arg2 focusOnKey:(id)arg3;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)performSkippedSignatureValidations:(id)arg1;
- (void)showDocumentInFinder:(id)arg1;
- (void)copyCodeSigningIdentityForSelectedObject:(id)arg1;
- (void)copyPathForSelectedCodeObject:(id)arg1;
- (void)showInFinderForSelectedCodeObject:(id)arg1;
- (void)showTrustDetailsForSelectedCodeObject:(id)arg1;
- (void)showMachOInspectorForSelectedCodeObject:(id)arg1;
- (void)showEntitlementsForSelectedCodeObject:(id)arg1;
- (void)showInfoPlistForSelectedCodeObject:(id)arg1;
- (void)_handlePrefsDidChangeNotification:(id)arg1;
- (void)_showTrustPanelForCodeObject:(id)arg1;
- (void)_showMachOInspectorForCodeObject:(id)arg1;
- (void)_showEntitlementsForCodeObject:(id)arg1;
- (void)_showInfoPlistForCodeObject:(id)arg1 focusOnKey:(id)arg2;
- (id)_rootViewController;
- (void)windowControllerDidLoadNib:(id)arg1;
- (void)makeWindowControllers;
- (void)close;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)windowNibName;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)initWithType:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

