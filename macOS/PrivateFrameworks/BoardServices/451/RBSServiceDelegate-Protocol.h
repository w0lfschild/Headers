//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BoardServices/NSObject-Protocol.h>

@class NSSet, RBSService;

@protocol RBSServiceDelegate <NSObject>
- (void)service:(RBSService *)arg1 didLoseInheritances:(NSSet *)arg2;
- (void)service:(RBSService *)arg1 didReceiveInheritances:(NSSet *)arg2;
@end

