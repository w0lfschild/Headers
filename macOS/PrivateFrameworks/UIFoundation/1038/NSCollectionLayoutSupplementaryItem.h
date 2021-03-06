//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIFoundation/NSCollectionLayoutItem.h>

#import "NSCopying.h"

@class NSCollectionLayoutAnchor, NSString;

@interface NSCollectionLayoutSupplementaryItem : NSCollectionLayoutItem <NSCopying>
{
    long long _zIndex;
    NSString *_elementKind;
    NSCollectionLayoutAnchor *_containerAnchor;
    NSCollectionLayoutAnchor *_itemAnchor;
}

+ (id)supplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4;
+ (id)supplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCollectionLayoutAnchor *itemAnchor; // @synthesize itemAnchor=_itemAnchor;
@property(retain, nonatomic) NSCollectionLayoutAnchor *containerAnchor; // @synthesize containerAnchor=_containerAnchor;
@property(retain, nonatomic) NSString *elementKind; // @synthesize elementKind=_elementKind;
@property long long zIndex; // @synthesize zIndex=_zIndex;
- (id)decorationItem;
- (id)boundarySupplementaryItem;
- (id)supplementaryItem;
- (id)item;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6;

@end

