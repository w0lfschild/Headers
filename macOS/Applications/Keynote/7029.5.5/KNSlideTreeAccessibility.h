//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__KNSlideTreeAccessibility_super.h"

@class NSArray;

@interface KNSlideTreeAccessibility : __KNSlideTreeAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
+ (id)tsaxCastFrom:(id)arg1;
- (unsigned long long)tsaxSlideNumberForSlideNode:(id)arg1;
- (id)tsaxVisibleSlideNodeAtIndex:(unsigned long long)arg1;
- (id)tsaxSlideNodeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *tsaxVisibleSlideNodes;
- (id)tsaxSlideNodes;
- (id)tsaxTarget;

@end

