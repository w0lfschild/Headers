//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary;

@protocol WDSessionProvider
@property(readonly, copy) NSArray *sessions;
- (void)destroySession:(id <WDSession>)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)requestSessionWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *, id <WDSession>))arg2;
@end

