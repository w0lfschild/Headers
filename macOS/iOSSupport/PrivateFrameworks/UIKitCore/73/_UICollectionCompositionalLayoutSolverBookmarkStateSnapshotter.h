//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _UICollectionSectionSolutionBookmark;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverBookmarkStateSnapshotter : NSObject
{
    _UICollectionSectionSolutionBookmark *_bookmark;
    long long _originalSectionIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long originalSectionIndex; // @synthesize originalSectionIndex=_originalSectionIndex;
- (void)applyStateToBookmark:(id)arg1;
- (id)initWithBookmark:(id)arg1 originalSectionIndex:(long long)arg2;

@end

