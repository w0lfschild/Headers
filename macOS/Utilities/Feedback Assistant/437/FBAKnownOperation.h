//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBABugFormDelegate, FBAOperationDelegate;

@interface FBAKnownOperation : NSObject
{
    id <FBABugFormDelegate> _formDelegate;
    id <FBAOperationDelegate> _operationDelegate;
}

- (void).cxx_destruct;
@property __weak id <FBAOperationDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property __weak id <FBABugFormDelegate> formDelegate; // @synthesize formDelegate=_formDelegate;
- (void)runScript:(id)arg1 withOutputFilename:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

@end

