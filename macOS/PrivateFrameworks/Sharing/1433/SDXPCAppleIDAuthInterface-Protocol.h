//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol SDXPCAppleIDAuthInterface
- (void)statusInfoWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)requestWithInfo:(NSDictionary *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)personInfoWithEmailOrPhone:(NSString *)arg1 completion:(void (^)(SFAppleIDPersonInfo *, NSError *))arg2;
- (void)myAccountWithCompletion:(void (^)(SFAppleIDAccount *, NSError *))arg1;
- (void)accountForAppleID:(NSString *)arg1 withCompletion:(void (^)(SFAppleIDAccount *, NSError *))arg2;
@end

