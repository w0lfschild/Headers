//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class CNContact, PKPayment, PKPaymentAuthorizationCoordinator, PKPaymentMethod, PKShippingMethod;

@protocol PKPaymentAuthorizationCoordinatorDelegate <NSObject>
- (void)paymentAuthorizationCoordinatorDidFinish:(PKPaymentAuthorizationCoordinator *)arg1;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didAuthorizePayment:(PKPayment *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;

@optional
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didSelectShippingAddress:(CNContact *)arg2 completion:(void (^)(long long, NSArray *, NSArray *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 completion:(void (^)(long long, NSArray *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 handler:(void (^)(PKPaymentRequestPaymentMethodUpdate *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didSelectShippingAddress:(CNContact *)arg2 handler:(void (^)(PKPaymentRequestShippingContactUpdate *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 handler:(void (^)(PKPaymentRequestShippingMethodUpdate *))arg3;
- (void)paymentAuthorizationCoordinatorWillAuthorizePayment:(PKPaymentAuthorizationCoordinator *)arg1;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didAuthorizePayment:(PKPayment *)arg2 completion:(void (^)(long long))arg3;
@end

