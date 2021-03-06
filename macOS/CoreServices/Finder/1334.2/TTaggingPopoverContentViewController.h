//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TViewController.h"

@class TTagEditorController, TTaggingTokenField, TTextField, TUpdateLayerView;

@interface TTaggingPopoverContentViewController : TViewController
{
    TTextField *_titleField;
    TTagEditorController *_tagEditorController;
    struct TNSWeakPtr<TTaggingTokenField, void> _weakTokenField;
    TUpdateLayerView *_suggestionsTableViewWrapper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelOperation:(id)arg1;
- (void)setNodes:(const struct TFENodeVector *)arg1;
- (void)setTokenField:(id)arg1;
@property(readonly) __weak TTaggingTokenField *tokenField; // @dynamic tokenField;
- (id)nibName;
- (void)configureView;

@end

