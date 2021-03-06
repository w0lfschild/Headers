//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SplitSelectionViewDelegate.h"

@class NSString, PTYSession;

@interface MovePaneController : NSObject <SplitSelectionViewDelegate>
{
    BOOL isMove_;
    PTYSession *session_;
    BOOL dragFailed_;
    BOOL didSplit_;
    BOOL _isDragInProgress;
    BOOL _dropping;
}

+ (void)moveTab:(id)arg1 toWindow:(id)arg2 atIndex:(long long)arg3;
+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL dropping; // @synthesize dropping=_dropping;
@property(readonly, nonatomic) BOOL isDragInProgress; // @synthesize isDragInProgress=_isDragInProgress;
@property(nonatomic) PTYSession *session; // @synthesize session=session_;
@property(nonatomic) BOOL dragFailed; // @synthesize dragFailed=dragFailed_;
- (void)didSelectDestinationSession:(id)arg1 half:(long long)arg2;
- (void)beginDrag:(id)arg1;
- (BOOL)isMovingSession:(id)arg1;
- (BOOL)reallyDropInSession:(id)arg1 half:(long long)arg2 atPoint:(struct CGPoint)arg3;
- (BOOL)dropInSession:(id)arg1 half:(long long)arg2 atPoint:(struct CGPoint)arg3;
- (BOOL)reallyDropTab:(id)arg1 inSession:(id)arg2 half:(long long)arg3 atPoint:(struct CGPoint)arg4;
- (BOOL)dropTab:(id)arg1 inSession:(id)arg2 half:(long long)arg3 atPoint:(struct CGPoint)arg4;
- (id)removeAndClearSession;
- (void)clearSession;
- (void)moveSessionToNewWindow:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)moveWindowBy:(struct CGPoint)arg1;
- (void)exitMovePaneMode;
- (void)swapPane:(id)arg1;
- (void)movePane:(id)arg1;
- (void)startWithSession:(id)arg1 move:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

