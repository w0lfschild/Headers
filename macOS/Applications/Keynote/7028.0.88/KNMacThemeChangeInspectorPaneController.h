//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSApplication/TMAInspectorPaneController.h>

#import "TSKChangeSourceObserver-Protocol.h"
#import "_TtP7Keynote34KNMacThemeChangeControllerDelegate_-Protocol.h"

@class KNDocumentRoot, KNMacInspectorSlideThumbnailLayer, KNShow, KNShowProxy, KNSlideNode, NSButton, NSString, NSTextField, NSView;

@interface KNMacThemeChangeInspectorPaneController : TMAInspectorPaneController <_TtP7Keynote34KNMacThemeChangeControllerDelegate_, TSKChangeSourceObserver>
{
    NSButton *_changeThemeButton;
    NSTextField *_themeNameLabel;
    NSView *_thumbnailHostView;
    KNMacInspectorSlideThumbnailLayer *_thumbnailLayer;
    KNSlideNode *_firstMasterSlideNode;
    KNShowProxy *_showProxy;
    NSString *_savedToolTip;
}

+ (id)keyPathsForValuesAffectingChangeThemeButtonToolTip;
+ (id)nibName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *savedToolTip; // @synthesize savedToolTip=_savedToolTip;
@property(readonly, nonatomic) KNShowProxy *showProxy; // @synthesize showProxy=_showProxy;
@property(retain, nonatomic) KNSlideNode *firstMasterSlideNode; // @synthesize firstMasterSlideNode=_firstMasterSlideNode;
@property(retain, nonatomic) KNMacInspectorSlideThumbnailLayer *thumbnailLayer; // @synthesize thumbnailLayer=_thumbnailLayer;
@property(retain, nonatomic) NSView *thumbnailHostView; // @synthesize thumbnailHostView=_thumbnailHostView;
@property(retain, nonatomic) NSTextField *themeNameLabel; // @synthesize themeNameLabel=_themeNameLabel;
@property(retain, nonatomic) NSButton *changeThemeButton; // @synthesize changeThemeButton=_changeThemeButton;
- (void)themeChangeController:(id)arg1 didRequestToHandleError:(id)arg2;
- (void)themeChangeController:(id)arg1 didChooseTemplateDocument:(id)arg2 keepChangesToDefault:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)p_windowForSheet;
@property(readonly, nonatomic) KNDocumentRoot *documentRoot;
@property(readonly, nonatomic) KNShow *show;
- (id)p_showProxy;
- (void)p_showChooser:(id)arg1;
- (id)changeThemeButtonToolTip;
- (void)p_updateThumbnail;
- (void)p_updateThemeNameLabel;
- (void)p_removeChangeObservers;
- (void)p_updateThemeInfo;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

