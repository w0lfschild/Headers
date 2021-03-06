//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, PTHotKey2;

@interface GETimeShiftController : NSObject
{
    NSMutableSet *_nodes;
    PTHotKey2 *_pauseResumeHotKey;
    PTHotKey2 *_jumpBackHotKey;
    PTHotKey2 *_jumpForwardHotKey;
    PTHotKey2 *_jumpToLiveHotKey;
}

+ (void)getIntervals:(long long [3])arg1 forString:(id)arg2;
+ (id)defaultIntervals;
+ (id)sharedController;
- (void)unregisterHotKeys;
- (void)registerHotKeys;
- (void)hotKeyChanged:(id)arg1;
- (void)unregisterNode:(id)arg1;
- (void)registerNode:(id)arg1;
@property(readonly, nonatomic) double interval3;
@property(readonly, nonatomic) double interval2;
@property(readonly, nonatomic) double interval;
- (void)dealloc;
- (id)init;

@end

