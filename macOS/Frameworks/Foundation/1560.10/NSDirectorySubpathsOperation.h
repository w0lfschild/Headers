//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation
{
    NSMutableArray *_subpaths;
}

+ (id)directorySubpathsOperationAtPath:(id)arg1;
+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
- (void)dealloc;
- (id)subpaths;
- (void)handlePathname:(id)arg1;

@end

