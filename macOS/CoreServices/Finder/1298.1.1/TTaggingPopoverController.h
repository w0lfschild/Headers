//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPopoverController.h"

@interface TTaggingPopoverController : TPopoverController
{
    struct TNSRef<TTaggingPopoverContentViewController, void> _popoverContentViewController;
    struct TNotificationCenterObserver _didEndEditingObserver;
    struct TNSRef<TTagEditorController, void> _editorController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)showPopoverForNodes:(const struct TFENodeVector *)arg1 belowView:(id)arg2 verticalInset:(double)arg3;
- (void)showPopoverOverNode:(const struct TFENode *)arg1 forNodes:(const struct TFENodeVector *)arg2 belowView:(id)arg3;
- (void)setNodes:(const struct TFENodeVector *)arg1;
- (void)aboutToTearDown;
- (id)initWithWidth:(double)arg1;

@end

