//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TCollectionView.h"

#import "TShrinkToFitDelegateProtocol-Protocol.h"

@class NSString;

@interface TIconOrGalleryCollectionView : TCollectionView <TShrinkToFitDelegateProtocol>
{
    struct TNSRef<TShrinkToFitController, void> _stfController;
    struct TFENode _nodeBeingEdited;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)hitTestInIconViewIconOrText:(const struct CGPoint *)arg1;
- (id)hitTestInIconViewText:(const struct CGPoint *)arg1;
- (id)hitTestInIconViewIcon:(const struct CGPoint *)arg1;
- (id)viewAtLocalPoint:(const struct CGPoint *)arg1;
- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (id)iconOrGalleryCollectionViewDelegate;
- (const struct TFENode *)nodeBeingEdited;
- (void)updateSTFEditorLocation;
- (pair_2447b6e7)maxSTFEditorGlobalFrameAndBaselineForIconView:(id)arg1;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2 afterDelay:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

