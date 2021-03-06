//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSPointerArray;

@interface CRInvocationChain : NSObject
{
    NSObject<OS_dispatch_queue> *_chainedObjectsAccessQueue;
    id <CRInvocationChainDelegate> _delegate;
    NSPointerArray *_chainedObjects;
}

@property(retain, nonatomic, getter=_chainedObjects, setter=_setChainedObjects:) NSPointerArray *chainedObjects; // @synthesize chainedObjects=_chainedObjects;
@property(nonatomic) __weak id <CRInvocationChainDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_isEligibleForSelector:(SEL)arg1;
- (void)_enumerateChainedObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_addChainedObject:(id)arg1;
- (id)_methodSignatureForSelector:(SEL)arg1;
- (BOOL)_respondsToSelector:(SEL)arg1;
- (void)_forwardInvocation:(id)arg1;
- (void)_accessChainedObjectsSafely:(CDUnknownBlockType)arg1;
- (BOOL)isEligibleForSelector:(SEL)arg1;
- (void)enumerateChainedObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addChainedObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)init;

@end

