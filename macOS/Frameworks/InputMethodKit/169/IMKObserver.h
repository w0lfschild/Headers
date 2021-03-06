//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSString;

@interface IMKObserver : NSObject
{
    NSObject *_observedObject;
    NSString *_observedKeyPath;
    NSOperationQueue *_queue;
    CDUnknownBlockType _observerBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSString *observedKeyPath; // @synthesize observedKeyPath=_observedKeyPath;
@property __weak NSObject *observedObject; // @synthesize observedObject=_observedObject;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) BOOL isObserving;
- (void)endObservation;
- (void)dealloc;
- (id)initWithObservedObject:(id)arg1 observedKeyPath:(id)arg2 queue:(id)arg3 observerBlock:(CDUnknownBlockType)arg4;

@end

