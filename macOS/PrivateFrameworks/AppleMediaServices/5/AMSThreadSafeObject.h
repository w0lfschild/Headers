//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface AMSThreadSafeObject : NSObject
{
    id _object;
    NSObject<OS_dispatch_queue> *_objectAccessQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *objectAccessQueue; // @synthesize objectAccessQueue=_objectAccessQueue;
- (void).cxx_destruct;
- (id)accessAndSetObjectWithBlock:(CDUnknownBlockType)arg1;
@property(retain) id object; // @synthesize object=_object;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

