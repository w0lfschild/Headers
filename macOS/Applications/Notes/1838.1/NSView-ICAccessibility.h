//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "ICSupplementalView-Protocol.h"

@class ICAppearanceInfo, NSAppearance, NSColor;

@interface NSView (ICAccessibility) <ICSupplementalView>
- (id)icaxAncestorViewPassingTest:(CDUnknownBlockType)arg1;
- (id)ic_viewOrSuperviewOfClass:(Class)arg1;
- (BOOL)ic_becomeFirstResponder;
@property(readonly, nonatomic) BOOL ic_containsFirstResponder;
@property(readonly, nonatomic) BOOL ic_isOrContainsFirstResponder;
@property(readonly, nonatomic) BOOL ic_isFirstResponder;
- (struct CGRect)ic_rectInScreen;
- (struct CGRect)ic_contentBounds;
- (struct CGRect)ic_contentFrame;
- (id)ic_renderImageFromScreenBackingStore;
- (id)ic_renderImageViewFromScreenBackingStore;
- (id)ic_renderImageFromViewBackingStore;
- (id)ic_renderImageViewFromViewBackingStore;
- (void)ic_forceRenderSubviews;
- (id)ic_firstConstraintWithAttribute:(long long)arg1;
- (void)ic_addConstraintsToFillSuperview;
- (void)ic_addAnchorsToFillSuperview;
- (id)ic_animator;
@property(readonly, nonatomic) ICAppearanceInfo *ic_appearanceInfoForContent;
@property(readonly, nonatomic) ICAppearanceInfo *ic_appearanceInfo;
@property(readonly, nonatomic) NSAppearance *ic_platformAppearanceObject;
@property(copy, nonatomic) NSColor *ic_backgroundColor;
@property(readonly, nonatomic) BOOL ic_isRTL;
- (void)ic_applyShadowWithRadius:(double)arg1 opacity:(double)arg2 offset:(struct CGSize)arg3;
- (void)ic_applyRoundedCornersWithRadius:(double)arg1;
- (id)viewIdentifier;
@end

