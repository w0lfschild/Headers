//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class PGManager, PHAGraphManager;

@protocol PHAGraphManagerClientMessages

@optional
- (void)graphBecameReady:(PGManager *)arg1 forPHAGraphManager:(PHAGraphManager *)arg2;
- (void)photoAnalysisGraphManager:(PHAGraphManager *)arg1 graphIsConsistent:(BOOL)arg2;
- (void)photoAnalysisGraphManager:(PHAGraphManager *)arg1 graphUpdateMadeProgress:(double)arg2;
@end

