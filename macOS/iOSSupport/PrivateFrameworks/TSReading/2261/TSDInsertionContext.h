//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDInsertionContext : NSObject
{
}

+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint)arg1 required:(BOOL)arg2 shouldEndEditing:(BOOL)arg3 fromDragToInsertController:(BOOL)arg4 insertWillBeDiscarded:(BOOL)arg5;
+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint)arg1 required:(BOOL)arg2 fromDragToInsertController:(BOOL)arg3 insertWillBeDiscarded:(BOOL)arg4;
+ (id)nonInteractiveFloatingInsertionContext;
+ (id)nonInteractiveInsertionContext;
@property(readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property(readonly, nonatomic) BOOL insertWillBeDiscarded;
@property(readonly, nonatomic) BOOL fromDragToInsertController;
@property(readonly, nonatomic) BOOL insertFromDrag;
@property(readonly, nonatomic) BOOL insertFloating;
@property(readonly, nonatomic) BOOL shouldEndEditing;
@property(readonly, nonatomic) struct CGPoint preferredCenter;
@property(readonly, nonatomic, getter=isPreferredCenterRequired) BOOL preferredCenterRequired;
@property(readonly, nonatomic) BOOL hasPreferredCenter;
- (id)init;

@end

