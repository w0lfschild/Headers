//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BoardServices/NSObject-Protocol.h>

@class BSXPCServiceConnection;

@protocol BSXPCServiceConnectionParent <NSObject>
@property(readonly, nonatomic, getter=_isClientInvalidated) BOOL _clientInvalidated;
@property(readonly, nonatomic, getter=_isInvalidated) BOOL _invalidated;
- (void)_invalidateChildConnection:(BSXPCServiceConnection *)arg1;
@end

