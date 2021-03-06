//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MRSViewController.h"

@class MRSPackageScript, NSButton, NSSegmentedControl, NSTextField;

@interface MRSScriptPlaceholderViewController : MRSViewController
{
    BOOL _contentHidden;
    MRSPackageScript *_currentScript;
    NSTextField *_placeholderTextField;
    NSSegmentedControl *_openWithControl;
    NSButton *_helpButton;
}

@property __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property __weak NSSegmentedControl *openWithControl; // @synthesize openWithControl=_openWithControl;
@property __weak NSTextField *placeholderTextField; // @synthesize placeholderTextField=_placeholderTextField;
@property(nonatomic) BOOL contentHidden; // @synthesize contentHidden=_contentHidden;
@property(retain, nonatomic) MRSPackageScript *currentScript; // @synthesize currentScript=_currentScript;
- (void).cxx_destruct;
- (void)didClickHelpButton:(id)arg1;
- (void)_didUpdateApplicationBindings:(id)arg1;
- (void)_updateOpenWithButton;
- (void)_updateUIForCurrentScript;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

