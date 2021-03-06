//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionView.h>

#import "NSUserInterfaceValidations-Protocol.h"

@protocol NSCollectionViewDelegate><PVSidebarCollectionViewDelegate;

@interface PVSidebarCollectionView : NSCollectionView <NSUserInterfaceValidations>
{
}

- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isHiddenOrHasHiddenAncestor;

// Remaining properties
@property id <NSCollectionViewDelegate><PVSidebarCollectionViewDelegate> delegate; // @dynamic delegate;

@end

