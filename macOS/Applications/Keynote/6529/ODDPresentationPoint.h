//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ODDPoint.h"

@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint
{
    ODDPresentationPoint *mParent;
    NSMutableArray *mChildren;
}

- (void).cxx_destruct;
- (void)addChild:(id)arg1 order:(unsigned long long)arg2;
- (id)children;
- (id)parent;
- (void)setType:(int)arg1;

@end

