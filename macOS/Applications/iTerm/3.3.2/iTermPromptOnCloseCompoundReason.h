//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermPromptOnCloseReason.h"

@class NSMutableArray;

@interface iTermPromptOnCloseCompoundReason : iTermPromptOnCloseReason
{
    NSMutableArray *_children;
}

- (id)priority;
- (void)addReason:(id)arg1;
- (id)message;
- (BOOL)hasReason;
- (void)dealloc;
- (id)init;

@end

