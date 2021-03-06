//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__TPBodyRepAccessibility_super.h"

@class NSArray, NSString, TPBookmarkController, TSDFillAccessibility;

@interface TPBodyRepAccessibility : __TPBodyRepAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
+ (id)tsaxCastFrom:(id)arg1;
@property(readonly, nonatomic) TSDFillAccessibility *tsaxPageBackgroundFill;
- (BOOL)tsaxIsDecorativeElement;
- (BOOL)tsaxSupportsChangeTracking;
- (id)tsaxInteractiveCanvasController;
- (id)tsaxSelectionPathForTextRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) NSString *tsaxPageBackgroundFillLabel;
@property(readonly, nonatomic) NSArray *tsaxAllBookmarksSortedByPosition;
@property(readonly, nonatomic) TPBookmarkController *tsaxBookmarkController;
- (id)tsaxTarget;
- (struct _NSRange)_tsaxExtendedRangeForZeroLengthBookmarkAtCharacterIndexInStorage:(unsigned long long)arg1;
- (id)_tsaxSearchForBookmarkWithPredicate:(id)arg1;
- (id)accessibilityCustomChoosers;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)tsaxLabel;
- (BOOL)tsaxTextIsEditable;

@end

