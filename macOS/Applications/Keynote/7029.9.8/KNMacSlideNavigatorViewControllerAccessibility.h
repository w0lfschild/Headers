//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__KNMacSlideNavigatorViewControllerAccessibility_super.h"

@class KNNavigatorLayerAccessibility;

@interface KNMacSlideNavigatorViewControllerAccessibility : __KNMacSlideNavigatorViewControllerAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
+ (id)tsaxCastFrom:(id)arg1;
@property(readonly, nonatomic) KNNavigatorLayerAccessibility *_tsaxNavigatorLayer;
- (void)tsaxLoadAccessibilityInformation;
- (void)p_updateSelectionViewState;
- (BOOL)promoteSelectedSlideNodes;
- (BOOL)demoteSelectedSlideNodes;
- (BOOL)collapseSelectedDisclosureIncludingDescendants:(BOOL)arg1;
- (BOOL)expandSelectedDisclosureIncludingDescendants:(BOOL)arg1;
- (BOOL)tsaxToggleDisclosureAtIndex:(unsigned long long)arg1 toggleDescendents:(BOOL)arg2;
- (id)tsaxTarget;

@end

