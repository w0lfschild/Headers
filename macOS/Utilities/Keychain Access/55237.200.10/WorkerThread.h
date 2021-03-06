//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class InvocationQueue, NSThread;

@interface WorkerThread : NSObject
{
    InvocationQueue *_queue;
    NSThread *_thread;
    unsigned int _threadNumber;
    BOOL _active;
    BOOL _endThread;
}

+ (BOOL)allThreadsIdle;
+ (void)addInvocationToQueue:(id)arg1;
+ (void)addAWorkerThread;
+ (void)initialize;
- (void)runInOwnThread;
- (void)run;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 threadNumber:(long long)arg2;

@end

