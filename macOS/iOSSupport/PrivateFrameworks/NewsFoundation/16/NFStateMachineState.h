//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NFStateMachineState : NSObject
{
    NSString *_name;
    CDUnknownBlockType _canTryBlock;
    CDUnknownBlockType _willExitBlock;
    CDUnknownBlockType _willEnterBlock;
    CDUnknownBlockType _didExitBlock;
    CDUnknownBlockType _didEnterBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didEnterBlock; // @synthesize didEnterBlock=_didEnterBlock;
@property(copy, nonatomic) CDUnknownBlockType didExitBlock; // @synthesize didExitBlock=_didExitBlock;
@property(copy, nonatomic) CDUnknownBlockType willEnterBlock; // @synthesize willEnterBlock=_willEnterBlock;
@property(copy, nonatomic) CDUnknownBlockType willExitBlock; // @synthesize willExitBlock=_willExitBlock;
@property(copy, nonatomic) CDUnknownBlockType canTryBlock; // @synthesize canTryBlock=_canTryBlock;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)onDidEnter:(CDUnknownBlockType)arg1;
- (id)onWillEnter:(CDUnknownBlockType)arg1;
- (id)onDidExit:(CDUnknownBlockType)arg1;
- (id)onWillExit:(CDUnknownBlockType)arg1;
- (id)onCanTry:(CDUnknownBlockType)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1;
- (id)didEnter:(id)arg1 withOwner:(id)arg2;
- (id)didExit:(id)arg1 withOwner:(id)arg2;
- (void)willEnter:(id)arg1 withOwner:(id)arg2;
- (void)willExit:(id)arg1 withOwner:(id)arg2;
- (BOOL)canTry:(id)arg1 withOwner:(id)arg2;

@end

