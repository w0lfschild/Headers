//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol _NSCollectionLayoutAuxiliaryHosting <NSObject>
- (id <_NSCollectionPreferredSizes>)auxiliaryHostPreferredSizes;
- (id <_NSCollectionLayoutSupplementaryEnrolling>)auxiliaryHostSupplementaryEnroller;
- (long long)auxiliaryHostAuxiliaryKind;
- (int)auxiliaryHostLayoutAxis;
- (BOOL)auxiliaryHostShouldLayoutRTL;
- (NSArray *)auxiliaryHostAuxiliaryItems;
- (id <NSCollectionLayoutContainer>)auxiliaryHostContainer;
- (struct CGSize)auxiliaryHostPinningContentSize;
- (struct CGSize)auxiliaryHostContentSize;

@optional
- (struct CGPoint)auxiliaryHostAdditionalFrameOffset;
@end

