//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PKDiscoveryService;

@protocol PKDiscoveryObserver <NSObject>

@optional
- (void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(PKDiscoveryService *)arg1;
- (void)discoveryService:(PKDiscoveryService *)arg1 receivedUpdatedDiscoveryArticleLayouts:(NSArray *)arg2;
@end

