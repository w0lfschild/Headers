//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol PXAsyncIterator <NSObject>
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned long long index;
- (void)stop;
- (void)next;
@end

