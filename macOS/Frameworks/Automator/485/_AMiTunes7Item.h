//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBObject.h"

@class NSString;

@interface _AMiTunes7Item : SBObject
{
}

- (void)reveal;
- (void)playOnce:(BOOL)arg1;
- (void)open;
- (BOOL)exists;
- (id)duplicateTo:(id)arg1;
- (void)delete;
- (void)close;
- (void)printPrintDialog:(BOOL)arg1 withProperties:(id)arg2 kind:(int)arg3 theme:(id)arg4;
@property(readonly, copy) NSString *persistentID;
@property(copy) NSString *name;
- (long long)id;
@property(readonly, copy) SBObject *container;

@end

