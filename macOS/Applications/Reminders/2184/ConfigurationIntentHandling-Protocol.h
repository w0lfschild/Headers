//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ConfigurationIntent, ConfigurationList, NSString;

@protocol ConfigurationIntentHandling <NSObject>
- (void)provideListOptionsCollectionForConfiguration:(ConfigurationIntent *)arg1 searchTerm:(NSString *)arg2 withCompletion:(void (^)(id, NSError *))arg3;

@optional
- (void)provideListOptionsForConfiguration:(ConfigurationIntent *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (ConfigurationList *)defaultListForConfiguration:(ConfigurationIntent *)arg1;
- (void)handleConfiguration:(ConfigurationIntent *)arg1 completion:(void (^)(ConfigurationIntentResponse *))arg2;
- (void)confirmConfiguration:(ConfigurationIntent *)arg1 completion:(void (^)(ConfigurationIntentResponse *))arg2;
@end

