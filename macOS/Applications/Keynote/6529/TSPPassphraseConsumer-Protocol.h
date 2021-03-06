//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSObject<OS_dispatch_queue>, NSString, SFUCryptoKey;

@protocol TSPPassphraseConsumer <NSObject>
@property(readonly, nonatomic) NSString *lastPasswordAttempted;
- (BOOL)setPassphrase:(NSString *)arg1;

@optional
@property(readonly, nonatomic) BOOL requiresNetworkValidation;
@property(readonly, nonatomic) NSData *keychainGenericItem;
@property(readonly, nonatomic) NSString *passphraseHint;
- (void)cancel;
- (void)setPassphrase:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (BOOL)setDecryptionKey:(SFUCryptoKey *)arg1;
@end

