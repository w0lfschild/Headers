//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol IPXLibraryChooserClientProtocol <NSObject>
- (void)didRemoveLibrariesAtPaths:(NSArray *)arg1;
- (void)didChangeLibrariesAtPaths:(NSArray *)arg1 to:(NSArray *)arg2;
- (void)didAddLibraries:(NSArray *)arg1;
- (void)didFinishInitialResultGatheringPhase;
- (void)didStartInitialResultGatheringPhase;
@end

